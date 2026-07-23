/*
 * XREFs of sub_14066F440 @ 0x14066F440
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 * Callees:
 *     sub_140682A98 @ 0x140682A98 (sub_140682A98.c)
 *     sub_1406E2D00 @ 0x1406E2D00 (sub_1406E2D00.c)
 */

__int64 __fastcall sub_14066F440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // r10d

  v5 = 0;
  *a5 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 1296) || (v5 = sub_140682A98(*(_QWORD *)(a1 + 1296), a2, a5), v5 >= 0) )
  {
    if ( !*a5 && a4 )
      return (unsigned int)sub_1406E2D00(a3, a4, a5);
  }
  return (unsigned int)v5;
}
