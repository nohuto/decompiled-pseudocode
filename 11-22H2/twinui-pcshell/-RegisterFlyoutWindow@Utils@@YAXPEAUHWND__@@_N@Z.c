/*
 * XREFs of ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1806C2D50
 * Callers:
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1806C4BD4 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1806C5034 (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::RegisterFlyoutWindow(HWND hWnd, HWND a2)
{
  wil::details *Event; // rdi
  const char *v4; // r9
  void *v5; // rdx
  const char *v6; // r9
  wil::details *v7; // rbx
  void *v8; // rdx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a2 )
  {
    v11 = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, L"MeetAndChatFlyoutShown", 1u, 0x1F0003u);
    if ( !Event )
      wil::details::in1diag3::Throw_GetLastError(
        retaddr,
        (void *)0x1817,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        v4);
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v11,
      Event);
    if ( !SetPropW(hWnd, L"MeetAndChatFlyout", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x174,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
        v6);
    v7 = v11;
    wil::details::SetEvent(v11, v5);
    if ( v7 )
      wil::details::CloseHandle(v7, v8);
  }
  else if ( IsWindow(hWnd) )
  {
    if ( !RemovePropW(hWnd, L"MeetAndChatFlyout") )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x17B,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
        v9);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x80070578LL);
  }
}
