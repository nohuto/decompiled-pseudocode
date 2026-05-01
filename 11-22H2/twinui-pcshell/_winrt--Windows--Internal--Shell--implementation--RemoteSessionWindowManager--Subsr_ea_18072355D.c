/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor$12 @ 0x18072355D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 200) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 208));
  }
  return result;
}
