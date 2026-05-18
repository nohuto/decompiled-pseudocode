/*
 * XREFs of sub_1800278BC @ 0x1800278BC
 * Callers:
 *     sub_1800265A8 @ 0x1800265A8 (sub_1800265A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800278BC(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  if ( !((a1[1] - *a1) >> 4) )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v1;
}
