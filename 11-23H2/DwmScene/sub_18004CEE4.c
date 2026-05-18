/*
 * XREFs of sub_18004CEE4 @ 0x18004CEE4
 * Callers:
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_18004B880 @ 0x18004B880 (sub_18004B880.c)
 *     sub_18004CA50 @ 0x18004CA50 (sub_18004CA50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CEE4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 88 * a2;
}
