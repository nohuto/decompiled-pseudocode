/*
 * XREFs of ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180089D68
 * Callers:
 *     _DWMInputRouter::GetTargetFromInputSite_::_1_::dtor$31 @ 0x180057670 (_DWMInputRouter--GetTargetFromInputSite_--_1_--dtor$31.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$45 @ 0x1800578A0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$45.c)
 *     _DWMLegacyInputTarget::GetInputSite_::_1_::dtor$2 @ 0x180057D10 (_DWMLegacyInputTarget--GetInputSite_--_1_--dtor$2.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$1 @ 0x18008C3A8 (_ForegroundManager--SetInputDelegation_--_1_--dtor$1.c)
 *     _CursorProcessor::GetWindowsMessageProcessAndThreadFromContext_::_1_::dtor$0 @ 0x180139177 (_CursorProcessor--GetWindowsMessageProcessAndThreadFromContext_--_1_--dtor$0.c)
 *     _DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList_::_1_::dtor$0 @ 0x18019A2DB (_DWMInputRouter--CheckForVirtualTouchpadFromInputSiteList_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::PopulateInputSiteFromWindowId_::_1_::dtor$1 @ 0x18019D018 (_DWMLegacyInputTarget--PopulateInputSiteFromWindowId_--_1_--dtor$1.c)
 *     _MagnifierProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801AFD50 (_MagnifierProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _MagnifierGestureTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801B0CDF (_MagnifierGestureTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _MagnifierToggleTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801B0DA2 (_MagnifierToggleTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
