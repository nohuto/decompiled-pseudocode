/*
 * XREFs of sub_14050FFFC @ 0x14050FFFC
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140508620 (HalQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 *     sub_1405104B0 @ 0x1405104B0 (sub_1405104B0.c)
 */

__int64 __fastcall sub_14050FFFC(unsigned int a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !off_140E00010 || !off_140E00010[8] )
    return 3221225474LL;
  sub_140456C50(0LL);
  sub_140456C76(0x100u);
  ((void (__fastcall *)(_QWORD, __int64, __int64))off_140E00010[8])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
  sub_140456C2C(0LL);
  return sub_1405104B0(v4);
}
