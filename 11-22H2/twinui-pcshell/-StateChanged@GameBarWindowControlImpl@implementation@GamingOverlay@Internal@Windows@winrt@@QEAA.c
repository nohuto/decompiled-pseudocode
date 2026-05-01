/*
 * XREFs of ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@56@@Z @ 0x180411E34
 * Callers:
 *     ?add_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180412250 (-add_StateChanged@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?add@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@2@@Z @ 0x1804120DC (-add@-$event@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::StateChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h]
  __int64 *v10; // [rsp+50h] [rbp+18h]

  v6 = a1 + 22;
  AcquireSRWLockExclusive(a1 + 22);
  v9 = v6;
  v8 = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  v10 = &v8;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::add(
    &a1[10],
    a2,
    &v8);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
