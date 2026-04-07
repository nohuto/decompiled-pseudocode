/*
 * XREFs of ?OnGlobalTimeUpdated@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@UEAAHXZ @ 0x1800F4590
 * Callers:
 *     <none>
 * Callees:
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5680 (-UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transit.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>::OnGlobalTimeUpdated(
        unsigned __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v1; // rbx
  __int64 v2; // rax
  int v3; // edi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = *((_QWORD *)v1 + 10);
  if ( v2 && *(_BYTE *)(v2 + 72) )
  {
    v3 = *(_DWORD *)(((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64)) + 0x58);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UnregisterGlobalTimeChanged(v1);
    if ( v3 == 1 )
    {
      try
      {
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartFirstAnimation(v1);
      }
      catch ( ... )
      {
        return (unsigned int)*winrt::to_hresult(&v5);
      }
    }
    else if ( v3 == 2 )
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation(v1);
    }
  }
  return 0LL;
}
