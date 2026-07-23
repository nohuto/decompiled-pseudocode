/*
 * XREFs of sub_14077139C @ 0x14077139C
 * Callers:
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14094D7E8 @ 0x14094D7E8 (sub_14094D7E8.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 */

__int64 __fastcall sub_14077139C(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&qword_140D00AC0 && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return sub_140771524(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
