/*
 * XREFs of ??$_Copy_unchecked@PEBUtagRECT@@PEAUCRect@Geometry@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@0PEAU12@@Z @ 0x18066953C
 * Callers:
 *     ??$_Assign_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@0Uforward_iterator_tag@1@@Z @ 0x180669460 (--$_Assign_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@st.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Copy_unchecked<tagRECT const *,Geometry::CRect *>(int *a1, int *a2, _DWORD *a3)
{
  int *v3; // r11
  int v4; // eax
  int v5; // ecx
  int v6; // r9d
  int v7; // r10d

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = *(v3 - 2);
      v5 = *(v3 - 1);
      v6 = *v3;
      v7 = v3[1];
      v3 += 4;
      *a3 = v4;
      a3[1] = v5;
      a3[2] = v6;
      a3[3] = v7;
      a3 += 4;
    }
    while ( v3 - 2 != a2 );
  }
  return a3;
}
