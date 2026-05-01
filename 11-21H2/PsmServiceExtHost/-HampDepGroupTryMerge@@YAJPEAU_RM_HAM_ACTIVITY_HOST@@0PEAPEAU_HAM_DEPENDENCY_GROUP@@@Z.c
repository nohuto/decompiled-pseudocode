/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007680C
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074DB0 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800741D4 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180074A10 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180074D10 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800753C0 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180075FD8 (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800766A4 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180076B64 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180076CA8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800794DC (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v5; // r12
  __int64 *v6; // r14
  unsigned __int64 v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct _HAM_DEPENDENCY_LINK *FirstLink; // r13
  struct _RTL_BALANCED_NODE **v16; // r12
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  DWORD v24; // ecx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v26[2]; // [rsp+20h] [rbp-50h] BYREF
  int v27; // [rsp+30h] [rbp-40h]
  struct _RM_HAM_ACTIVITY_HOST *v28; // [rsp+40h] [rbp-30h]
  struct _HAM_DEPENDENCY_GROUP **v29; // [rsp+48h] [rbp-28h]
  unsigned __int64 v30[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)a1 + 88);
  v29 = a3;
  v28 = a1;
  v5 = a1;
  if ( _InterlockedIncrement64(v3 + 12) <= 1 )
    __fastfail(0xEu);
  v6 = (__int64 *)*((_QWORD *)a2 + 88);
  if ( _InterlockedIncrement64(v6 + 12) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  v7 = *v3;
  v8 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  v9 = *v6;
  if ( *v3 >= (unsigned __int64)*v6 )
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  HampDepGroupWaitEnterStateChange(v8);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  if ( v7 >= v9 )
    v10 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  HampDepGroupWaitEnterStateChange(v10);
  HampHostAcquireTwoLocksExclusive(v5, a2);
  if ( *((__int64 **)v5 + 88) == v3 && *((__int64 **)a2 + 88) == v6 )
  {
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    v26[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26;
    v26[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26);
    for ( i = v26[0]; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
      HampDepGroupRemoveHostForMerge(
        (struct _HAM_DEPENDENCY_GROUP *)v3,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 744));
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( j = v26[0]; j != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
      HampDepGroupAddHost(
        (struct _HAM_DEPENDENCY_GROUP *)v6,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 744));
    v13 = 0;
    FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
    if ( FirstLink )
    {
      v16 = (struct _RTL_BALANCED_NODE **)(v6 + 9);
      do
      {
        CempLockTrackerMarkAcquired(HampLockTrackerId, v14, 2u, 0);
        RtlAcquireSRWLockExclusive((char *)FirstLink + 48);
        *((_DWORD *)FirstLink + 14) = GetCurrentThreadId();
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3, v17);
        RtlRbRemoveNode(v3 + 9, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v18 = *((_QWORD *)FirstLink + 3);
        v30[1] = *((_QWORD *)FirstLink + 4);
        v30[0] = v18;
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6, v19);
        v21 = (unsigned __int64)*v16;
        if ( (v6[10] & 1) != 0 )
        {
          if ( v21 )
            v21 ^= (unsigned __int64)v16;
          else
            v21 = 0LL;
        }
        LOBYTE(v20) = 0;
        v27 = v6[10] & 1;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v30, (struct _RTL_BALANCED_NODE *)v21) < 0 )
            {
              v22 = *(_QWORD *)v21;
              if ( v27 )
              {
                if ( !v22 )
                  goto LABEL_35;
                v22 ^= v21;
              }
              if ( !v22 )
              {
LABEL_35:
                LOBYTE(v20) = 0;
                break;
              }
            }
            else
            {
              v22 = *(_QWORD *)(v21 + 8);
              if ( v27 )
              {
                if ( !v22 )
                  goto LABEL_29;
                v22 ^= v21;
              }
              if ( !v22 )
              {
LABEL_29:
                LOBYTE(v20) = 1;
                break;
              }
            }
            v21 = v22;
          }
        }
        RtlRbInsertNodeEx(v6 + 9, v21, v20, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        if ( _InterlockedIncrement64(v6 + 12) <= 1 )
          __fastfail(0xEu);
        v24 = HampLockTrackerId;
        *((_QWORD *)FirstLink + 5) = v6;
        CempLockTrackerMarkReleased(v24, v23, 2u);
        *((_DWORD *)FirstLink + 14) = 0;
        RtlReleaseSRWLockExclusive((char *)FirstLink + 48);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
      v5 = v28;
    }
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v26);
    HampDepGroupDereferenceMembers(v26);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    *v29 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v13 = -1073741267;
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v13;
}
