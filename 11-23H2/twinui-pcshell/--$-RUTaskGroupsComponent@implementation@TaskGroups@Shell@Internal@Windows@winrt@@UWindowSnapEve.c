/*
 * XREFs of ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowSnapEventArgs@45671@@Z @ 0x180645CE8
 * Callers:
 *     ?OnWindowArrangementEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowArrangementEventArgs@94567@@Z @ 0x1802E8CF0 (-OnWindowArrangementEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@w.c)
 *     ?OnArrangedWindowJointResizeCompleted@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUArrangedWindowJointResizeCompletedEventArgs@94567@@Z @ 0x1806492C0 (-OnArrangedWindowJointResizeCompleted@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@34@UWindowSnapEventArgs@78934@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@1@AEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@41@AEBUWindowSnapEventArgs@78941@@Z @ 0x1802E8B76 (--$invoke@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@wi_ea_1802E8B76.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EDF4 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int *v4; // rbx
  unsigned int *Ptr; // r9
  unsigned int *v6; // rsi
  PVOID *v7; // rdi
  __int64 v8; // rsi
  PVOID v9; // rax
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v6 = 0LL;
  if ( a1->Ptr )
  {
    v10 = (unsigned int *)a1->Ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)Ptr, 1u);
    v6 = Ptr;
    v4 = v10;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v6 )
  {
    v7 = (PVOID *)(v6 + 2);
    v8 = (__int64)&v6[2 * v6[1] + 2];
    while ( v7 != (PVOID *)v8 )
    {
      if ( !winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>,winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>(
              (__int64)v7,
              a2) )
      {
        v9 = WINRT_IMPL_EncodePointer(*v7);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
          (__int64)a1,
          v9);
      }
      ++v7;
    }
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v10);
}
