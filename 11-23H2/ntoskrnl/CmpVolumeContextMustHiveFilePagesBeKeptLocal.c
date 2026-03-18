/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1407507AC
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

bool __fastcall CmpVolumeContextMustHiveFilePagesBeKeptLocal(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v3; // rdi
  bool v4; // di

  v1 = (signed __int64 *)(a1 + 56);
  v3 = KeAbPreAcquire(a1 + 56, 0LL);
  if ( _InterlockedCompareExchange64(v1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v1, 0LL, v3, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v4 = *(_BYTE *)(a1 + 64) == 0;
  if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return v4;
}
