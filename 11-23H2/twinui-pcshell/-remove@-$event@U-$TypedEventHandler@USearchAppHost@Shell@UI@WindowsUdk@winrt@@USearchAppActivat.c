/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EFA0
 * Callers:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x18004B0D0 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800501FC (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@-$event@U-$TypedEventH.c)
 *     ?remove_Reactivated@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18046D6A0 (-remove_Reactivated@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18004B1F0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$make_event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180111620 (--$make_event_array@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Wind.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18019034C (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@wi.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180190380 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstr.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::remove(
        __int64 a1,
        PVOID a2)
{
  unsigned int *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r15d
  unsigned int *v8; // rbx
  char v9; // al
  unsigned int **v10; // rax
  PVOID *v11; // r12
  winrt::Windows::Foundation::IUnknown *v12; // rsi
  unsigned int **v13; // rax
  unsigned int *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v16; // [rsp+80h] [rbp+50h] BYREF
  unsigned int *v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v14[1] = (unsigned int *)(a1 + 16);
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
      v13 = (unsigned int **)std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>>(
                               &v15,
                               (__int64 *)a1,
                               (__int64)&v16);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::operator=(
        &v17,
        v13);
      if ( v15 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v15);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v17;
      v8 = v16;
    }
    goto LABEL_20;
  }
  v10 = (unsigned int **)winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>(
                           v14,
                           v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::operator=(
    &v16,
    v10);
  if ( v14[0] )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v14);
  v8 = v16;
  v11 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v14[0] = (unsigned int *)&v11[*(unsigned int *)(*(_QWORD *)a1 + 4LL)];
  if ( v11 != (PVOID *)v14[0] )
  {
    v9 = (char)v15;
    v12 = (winrt::Windows::Foundation::IUnknown *)(v16 + 2);
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
    v9 = (char)v15;
LABEL_12:
    if ( !v7 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v12, (winrt::Windows::Foundation::IUnknown *)v11);
    v12 = (winrt::Windows::Foundation::IUnknown *)((char *)v12 + 8);
    --v7;
    v9 = (char)v15;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v16);
LABEL_22:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v17);
}
