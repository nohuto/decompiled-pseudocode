/*
 * XREFs of _lambda_990a3a94af437e7dcdd96bcbb6b9cde9_::operator() @ 0x1803416D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___::Run @ 0x180343410 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180340EA0 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@2@XZ @ 0x180344590 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 */

__int64 __fastcall lambda_990a3a94af437e7dcdd96bcbb6b9cde9_::operator()(__int64 *a1)
{
  _QWORD *v2; // rax
  const char *v3; // r9
  bool v4; // di
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
                   a1 + 1,
                   &v7);
  v4 = *v2 && *(_QWORD *)(*a1 + 80);
  if ( v7 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v7);
  try
  {
    if ( v4 )
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::operator()<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
        *a1 + 80,
        *a1,
        (__int64)(a1 + 2));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x369,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                           v3);
  }
  return result;
}
