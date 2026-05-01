/*
 * XREFs of ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BD8C
 * Callers:
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BD50 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D55C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v12; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 i; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rsi
  DWORD v17; // r12d
  _QWORD *Value; // r14
  __int64 v19; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  bool k; // cf
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 m; // rcx

  RmpAcquireGlobalLock();
  HampDepGroupAcquireLockExclusive(a1);
  v4 = (unsigned __int64)a1 + 56;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 8);
  if ( (v6 & 1) != 0 )
  {
    if ( v6 == 1 )
      v7 = 0LL;
    else
      v7 = v6 ^ (v4 | 1);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 8);
  }
  while ( 1 )
  {
    v9 = v7 - 720;
    v10 = -(__int64)v7;
    v11 = v9 & -(__int64)(v10 != 0);
    if ( !v11 )
      break;
    if ( *(int *)(v11 - 40) >= 0 )
    {
      ++*(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x258);
      v12 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v11 + 744);
      v13 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      if ( *v13 != a2 )
        __fastfail(3u);
      *(_QWORD *)v12 = a2;
      *(_QWORD *)(v11 + 752) = v13;
      *v13 = v12;
      *((_QWORD *)a2 + 1) = v12;
    }
    v14 = v11 + 720;
    v7 = *(_QWORD *)(v14 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v14 + 16); ; i = *(_QWORD *)(v7 + 16) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == v14 )
          break;
        v14 = v7;
      }
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
  for ( j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; j != a2; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
  {
    v17 = HampLockTrackerId;
    *((_DWORD *)j + 10) |= 1u;
    if ( v17 != -1 )
    {
      Value = TlsGetValue(v17);
      if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)j - 744);
    *((_DWORD *)j - 184) = GetCurrentThreadId();
  }
  HampDepGroupAcquireLockExclusive(a1);
  v19 = *((_QWORD *)a1 + 8);
  v20 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2;
  if ( (v19 & 1) != 0 )
  {
    if ( v19 == 1 )
      v21 = 0LL;
    else
      v21 = v19 ^ (v4 | 1);
  }
  else
  {
    v21 = *((_QWORD *)a1 + 8);
  }
  v22 = v21 - 720;
  for ( k = v21 != 0; ; k = v25 != 0 )
  {
    v26 = v22 & -(__int64)k;
    if ( !v26 )
    {
      v5 = 1;
      goto LABEL_40;
    }
    if ( *(int *)(v26 - 40) >= 0 )
      break;
LABEL_34:
    v27 = v26 + 720;
    v25 = *(_QWORD *)(v26 + 728);
    if ( v25 )
    {
      v24 = *(_QWORD **)v25;
      if ( *(_QWORD *)v25 )
      {
        do
        {
          v25 = (unsigned __int64)v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
    }
    else
    {
      for ( m = *(_QWORD *)(v27 + 16); ; m = *(_QWORD *)(v25 + 16) )
      {
        v25 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v25 || *(_QWORD *)v25 == v27 )
          break;
        v27 = v25;
      }
    }
    v22 = v25 - 720;
  }
  if ( v20 != a2
    && (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v20 - 744) == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26 )
  {
    v20 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)v20;
    goto LABEL_34;
  }
  HampDepGroupReleaseLockExclusive(a1);
LABEL_40:
  RmpReleaseGlobalLock();
  return v5;
}
