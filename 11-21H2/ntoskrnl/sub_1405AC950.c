/*
 * XREFs of sub_1405AC950 @ 0x1405AC950
 * Callers:
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     sub_14097C814 @ 0x14097C814 (sub_14097C814.c)
 *     sub_14097CC1C @ 0x14097CC1C (sub_14097CC1C.c)
 *     sub_14097D5F0 @ 0x14097D5F0 (sub_14097D5F0.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall sub_1405AC950(__int64 a1)
{
  _QWORD *v2; // rax

  LOBYTE(v2) = ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 392LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
