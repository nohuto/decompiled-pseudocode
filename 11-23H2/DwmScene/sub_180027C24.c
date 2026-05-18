/*
 * XREFs of sub_180027C24 @ 0x180027C24
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_1800D99A0 @ 0x1800D99A0 (sub_1800D99A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180027C24(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[6];
  if ( v2 )
    sub_180010530(v2);
  return sub_1800100E8(a2, 0x38uLL);
}
