/*
 * XREFs of ??$?RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x180680E88
 * Callers:
 *     ?ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHXZ @ 0x180685110 (-ResetNotificationBoundary@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 *     ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x180682354 (--$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktop.c)
 *     ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1806866B8 (-remove@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
        __int64 a1,
        __int64 a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  PVOID *v6; // rdi
  __int64 v7; // rsi
  PVOID v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  _Platform_AcquireSRWLockExclusive(
    (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
  + 1);
  v4 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
  v5 = 0LL;
  if ( (_QWORD)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
  {
    v10 = (unsigned int *)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary,
      1u);
    v5 = v4;
    v3 = v10;
  }
  ReleaseSRWLockExclusive_0(
    (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
  + 1);
  if ( v5 )
  {
    v6 = (PVOID *)(v5 + 8);
    v7 = v5 + 8 + 8LL * *(unsigned int *)(v5 + 4);
    while ( v6 != (PVOID *)v7 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
                               v6,
                               a2) )
      {
        v8 = WINRT_IMPL_EncodePointer(*v6);
        winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::remove(v9, v8);
      }
      ++v6;
    }
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v10);
}
