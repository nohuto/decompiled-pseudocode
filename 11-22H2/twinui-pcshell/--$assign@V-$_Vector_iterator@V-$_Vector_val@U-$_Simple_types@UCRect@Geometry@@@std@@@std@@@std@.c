/*
 * XREFs of ??$assign@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@$0A@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@1@0@Z @ 0x180669868
 * Callers:
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x180669060 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x18066DBCC (-_Growmap@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z.c)
 */

void __fastcall std::deque<tagRECT>::assign<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>,0>(
        _QWORD *a1,
        __int128 *a2,
        __int128 *a3)
{
  __int64 v3; // r9
  __int128 *v5; // rsi
  __int64 v6; // r8
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 i; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int128 v15; // xmm0

  v3 = a1[3];
  v5 = a2;
  v6 = v3 + a1[4];
  if ( a2 == a3 )
  {
LABEL_4:
    for ( i = v6 - v3; i; --i )
    {
      if ( a1[4]-- == 1LL )
        a1[3] = 0LL;
    }
  }
  else
  {
    while ( v3 != v6 )
    {
      v8 = *v5;
      v9 = v3 & (a1[2] - 1LL);
      ++v5;
      ++v3;
      *(_OWORD *)*(_QWORD *)(a1[1] + 8 * v9) = v8;
      if ( v5 == a3 )
        goto LABEL_4;
    }
    v12 = a1[4];
    do
    {
      if ( a1[2] <= (unsigned __int64)(v12 + 1) )
        std::deque<tagRECT>::_Growmap(a1);
      v13 = a1[2] - 1LL;
      a1[3] &= v13;
      v14 = v13 & (a1[4] + a1[3]);
      if ( !*(_QWORD *)(a1[1] + 8 * v14) )
        *(_QWORD *)(a1[1] + 8 * v14) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v15 = *v5++;
      *(_OWORD *)*(_QWORD *)(a1[1] + 8 * v14) = v15;
      v12 = a1[4] + 1LL;
      a1[4] = v12;
    }
    while ( v5 != a3 );
  }
}
