/*
 * XREFs of sub_1800347FC @ 0x1800347FC
 * Callers:
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 __fastcall sub_1800347FC(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 704);
  if ( (*(_QWORD *)(a1 + 712) - v5) >> 4 <= v4 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  sub_18001246C(v3, (_QWORD *)(v5 + 16 * v4));
  return v6;
}
