/*
 * XREFs of sub_14051011C @ 0x14051011C
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 *     sub_1405104B0 @ 0x1405104B0 (sub_1405104B0.c)
 */

__int64 __fastcall sub_14051011C(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !off_140E00010 || !off_140E00010[5] )
    return 3221225474LL;
  sub_140456C50(&dword_140C4C1A0);
  sub_140456C50(&dword_140C4C18C);
  sub_140456C76(0x20u);
  ((void (__fastcall *)(__int64, __int64, _QWORD))off_140E00010[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  sub_140456C2C(&dword_140C4C18C);
  sub_140456C2C(&dword_140C4C1A0);
  return sub_1405104B0(v4);
}
