/*
 * XREFs of sub_14051ABD8 @ 0x14051ABD8
 * Callers:
 *     sub_140528650 @ 0x140528650 (sub_140528650.c)
 *     sub_1405286D0 @ 0x1405286D0 (sub_1405286D0.c)
 *     sub_1405287F0 @ 0x1405287F0 (sub_1405287F0.c)
 * Callees:
 *     sub_1405279AC @ 0x1405279AC (sub_1405279AC.c)
 *     sub_140529AF8 @ 0x140529AF8 (sub_140529AF8.c)
 */

__int64 __fastcall sub_14051ABD8(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !byte_140C4BCBC || *(_BYTE *)(a1 + 52) )
    return sub_140529AF8(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return sub_1405279AC(a1, a5);
}
