/*
 * XREFs of ??$_Assign_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@0Uforward_iterator_tag@1@@Z @ 0x180669460
 * Callers:
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x18066CEB0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x18051C52C (-_Clear_and_reserve_geometric@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std.c)
 *     ??$_Copy_unchecked@PEBUtagRECT@@PEAUCRect@Geometry@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@0PEAU12@@Z @ 0x18066953C (--$_Copy_unchecked@PEBUtagRECT@@PEAUCRect@Geometry@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@0PE.c)
 */

__int64 __fastcall std::vector<Geometry::CRect>::_Assign_range<tagRECT const *>(void **a1, __int64 a2, int *a3)
{
  _BYTE *v3; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  int *v10; // rdx
  _DWORD *v11; // rbx
  int *v12; // rdx
  int v13; // eax

  v3 = *a1;
  v7 = ((__int64)a3 - a2) >> 4;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 <= v8 )
  {
    result = std::_Copy_unchecked<tagRECT const *,Geometry::CRect *>(a2, a3, *a1);
    v11 = &v3[16 * v7];
  }
  else
  {
    if ( v7 > ((_BYTE *)a1[2] - v3) >> 4 )
    {
      std::vector<Geometry::CRect>::_Clear_and_reserve_geometric(a1, v7);
      v8 = 0LL;
    }
    result = std::_Copy_unchecked<tagRECT const *,Geometry::CRect *>(a2, a2 + 16 * v8, *a1);
    v11 = a1[1];
    if ( v10 != a3 )
    {
      v12 = v10 + 2;
      do
      {
        *v11 = *(v12 - 2);
        v11[1] = *(v12 - 1);
        v13 = *v12;
        v12 += 4;
        v11[2] = v13;
        v11[3] = *(v12 - 3);
        result = (__int64)(v12 - 2);
        v11 += 4;
      }
      while ( v12 - 2 != a3 );
    }
  }
  a1[1] = v11;
  return result;
}
