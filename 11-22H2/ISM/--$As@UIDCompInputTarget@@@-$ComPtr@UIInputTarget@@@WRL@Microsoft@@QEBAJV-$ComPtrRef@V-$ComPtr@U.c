/*
 * XREFs of ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010553C
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180107920 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x1801C6120 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1801C6270 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801C64E4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSink@DWMFocusedInputTarget@@UEBAPEAXXZ @ 0x1801C8230 (-GetInputSink@DWMFocusedInputTarget@@UEBAPEAXXZ.c)
 *     ?GetInteractionObject@DWMFocusedInputTarget@@UEBAIXZ @ 0x1801C82B0 (-GetInteractionObject@DWMFocusedInputTarget@@UEBAIXZ.c)
 *     ?GetRoutingInfo@DWMFocusedInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1801C83F0 (-GetRoutingInfo@DWMFocusedInputTarget@@UEBA-AUtagMsgRoutingInfo@@XZ.c)
 *     ?IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1801C8480 (-IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z.c)
 *     ?IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1801C8510 (-IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByLuid@DWMFocusedInputTarget@@UEBA_NPEAX@Z @ 0x1801C85B0 (-IsSameByLuid@DWMFocusedInputTarget@@UEBA_NPEAX@Z.c)
 *     ?SetInteractionObject@DWMFocusedInputTarget@@UEAAJI@Z @ 0x1801C8640 (-SetInteractionObject@DWMFocusedInputTarget@@UEAAJI@Z.c)
 *     ?ShouldRedirectToManipulationThread@DWMFocusedInputTarget@@UEBA_NXZ @ 0x1801C86D0 (-ShouldRedirectToManipulationThread@DWMFocusedInputTarget@@UEBA_NXZ.c)
 *     ?GetInputSink@ContextualProcessorBuffer@@UEBAPEAXXZ @ 0x1801CE9F0 (-GetInputSink@ContextualProcessorBuffer@@UEBAPEAXXZ.c)
 *     ?GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ @ 0x1801CEA70 (-GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ.c)
 *     ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1801CEB80 (-GetRoutingInfo@ContextualProcessorBuffer@@UEBA-AUtagMsgRoutingInfo@@XZ.c)
 *     ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1801CEDC0 (-IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z.c)
 *     ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1801CEE40 (-IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByLuid@ContextualProcessorBuffer@@UEBA_NPEAX@Z @ 0x1801CEED0 (-IsSameByLuid@ContextualProcessorBuffer@@UEBA_NPEAX@Z.c)
 *     ?SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z @ 0x1801CFD10 (-SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z.c)
 *     ?ShouldRedirectToManipulationThread@ContextualProcessorBuffer@@UEBA_NXZ @ 0x1801CFD90 (-ShouldRedirectToManipulationThread@ContextualProcessorBuffer@@UEBA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, a2);
}
