/*
 * XREFs of ??$emplace_back@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAUCRect@Geometry@@@Z @ 0x18059AF18
 * Callers:
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18059A7B4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x18059E470 (-_Growmap@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<tagRECT>::emplace_back<Geometry::CRect &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  v2 = a1[4];
  v4 = a1[2];
  if ( v4 <= v2 + 1 )
  {
    std::deque<tagRECT>::_Growmap(a1);
    v4 = a1[2];
    v2 = a1[4];
  }
  a1[3] &= v4 - 1;
  v6 = (v4 - 1) & (v2 + a1[3]);
  v7 = a1[1];
  if ( !*(_QWORD *)(v7 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v7 = a1[1];
  }
  *(_OWORD *)*(_QWORD *)(v7 + 8 * v6) = *a2;
  return *(_QWORD *)(a1[1] + 8 * ((a1[3] + a1[4]++) & (a1[2] - 1LL)));
}
