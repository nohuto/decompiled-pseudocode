/*
 * XREFs of ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801AEBD4
 * Callers:
 *     ??$?RVListenerWindow@@UListenerWindowNotificationArgs@@@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x1800441D4 (--$-RVListenerWindow@@UListenerWindowNotificationArgs@@@-$event@U-$EventHandler@UIInspectable@Fo.c)
 *     ?unsubscribe_from_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801ACAF0 (-unsubscribe_from_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x18047E564 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 *     ?remove_NetworkStateChanged@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180734800 (-remove_NetworkStateChanged@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800B1D88 (--$exchange@U-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@F.c)
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B1DBC (--4-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@.c)
 *     ??$make_event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800B1E00 (--$make_event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
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
  __int64 *v11; // rax
  PVOID *v12; // r12
  winrt::Windows::Foundation::IUnknown *v13; // rsi
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
    goto LABEL_10;
  v7 = *(_DWORD *)(v6 + 4) - 1;
  v8 = 0LL;
  v16 = 0LL;
  LOBYTE(v15) = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*(PVOID *)(v6 + 8)) == a2;
LABEL_4:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v10 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>>(
              &v15,
              (__int64 *)a1,
              (__int64)&v16);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::operator=(
        &v17,
        v10);
      if ( v15 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v15);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v17;
      v8 = v16;
    }
    goto LABEL_8;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(
          v14,
          v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::operator=(
    &v16,
    v11);
  if ( v14[0] )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(v14);
  v8 = v16;
  v12 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v14[0] = (__int64)&v12[*(unsigned int *)(*(_QWORD *)a1 + 4LL)];
  if ( v12 != (PVOID *)v14[0] )
  {
    v9 = v15;
    v13 = (winrt::Windows::Foundation::IUnknown *)(v16 + 8);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_21;
      if ( a2 != WINRT_IMPL_EncodePointer(*v12) )
        break;
      v9 = 1;
      LOBYTE(v15) = 1;
LABEL_23:
      if ( ++v12 == (PVOID *)v14[0] )
      {
LABEL_24:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_4;
      }
    }
    v9 = v15;
LABEL_21:
    if ( !v7 )
      goto LABEL_24;
    winrt::Windows::Foundation::IUnknown::operator=(v13, (winrt::Windows::Foundation::IUnknown *)v12);
    v13 = (winrt::Windows::Foundation::IUnknown *)((char *)v13 + 8);
    --v7;
    v9 = v15;
    goto LABEL_23;
  }
LABEL_8:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v16);
LABEL_10:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v17);
}
