/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800428A8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B99FC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800DE1EC (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800DEB1C (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800DEBE4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x1800E1540 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F12A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1_::Invoke @ 0x180188050 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatch_ea_180188050.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x92D,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v2);
}
