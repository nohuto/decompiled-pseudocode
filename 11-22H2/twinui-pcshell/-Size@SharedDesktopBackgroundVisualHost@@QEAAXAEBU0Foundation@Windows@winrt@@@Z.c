/*
 * XREFs of ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1806E8E40
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806E20C0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?SyncInitialSize@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x1806EBEDC (-SyncInitialSize@SharedDesktopBackgroundVisualHost@@AEAAXXZ.c)
 *     ?put_Size@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x1806ED3C0 (-put_Size@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E6648 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1UpdateSize@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6DB4 (--1UpdateSize@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z @ 0x1806E9600 (-StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z.c)
 *     ?Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806EA2B0 (-Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Size(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Foundation::Size *a2)
{
  RTL_SRWLOCK *v4; // rsi
  HWND Ptr; // rbx
  bool v6; // zf
  _QWORD v7[40]; // [rsp+40h] [rbp-158h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"UpdateSize");
  v7[0] = &SharedVisualHostProvider::UpdateSize::`vftable';
  SharedVisualHostProvider::UpdateSize::StartActivity(
    (SharedVisualHostProvider::UpdateSize *)v7,
    *(float *)a2,
    *((float *)a2 + 1));
  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  LODWORD(this[36].Ptr) = *(_DWORD *)a2;
  HIDWORD(this[36].Ptr) = *((_DWORD *)a2 + 1);
  Ptr = (HWND)this[31].Ptr;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v6 = Ptr == 0LL;
  if ( Ptr )
  {
    SetWindowPos(Ptr, 0LL, 0, 0, (int)*(float *)a2, (int)*((float *)a2 + 1), 0x10u);
    v6 = Ptr == 0LL;
  }
  SharedVisualHostProvider::UpdateSize::Stop((SharedVisualHostProvider::UpdateSize *)v7, !v6);
  SharedVisualHostProvider::UpdateSize::~UpdateSize((SharedVisualHostProvider::UpdateSize *)v7);
}
