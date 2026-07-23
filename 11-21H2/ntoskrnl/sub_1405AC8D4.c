/*
 * XREFs of sub_1405AC8D4 @ 0x1405AC8D4
 * Callers:
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall sub_1405AC8D4(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  LOBYTE(v3) = ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
