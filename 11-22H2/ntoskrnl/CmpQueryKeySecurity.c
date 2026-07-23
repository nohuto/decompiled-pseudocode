/*
 * XREFs of CmpQueryKeySecurity @ 0x1406D5C50
 * Callers:
 *     CmpSecurityMethod @ 0x1406D5980 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpUnlockKcbStack @ 0x1406D5418 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406D56E8 (CmpLockKcbStackShared.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406D5DF0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStack @ 0x1406D7DD0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406D7E10 (CmpPopulateKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140768D0C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF6160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpQueryKeySecurity(
        _QWORD *a1,
        DWORD *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor)
{
  char v5; // si
  PSECURITY_DESCRIPTOR v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // rbp
  NTSTATUS started; // ebx
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h]

  v5 = 0;
  v9 = 0LL;
  v19 = 0LL;
  ObjectsSecurityDescriptor = 0LL;
  v20 = 0LL;
  WORD1(v19) = -1;
  v14 = CmpAcquireShutdownRundown(a1, a2, a3);
  if ( v14 )
  {
    CmpLockRegistry(v11, v10, v12, v13);
    v15 = a1[1];
    v5 = 1;
    started = CmpStartKcbStack(&v19, *(unsigned __int16 *)(v15 + 66));
    if ( started >= 0 )
    {
      CmpPopulateKcbStack(&v19, v15);
      CmpLockKcbStackShared((__int64)&v19);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &ObjectsSecurityDescriptor), started >= 0)
          && (v9 = ObjectsSecurityDescriptor,
              started = CmpPerformKeyBodyDeletionCheck(a1, ObjectsSecurityDescriptor),
              started >= 0) )
        {
          ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(
                                                               (__int64)&v19,
                                                               (__int64)v9,
                                                               0LL)
                                                           + 32);
          started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack((__int64)&v19);
    }
  }
  else
  {
    started = -1073741431;
  }
  v17 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v20 + 1));
  if ( v5 )
    CmpUnlockRegistry(v17, v10, v12, v13);
  if ( v14 )
    CmpReleaseShutdownRundown(v17, v10);
  return (unsigned int)started;
}
