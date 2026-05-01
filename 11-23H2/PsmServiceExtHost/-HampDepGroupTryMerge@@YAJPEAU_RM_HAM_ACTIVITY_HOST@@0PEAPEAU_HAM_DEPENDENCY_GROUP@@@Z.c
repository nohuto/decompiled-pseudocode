/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D21C
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003CD58 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B0D0 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B534 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BD0C (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BFD8 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C1CC (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003C1F8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003D000 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D54C (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007CE08 (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 *v3; // r14
  struct _RM_HAM_ACTIVITY_HOST *v5; // r13
  __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rbx
  __int64 v13; // rdx
  struct _HAM_DEPENDENCY_LINK *FirstLink; // rdi
  struct _RTL_BALANCED_NODE **v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  int v19; // r13d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  DWORD v22; // ecx
  unsigned int v23; // ebx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v25[3]; // [rsp+20h] [rbp-40h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v26; // [rsp+38h] [rbp-28h]
  struct _HAM_DEPENDENCY_GROUP **v27; // [rsp+40h] [rbp-20h]
  unsigned __int64 v28[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = (__int64 *)*((_QWORD *)a1 + 88);
  v27 = a3;
  v26 = a1;
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
    v25[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25;
    v25[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25);
    for ( i = v25[0]; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
      HampDepGroupRemoveHostForMerge(v3, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 744));
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( j = v25[0]; j != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
      HampDepGroupAddHost(
        (struct _HAM_DEPENDENCY_GROUP *)v6,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 744));
    FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
    if ( FirstLink )
    {
      v15 = (struct _RTL_BALANCED_NODE **)(v6 + 9);
      do
      {
        CempLockTrackerMarkAcquired(HampLockTrackerId, v13, 2u, 0);
        RtlAcquireSRWLockExclusive((char *)FirstLink + 48);
        *((_DWORD *)FirstLink + 14) = GetCurrentThreadId();
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        RtlRbRemoveNode(v3 + 9, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v16 = *((_QWORD *)FirstLink + 3);
        v28[1] = *((_QWORD *)FirstLink + 4);
        v28[0] = v16;
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        v18 = (unsigned __int64)*v15;
        if ( (v6[10] & 1) != 0 && v18 )
          v18 ^= (unsigned __int64)v15;
        LOBYTE(v17) = 0;
        v19 = v6[10] & 1;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v28, (struct _RTL_BALANCED_NODE *)v18) < 0 )
            {
              v20 = *(_QWORD *)v18;
              if ( v19 )
              {
                if ( !v20 )
                  goto LABEL_34;
                v20 ^= v18;
              }
              if ( !v20 )
              {
LABEL_34:
                LOBYTE(v17) = 0;
                break;
              }
            }
            else
            {
              v20 = *(_QWORD *)(v18 + 8);
              if ( v19 )
              {
                if ( !v20 )
                  goto LABEL_28;
                v20 ^= v18;
              }
              if ( !v20 )
              {
LABEL_28:
                LOBYTE(v17) = 1;
                break;
              }
            }
            v18 = v20;
          }
        }
        RtlRbInsertNodeEx(v6 + 9, v18, v17, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((volatile signed __int64 **)FirstLink + 5));
        if ( _InterlockedIncrement64(v6 + 12) <= 1 )
          __fastfail(0xEu);
        v22 = HampLockTrackerId;
        *((_QWORD *)FirstLink + 5) = v6;
        CempLockTrackerMarkReleased(v22, v21, 2u);
        *((_DWORD *)FirstLink + 14) = 0;
        RtlReleaseSRWLockExclusive((char *)FirstLink + 48);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
      v5 = v26;
    }
    HampDepGroupUnlockMembers(v25);
    HampDepGroupDereferenceMembers(v25);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference(v3);
    v23 = 0;
    *v27 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v23 = -1073741267;
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    if ( v3 )
      HampDepGroupDereference(v3);
    if ( v6 )
      HampDepGroupDereference(v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v23;
}
