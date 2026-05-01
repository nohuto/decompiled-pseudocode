/*
 * XREFs of ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x18067D1F0
 * Callers:
 *     _lambda_0c8890f986995415a854c044c041a5fc_::_lambda_invoker_cdecl_ @ 0x180225430 (_lambda_0c8890f986995415a854c044c041a5fc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SnapFlyoutHost::XamlExplorerHostStartThreadProc(SnapFlyoutHost *this)
{
  winrt *v2; // rcx
  wil::details *Event; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned int)EnableMouseInPointerForThread() )
    winrt::throw_last_error(v2);
  *((_DWORD *)this + 42) = 2;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v4);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 9,
    Event);
}
