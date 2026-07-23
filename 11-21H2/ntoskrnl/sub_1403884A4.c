/*
 * XREFs of sub_1403884A4 @ 0x1403884A4
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403884A4(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
