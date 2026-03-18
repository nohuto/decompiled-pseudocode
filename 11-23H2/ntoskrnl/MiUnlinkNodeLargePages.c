/*
 * XREFs of MiUnlinkNodeLargePages @ 0x1402D76D0
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1402E8E18 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiGetHugePageToZero @ 0x140351160 (MiGetHugePageToZero.c)
 * Callees:
 *     MiInitializeLargePageAllocationPacket @ 0x1402D7E30 (MiInitializeLargePageAllocationPacket.c)
 *     MiLockFreeLargePageLists @ 0x1402D7FF0 (MiLockFreeLargePageLists.c)
 *     MiReleaseLargePageAllocationLocks @ 0x1402D8200 (MiReleaseLargePageAllocationLocks.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x1402D8410 (MiGetFreeLargePagesSearchTypes.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall MiUnlinkNodeLargePages(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  _QWORD v14[24]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v14, 0, 0xB8uLL);
  if ( !(unsigned int)MiInitializeLargePageAllocationPacket((unsigned int)v14, a1, a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0LL;
  do
  {
    if ( !(unsigned int)MiLockFreeLargePageLists(v14) )
      break;
    MiGetFreeLargePagesSearchTypes(v14);
    MiReleaseLargePageAllocationLocks(v14);
  }
  while ( !LOBYTE(v14[7]) );
  return v14[14];
}
