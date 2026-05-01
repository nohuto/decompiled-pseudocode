/*
 * XREFs of ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C
 * Callers:
 *     ?OnIdleStateFlagsChanged@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1806E3210 (-OnIdleStateFlagsChanged@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJ.c)
 *     ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E7BF8 (-Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E8828 (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E8918 (-Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8CD8 (-Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 *     ?_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z @ 0x1806EC6B0 (-_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Window.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E6648 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D88 (--1SyncState@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@SyncState@SharedVisualHostProvider@@QEAAXXZ @ 0x1806E9558 (-StartActivity@SyncState@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z @ 0x1806E9F50 (-Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SharedDesktopBackgroundVisualHost::SyncState(__int64 a1, int a2)
{
  int v4; // r15d
  HWND v5; // rdi
  char v6; // r14
  __int64 v7; // rbx
  signed int v8; // eax
  signed int v9; // eax
  int v10; // edx
  _QWORD v11[2]; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-178h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"SyncState");
  v12[0] = &SharedVisualHostProvider::SyncState::`vftable';
  SharedVisualHostProvider::SyncState::StartActivity((SharedVisualHostProvider::SyncState *)v12);
  v11[0] = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 192));
  v4 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 204) = a2;
  v5 = *(HWND *)(a1 + 248);
  v6 = *(_BYTE *)(a1 + 208);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)v11,
    (winrt::Windows::Foundation::IUnknown *)(a1 + 280));
  if ( a1 != -192 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 192));
  v7 = v11[0];
  switch ( a2 )
  {
    case 1:
      if ( !v5 )
        break;
      v10 = 8;
      goto LABEL_19;
    case 2:
      if ( !v5 )
        break;
      v10 = 0;
LABEL_19:
      ShowWindow(v5, v10);
      break;
    case 4:
      if ( v11[0] )
      {
        if ( v6 )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[0] + 56LL))(v11[0], 0LL);
          if ( v9 < 0 )
            winrt::throw_hresult(v9);
        }
      }
      break;
    case 8:
    case 16:
      if ( v11[0] )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 64LL))(v11[0]);
        if ( v8 < 0 )
          winrt::throw_hresult(v8);
      }
      break;
  }
  SharedVisualHostProvider::SyncState::Stop((SharedVisualHostProvider::SyncState *)v12, v4, a2, (__int64)v5, 0);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v11);
  SharedVisualHostProvider::SyncState::~SyncState((SharedVisualHostProvider::SyncState *)v12);
}
