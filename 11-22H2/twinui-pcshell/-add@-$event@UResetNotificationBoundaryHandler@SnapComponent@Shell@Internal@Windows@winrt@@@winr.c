/*
 * XREFs of ?add@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18018EE5C
 * Callers:
 *     ?add_ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18018EE20 (-add_ResetNotificationBoundary@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801115DC (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ??$make_event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180111620 (--$make_event_array@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Wind.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18018EF70 (--$exchange@U-$com_ptr@U-$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Inte.c)
 *     ??$make_agile_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x18018EFAC (--$make_agile_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 */

// Hidden C++ exception states: #wind=2
PVOID *__fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::add(
        __int64 a1,
        PVOID *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rax
  winrt::Windows::Foundation::IUnknown *v9; // r14
  int v10; // esi
  winrt::Windows::Foundation::IUnknown *v11; // rdi
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+58h] BYREF

  v12 = a1;
  *a2 = 0LL;
  v13 = 0LL;
  v14 = &stru_18098F1A8;
  _Platform_AcquireSRWLockExclusive(&stru_18098F1A8);
  if ( (_QWORD)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    v3 = *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                   + 4)
       + 1;
  else
    v3 = 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>(
    &v12,
    v3);
  v4 = v12;
  if ( (_QWORD)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
  {
    v9 = (winrt::Windows::Foundation::IUnknown *)(v12 + 8);
    v10 = *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                    + 4);
    v11 = (winrt::Windows::Foundation::IUnknown *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                                                 + 8);
    if ( v10 )
    {
      while ( 1 )
      {
        winrt::Windows::Foundation::IUnknown::operator=(v9, v11);
        v9 = (winrt::Windows::Foundation::IUnknown *)((char *)v9 + 8);
        if ( !--v10 )
          break;
        v11 = (winrt::Windows::Foundation::IUnknown *)((char *)v11 + 8);
      }
    }
  }
  v5 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>((winrt::Windows::Foundation::IUnknown *)&v14);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v4 + 8LL * *(unsigned int *)(v4 + 4)),
    v5);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  *a2 = WINRT_IMPL_EncodePointer(*(PVOID *)(v4 + 8LL * *(unsigned int *)(v4 + 4)));
  _Platform_AcquireSRWLockExclusive(
    (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
  + 1);
  v7 = (__int64 *)std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
                    &v14,
                    v6,
                    &v12);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    &v13,
    v7);
  if ( v14 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v14);
  ReleaseSRWLockExclusive_0(
    (PSRWLOCK)&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
  + 1);
  if ( v12 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v12);
  ReleaseSRWLockExclusive_0(&stru_18098F1A8);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v13);
  return a2;
}
