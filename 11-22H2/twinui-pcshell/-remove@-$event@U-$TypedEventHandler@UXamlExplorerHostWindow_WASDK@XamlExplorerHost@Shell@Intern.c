/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1804FCC84
 * Callers:
 *     ??$?RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x1804FAB48 (--$-RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 *     ?remove_ActivationChanged@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1804FCE50 (-remove_ActivationChanged@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHos.c)
 * Callees:
 *     ??$make_event_array@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180043C88 (--$make_event_array@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180044148 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18040EE2C (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindow.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18040F27C (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@T.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::remove(
        __int64 a1,
        PVOID a2)
{
  unsigned int *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r15d
  unsigned int *v8; // rbx
  bool v9; // al
  unsigned int **v10; // rax
  PVOID *v11; // r12
  winrt::Windows::Foundation::IUnknown *v12; // rsi
  unsigned int **v13; // rax
  char v14; // [rsp+20h] [rbp-30h]
  PVOID *v15; // [rsp+28h] [rbp-28h] BYREF
  unsigned int *v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v17[3]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0LL;
  v17[0] = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v17[1] = (unsigned int *)(a1 + 16);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_22;
  v7 = *(_DWORD *)(v6 + 4) - 1;
  v8 = 0LL;
  v16 = 0LL;
  v14 = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*(PVOID *)(v6 + 8)) == a2;
LABEL_16:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v13 = (unsigned int **)std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>>(
                               &v15,
                               (__int64 *)a1,
                               (__int64)&v16);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>::operator=(
        v17,
        v13);
      if ( v15 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)&v15);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v17[0];
      v8 = v16;
    }
    goto LABEL_20;
  }
  v10 = (unsigned int **)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>(
                           &v15,
                           v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>::operator=(
    &v16,
    v10);
  if ( v15 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)&v15);
  v8 = v16;
  v11 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v15 = &v11[*(unsigned int *)(*(_QWORD *)a1 + 4LL)];
  if ( v11 != v15 )
  {
    v9 = 0;
    v12 = (winrt::Windows::Foundation::IUnknown *)(v16 + 2);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_12;
      if ( a2 != WINRT_IMPL_EncodePointer(*v11) )
        break;
      v9 = 1;
      v14 = 1;
LABEL_14:
      if ( ++v11 == v15 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v9 = v14;
LABEL_12:
    if ( !v7 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v12, (winrt::Windows::Foundation::IUnknown *)v11);
    v12 = (winrt::Windows::Foundation::IUnknown *)((char *)v12 + 8);
    --v7;
    v9 = v14;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref(&v16);
LABEL_22:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref(v17);
}
