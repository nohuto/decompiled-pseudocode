/*
 * XREFs of ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8DB8
 * Callers:
 *     ?ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4BackgroundIdentifier@34567@@Z @ 0x1806E39C8 (-ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4Back.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E65A0 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Shutdown@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D30 (--1Shutdown@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E93FC (-StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806E9888 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z @ 0x1806EBDD8 (-StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Shutdown(SharedDesktopBackgroundVisualHost *this)
{
  _QWORD v2[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"Shutdown");
  v2[0] = &SharedVisualHostProvider::Shutdown::`vftable';
  SharedVisualHostProvider::Shutdown::StartActivity((SharedVisualHostProvider::Shutdown *)v2, 1);
  SharedDesktopBackgroundVisualHost::StopXamlHostThread(this, 1);
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  SharedVisualHostProvider::Shutdown::~Shutdown((SharedVisualHostProvider::Shutdown *)v2);
}
