/*
 * XREFs of sub_140456B94 @ 0x140456B94
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 *     sub_1405104B0 @ 0x1405104B0 (sub_1405104B0.c)
 */

__int64 __fastcall sub_140456B94(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  KPCR *Pcr; // rdx
  __int64 v6; // r8

  if ( !off_140E00010 || !off_140E00010[3] )
    return 3221225474LL;
  sub_140456C50(&dword_140C4C1A0);
  sub_140456C76(8LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64))off_140E00010[3])(a1, v3, v2);
  Pcr = KeGetPcr();
  _InterlockedAnd((volatile signed __int32 *)&Pcr->HalReserved[8], 0xFFFFFFF7);
  sub_140456C2C(&dword_140C4C1A0, Pcr, v4);
  return sub_1405104B0(v6);
}
