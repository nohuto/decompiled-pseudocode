/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18001F714
 * Callers:
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x18001F414 (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 *     ?remove_ActivationChanged@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180043830 (-remove_ActivationChanged@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shel.c)
 * Callees:
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18001A4FC (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001F7FC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18001F94C (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerH.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18001F980 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  PVOID Ptr; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  bool v9; // al
  __int64 v10; // rax
  _QWORD *v11; // rax
  PVOID *v12; // r12
  __int64 v13; // rsi
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  _BOOL8 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v5 = a1 + 2;
  v14[1] = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
    goto LABEL_10;
  v7 = *((_DWORD *)Ptr + 1) - 1;
  v8 = 0LL;
  v16 = 0LL;
  LOBYTE(v15) = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*((PVOID *)Ptr + 1)) == a2;
LABEL_4:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive(a1 + 1);
      v10 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>>>(
              &v15,
              a1,
              &v16);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>>::operator=(
        &v17,
        v10);
      if ( v15 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v15);
      ReleaseSRWLockExclusive_0(a1 + 1);
      v4 = v17;
      v8 = v16;
    }
    goto LABEL_8;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
          v14,
          v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>>::operator=(
    &v16,
    v11);
  if ( v14[0] )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(v14);
  v8 = v16;
  v12 = (PVOID *)((char *)a1->Ptr + 8);
  v14[0] = &v12[*((unsigned int *)a1->Ptr + 1)];
  if ( v12 != (PVOID *)v14[0] )
  {
    v9 = v15;
    v13 = v16 + 8;
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
        v5 = a1 + 2;
        goto LABEL_4;
      }
    }
    v9 = v15;
LABEL_21:
    if ( !v7 )
      goto LABEL_24;
    winrt::Windows::Foundation::IUnknown::operator=(v13, v12);
    v13 += 8LL;
    --v7;
    v9 = v15;
    goto LABEL_23;
  }
LABEL_8:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v16);
LABEL_10:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v17);
}
