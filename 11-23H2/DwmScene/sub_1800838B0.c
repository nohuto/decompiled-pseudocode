/*
 * XREFs of sub_1800838B0 @ 0x1800838B0
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

__int64 __fastcall sub_1800838B0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(a1, a2);
  return sub_1800838E4(a1, v5, a3);
}
