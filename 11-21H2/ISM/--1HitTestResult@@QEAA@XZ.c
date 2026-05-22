/*
 * XREFs of ??1HitTestResult@@QEAA@XZ @ 0x1800CE710
 * Callers:
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x180057AC0 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x180057B00 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DragNDropProcessor::GetDragManagerInputSite_::_1_::dtor$1 @ 0x18013EFEC (_DragNDropProcessor--GetDragManagerInputSite_--_1_--dtor$1.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$0 @ 0x18013F398 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$0.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$0 @ 0x18013FC34 (_DragNDropProcessor--HitTest_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTestForTarget_::_1_::dtor$0 @ 0x18014A1B2 (_EdgyProcessor--HitTestForTarget_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x18019AB69 (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x18019B96C (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x18019BC8B (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x18019F966 (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 */

void __fastcall HitTestResult::~HitTestResult(HitTestResult *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)this + 96);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    (__int64 *)this + 1,
    v2,
    v3,
    v4);
}
