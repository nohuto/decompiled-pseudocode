/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18064A380
 * Callers:
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x180153224 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 *     ?remove_WindowStateChange@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18064A630 (-remove_WindowStateChange@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 * Callees:
 *     ??$make_event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180111620 (--$make_event_array@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Wind.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801532DC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGro.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18018C388 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGrou_ea_18018C388.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18018C3BC (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windo.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::remove(
        __int64 a1,
        PVOID a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  char v9; // al
  __int64 *v10; // rax
  PVOID *v11; // r12
  winrt::Windows::Foundation::IUnknown *v12; // rsi
  __int64 *v13; // rax
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v14[1] = a1 + 16;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_22;
  v7 = *(_DWORD *)(v6 + 4) - 1;
  v8 = 0LL;
  v16 = 0LL;
  LOBYTE(v15) = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*(PVOID *)(v6 + 8)) == a2;
LABEL_16:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v13 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>>(
              &v15,
              (__int64 *)a1,
              (__int64)&v16);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
        &v17,
        v13);
      if ( v15 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(&v15);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v17;
      v8 = v16;
    }
    goto LABEL_20;
  }
  v10 = winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>(
          v14,
          v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
    &v16,
    v10);
  if ( v14[0] )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(v14);
  v8 = v16;
  v11 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v14[0] = (__int64)&v11[*(unsigned int *)(*(_QWORD *)a1 + 4LL)];
  if ( v11 != (PVOID *)v14[0] )
  {
    v9 = v15;
    v12 = (winrt::Windows::Foundation::IUnknown *)(v16 + 8);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_12;
      if ( a2 != WINRT_IMPL_EncodePointer(*v11) )
        break;
      v9 = 1;
      LOBYTE(v15) = 1;
LABEL_14:
      if ( ++v11 == (PVOID *)v14[0] )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v9 = v15;
LABEL_12:
    if ( !v7 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v12, (winrt::Windows::Foundation::IUnknown *)v11);
    v12 = (winrt::Windows::Foundation::IUnknown *)((char *)v12 + 8);
    --v7;
    v9 = v15;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(&v16);
LABEL_22:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(&v17);
}
