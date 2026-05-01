/*
 * XREFs of ?add_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180412250
 * Callers:
 *     <none>
 * Callees:
 *     ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@56@@Z @ 0x180411E34 (-StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::add_StateChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a3 = *(_QWORD *)winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::StateChanged(
                       v3,
                       (__int64)&v5,
                       &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
