/*
 * XREFs of sub_140697760 @ 0x140697760
 * Callers:
 *     sub_1406976D0 @ 0x1406976D0 (sub_1406976D0.c)
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 * Callees:
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 */

__int64 __fastcall sub_140697760(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return sub_140697824(a1, a2, a3, a4, a7, a8);
  result = sub_140698298(qword_140D00AC0, 0, 0, a3);
  if ( (int)result >= 0 )
    return sub_140697824(a1, a2, a3, a4, a7, a8);
  return result;
}
