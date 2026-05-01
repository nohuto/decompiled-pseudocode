/*
 * XREFs of ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4
 * Callers:
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18027D31C (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 *     ?remove_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18027F160 (-remove_ProcessDestroyed@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18027D8D0 (--$exchange@U-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@S.c)
 *     ??$make_event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18027DB0C (--$make_event_array@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@w.c)
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18027E0C0 (--4-$com_ptr@U-$event_array@U-$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEA.c)
 *     ?get_token@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EF1C (-get_token@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA-AUevent_token@2@AEBU.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::remove(__int64 a1, PVOID a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r12d
  __int64 v9; // rbx
  char v10; // al
  __int64 *v11; // rax
  __int64 v12; // rcx
  PVOID *v13; // r15
  winrt::Windows::Foundation::IUnknown *v14; // rsi
  __int64 *v15; // rax
  PVOID *v16; // [rsp+20h] [rbp-10h] BYREF
  PVOID v17; // [rsp+28h] [rbp-8h] BYREF
  PVOID v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  __int64 v20; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v17 = (PVOID)(a1 + 16);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v7 + 4) - 1;
  v9 = 0LL;
  v19 = 0LL;
  LOBYTE(v18) = 0;
  if ( !v8 )
  {
    v10 = *winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::get_token(v6, &v18, (PVOID *)(v7 + 8)) == a2;
LABEL_16:
    if ( v10 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v15 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>>(
              &v18,
              (__int64 *)a1,
              (__int64)&v19);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<unsigned int>>>::operator=(
        &v20,
        v15);
      if ( v18 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v18);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v20;
      v9 = v19;
    }
    goto LABEL_20;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>(
          &v16,
          v8);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<unsigned int>>>::operator=(&v19, v11);
  if ( v16 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v16);
  v9 = v19;
  v13 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v16 = &v13[*(unsigned int *)(*(_QWORD *)a1 + 4LL)];
  if ( v13 != v16 )
  {
    v10 = (char)v18;
    v14 = (winrt::Windows::Foundation::IUnknown *)(v19 + 8);
    while ( 1 )
    {
      if ( v10 )
        goto LABEL_12;
      if ( a2 != *winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::get_token(v12, &v17, v13) )
        break;
      v10 = 1;
      LOBYTE(v18) = 1;
LABEL_14:
      if ( ++v13 == v16 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v10 = (char)v18;
LABEL_12:
    if ( !v8 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v14, (winrt::Windows::Foundation::IUnknown *)v13);
    v14 = (winrt::Windows::Foundation::IUnknown *)((char *)v14 + 8);
    --v8;
    v10 = (char)v18;
    goto LABEL_14;
  }
LABEL_20:
  if ( v9 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v19);
LABEL_22:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v20);
}
