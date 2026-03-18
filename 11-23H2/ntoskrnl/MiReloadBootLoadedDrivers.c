/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140B469CC
 * Callers:
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     MiFlushTbList @ 0x140279880 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MmAcquireLoadLock @ 0x1407045B0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704930 (MmReleaseLoadLock.c)
 *     MiProcessLoadConfigForDriver @ 0x1407D4384 (MiProcessLoadConfigForDriver.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B45CC4 (MiApplyBootLoadedDriversFixups.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  struct _KTHREAD *Lock; // rbp
  _QWORD *i; // rbx
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v5[3] = 0LL;
  LODWORD(v5[1]) = 20;
  Lock = MmAcquireLoadLock();
  for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
  {
    if ( PsNtosImageBase != i[6] )
      MiProcessLoadConfigForDriver((__int64)i, 0LL);
    MiHandleBootImage(a1, i, v5);
  }
  MiFlushTbList((int *)v5);
  MiApplyBootLoadedDriversFixups(a1);
  MmReleaseLoadLock((__int64)Lock);
  return 1LL;
}
