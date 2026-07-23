/*
 * XREFs of sub_14050FF6C @ 0x14050FF6C
 * Callers:
 *     sub_1405246D0 @ 0x1405246D0 (sub_1405246D0.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 *     sub_1405104B0 @ 0x1405104B0 (sub_1405104B0.c)
 */

__int64 __fastcall sub_14050FF6C(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !off_140E00010 || !off_140E00010[7] )
    return 3221225474LL;
  sub_140456C50(&dword_140C4C198);
  sub_140456C76(0x80u);
  ((void (__fastcall *)(__int64, __int64, __int64))off_140E00010[7])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
  sub_140456C2C(&dword_140C4C198);
  return sub_1405104B0(v4);
}
