/*
 * XREFs of ?EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E79C0
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E6648 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6C54 (--1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAXXZ @ 0x1806E90A8 (-StartActivity@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x1806E96DC (-StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ.c)
 *     ?Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9A90 (-Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::EnsureInitializedAsync(SharedDesktopBackgroundVisualHost *this)
{
  bool started; // al
  _QWORD v3[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v3,
    (__int64)"EnsureInitializedAsync");
  v3[0] = &SharedVisualHostProvider::EnsureInitializedAsync::`vftable';
  SharedVisualHostProvider::EnsureInitializedAsync::StartActivity((SharedVisualHostProvider::EnsureInitializedAsync *)v3);
  started = SharedDesktopBackgroundVisualHost::StartXamlHostThread(this);
  SharedVisualHostProvider::EnsureInitializedAsync::Stop(
    (SharedVisualHostProvider::EnsureInitializedAsync *)v3,
    started);
  SharedVisualHostProvider::EnsureInitializedAsync::~EnsureInitializedAsync((SharedVisualHostProvider::EnsureInitializedAsync *)v3);
}
