/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent_::_1_::dtor$10 @ 0x180723147
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 176));
  }
  return result;
}
