/*
 * XREFs of ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18018524C
 * Callers:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801850D8 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??1?$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@@std@@QEAA@XZ @ 0x180521320 (--1-$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$deque@UPendingShowHideView.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                  + 8
                                                  * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2))) + 96LL);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v7 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v7 )
      std::_Deallocate<16,0>(v7, 0x78uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * *(_QWORD *)(a1 + 16));
  v5 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
