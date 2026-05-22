/*
 * XREFs of ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B34B8
 * Callers:
 *     _DWMLegacyInputTarget::GetInputSite_::_1_::dtor$2 @ 0x1800818A0 (_DWMLegacyInputTarget--GetInputSite_--_1_--dtor$2.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$1 @ 0x1800B5EF5 (_ForegroundManager--SetInputDelegation_--_1_--dtor$1.c)
 *     _CursorProcessor::GetWindowsMessageProcessAndThreadFromContext_::_1_::dtor$0 @ 0x18016738F (_CursorProcessor--GetWindowsMessageProcessAndThreadFromContext_--_1_--dtor$0.c)
 *     _DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList_::_1_::dtor$0 @ 0x1801C5D6B (_DWMInputRouter--CheckForVirtualTouchpadFromInputSiteList_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::PopulateInputSiteFromWindowId_::_1_::dtor$1 @ 0x1801C8AB0 (_DWMLegacyInputTarget--PopulateInputSiteFromWindowId_--_1_--dtor$1.c)
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801DB720 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     _MagnifierProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801DB9EC (_MagnifierProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _MagnifierGestureTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801DC98F (_MagnifierGestureTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _MagnifierToggleTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801DCA52 (_MagnifierToggleTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualTouchpadControllerProxy>::~ComPtr<VirtualTouchpadControllerProxy>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 16) + 8LL))(result + 16);
  }
  return result;
}
