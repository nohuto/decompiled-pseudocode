/*
 * XREFs of sub_14051040C @ 0x14051040C
 * Callers:
 *     sub_1405247B0 @ 0x1405247B0 (sub_1405247B0.c)
 * Callees:
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 *     sub_1405104B0 @ 0x1405104B0 (sub_1405104B0.c)
 */

__int64 sub_14051040C()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // r8

  if ( !off_140E00010 || !off_140E00010[6] )
    return 3221225474LL;
  sub_140456C50(&dword_140C4C198);
  sub_140456C50(&dword_140C4C194);
  sub_140456C76(0x40u);
  ((void (__fastcall *)(__int64, __int64, __int64))off_140E00010[6])(v2, v1, v0);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFBF);
  sub_140456C2C(&dword_140C4C194);
  sub_140456C2C(&dword_140C4C198);
  return sub_1405104B0(v3);
}
