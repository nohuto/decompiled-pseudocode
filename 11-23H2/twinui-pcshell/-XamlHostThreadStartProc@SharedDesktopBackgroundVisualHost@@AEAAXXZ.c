/*
 * XREFs of ?XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x1806EC5A4
 * Callers:
 *     _lambda_3a06c2c252ae701a17f26d0b735b6b61_::_lambda_invoker_cdecl_ @ 0x1806E52C0 (_lambda_3a06c2c252ae701a17f26d0b735b6b61_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5814 (--$-RUSharedDesktopBackgroundVisualHost@@_N@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::XamlHostThreadStartProc(SharedDesktopBackgroundVisualHost *this)
{
  winrt *v2; // rcx
  wil::details *Event; // rsi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !(unsigned int)EnableMouseInPointerForThread() )
    winrt::throw_last_error(v2);
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  v6 = (char *)this + 176;
  *((_DWORD *)this + 46) = 2;
  *((_BYTE *)this + 209) = 1;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v4);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 28,
    Event);
  if ( this != (SharedDesktopBackgroundVisualHost *)-176LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
  LOBYTE(v6) = 1;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::operator()<SharedDesktopBackgroundVisualHost,bool>(
    (RTL_SRWLOCK *)this + 16,
    (__int64)this,
    (__int64)&v6);
}
