/*
 * XREFs of ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1806866B8
 * Callers:
 *     ??$?RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x180680E88 (--$-RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$eve.c)
 *     ?remove_ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180686870 (-remove_ResetNotificationBoundary@-$produce@UDesktopSnapLayoutManager@factory_implementation@Sna.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801115DC (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ??$make_event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180111620 (--$make_event_array@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Wind.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18018EF70 (--$exchange@U-$com_ptr@U-$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Inte.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::remove(
        unsigned int *a1,
        PVOID a2)
{
  unsigned int *v3; // rdi
  unsigned int v4; // r14d
  unsigned int *v5; // rbx
  bool v6; // r12
  __int64 *v7; // rax
  winrt::Windows::Foundation::IUnknown *v8; // r13
  winrt::Windows::Foundation::IUnknown *v9; // r15
  __int64 v10; // rdx
  __int64 *v11; // rax
  unsigned int *v12; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v13; // [rsp+80h] [rbp+50h] BYREF
  winrt::Windows::Foundation::IUnknown *v14; // [rsp+88h] [rbp+58h] BYREF

  v12 = a1;
  v3 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive(&stru_18098F1A8);
  if ( !(_QWORD)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    goto LABEL_19;
  v4 = *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                 + 4)
     - 1;
  v5 = 0LL;
  v12 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>(
           &v14,
           v4);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
      (__int64 *)&v12,
      v7);
    if ( v14 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)&v14);
    v5 = v12;
    v8 = (winrt::Windows::Foundation::IUnknown *)(v12 + 2);
    v9 = (winrt::Windows::Foundation::IUnknown *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                                + 8);
    v14 = (winrt::Windows::Foundation::IUnknown *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                                 + 8
                                                 + 8LL
                                                 * *(unsigned int *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                                                   + 4));
    if ( (winrt::Windows::Foundation::IUnknown *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                                + 8) == v14 )
      goto LABEL_17;
    do
    {
      if ( v6 || a2 != WINRT_IMPL_EncodePointer(*(PVOID *)v9) )
      {
        if ( !v4 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v8, v9);
        v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v8 + 8);
        --v4;
      }
      else
      {
        v6 = 1;
      }
      v9 = (winrt::Windows::Foundation::IUnknown *)((char *)v9 + 8);
    }
    while ( v9 != v14 );
  }
  else
  {
    v6 = WINRT_IMPL_EncodePointer(*(PVOID *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                           + 8)) == a2;
  }
  if ( v6 )
  {
    _Platform_AcquireSRWLockExclusive(
      (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
    + 1);
    v11 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
            &v14,
            v10,
            (__int64 *)&v12);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
      (__int64 *)&v13,
      v11);
    if ( v14 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)&v14);
    ReleaseSRWLockExclusive_0(
      (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
    + 1);
    v3 = v13;
    v5 = v12;
  }
LABEL_17:
  if ( v5 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v12);
LABEL_19:
  ReleaseSRWLockExclusive_0(&stru_18098F1A8);
  if ( v3 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v13);
}
