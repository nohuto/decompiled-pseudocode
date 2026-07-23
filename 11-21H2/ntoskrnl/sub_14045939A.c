/*
 * XREFs of sub_14045939A @ 0x14045939A
 * Callers:
 *     sub_1405283C0 @ 0x1405283C0 (sub_1405283C0.c)
 *     sub_1405284B0 @ 0x1405284B0 (sub_1405284B0.c)
 *     sub_1405286D0 @ 0x1405286D0 (sub_1405286D0.c)
 *     sub_140528B30 @ 0x140528B30 (sub_140528B30.c)
 *     sub_140528E60 @ 0x140528E60 (sub_140528E60.c)
 *     sub_140528F50 @ 0x140528F50 (sub_140528F50.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14045939A(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    return sub_14042A5E0(v2, a2);
  else
    return (a2 & 0xFFF) != 0 ? 0xC000000D : 0;
}
