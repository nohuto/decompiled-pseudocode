/*
 * XREFs of sub_1800278F8 @ 0x1800278F8
 * Callers:
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800278F8(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( (a1[1] - *a1) >> 4 <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
