/*
 * XREFs of ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800766A4
 * Callers:
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180075838 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007680C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180075484 (-HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _RM_HAM_ACTIVITY_HOST *i; // rcx
  __int64 v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v11; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v12; // rax
  __int64 v13; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // r14
  __int64 v15; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v16; // r8
  __int64 v17; // rdi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rcx

  RmpAcquireGlobalLock();
  HampDepGroupAcquireLockExclusive(a1, v4);
  v5 = (unsigned __int64)a1 + 56;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 8);
  if ( (v7 & 1) != 0 )
  {
    if ( v7 == 1 )
      v8 = 0LL;
    else
      v8 = v7 ^ (v5 | 1);
  }
  else
  {
    v8 = *((_QWORD *)a1 + 8);
  }
  for ( i = (struct _RM_HAM_ACTIVITY_HOST *)((v8 - 720) & -(__int64)(v8 != 0));
        i;
        i = HampDepGroupGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)v10) )
  {
    if ( (unsigned int)RmHamHostReferenceUnsafe(i) )
    {
      v11 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      v12 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v10 + 744);
      if ( *v11 != a2 )
        __fastfail(3u);
      *(_QWORD *)v12 = a2;
      *(_QWORD *)(v10 + 752) = v11;
      *v11 = v12;
      *((_QWORD *)a2 + 1) = v12;
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
  for ( j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; j != a2; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
  {
    *((_DWORD *)j + 10) |= 1u;
    HampHostAcquireLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 744), 1);
  }
  HampDepGroupAcquireLockExclusive(a1, v13);
  v15 = *((_QWORD *)a1 + 8);
  v16 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2;
  if ( (v15 & 1) != 0 )
  {
    if ( v15 == 1 )
      v17 = 0LL;
    else
      v17 = v15 ^ (v5 | 1);
  }
  else
  {
    v17 = *((_QWORD *)a1 + 8);
  }
  NextHost = (struct _RM_HAM_ACTIVITY_HOST *)((v17 - 720) & -(__int64)(v17 != 0));
  if ( NextHost )
  {
    while ( *((int *)NextHost - 10) < 0
         || v16 != a2 && (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v16 - 744) == NextHost )
    {
      NextHost = HampDepGroupGetNextHost(NextHost);
      if ( !NextHost )
        goto LABEL_25;
    }
    HampDepGroupReleaseLockExclusive(a1);
  }
  else
  {
LABEL_25:
    v6 = 1;
  }
  RmpReleaseGlobalLock();
  return v6;
}
