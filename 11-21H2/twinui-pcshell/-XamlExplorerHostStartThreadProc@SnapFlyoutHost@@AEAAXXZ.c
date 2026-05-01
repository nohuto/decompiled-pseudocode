/*
 * XREFs of ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x1805B111C
 * Callers:
 *     _lambda_65c1233ad5fff8c312cfb0c5e5e2c0df_::_lambda_invoker_cdecl_ @ 0x1805AD3C0 (_lambda_65c1233ad5fff8c312cfb0c5e5e2c0df_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803B424C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SnapFlyoutHost::XamlExplorerHostStartThreadProc(SnapFlyoutHost *this)
{
  winrt *v2; // rcx
  wil::details *Event; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned int)EnableMouseInPointerForThread() )
    winrt::throw_last_error(v2);
  *((_DWORD *)this + 34) = 2;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x17FA,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v4);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 9,
    Event);
}
