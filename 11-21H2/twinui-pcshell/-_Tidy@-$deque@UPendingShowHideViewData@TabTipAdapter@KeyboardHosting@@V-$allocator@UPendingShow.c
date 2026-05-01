/*
 * XREFs of ?_Tidy@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x18047DA28
 * Callers:
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18046F014 (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v2 = a1[4];
  while ( v2 )
  {
    std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2))) + 96LL);
    v2 = a1[4] - 1LL;
    a1[4] = v2;
    if ( !v2 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x78uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
