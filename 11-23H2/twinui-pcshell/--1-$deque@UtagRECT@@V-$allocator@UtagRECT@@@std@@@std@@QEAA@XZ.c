/*
 * XREFs of ??1?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x180666F78
 * Callers:
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x180667508 (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewColl.c)
 *     _CSnappedWindowModel::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180667578 (_CSnappedWindowModel--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     ??1CSnapAssistControllerBase@@QEAA@XZ @ 0x180669F84 (--1CSnapAssistControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1806688C4 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagRECT>::~deque<tagRECT>(void **a1)
{
  void *v2; // rcx

  std::deque<tagRECT>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
