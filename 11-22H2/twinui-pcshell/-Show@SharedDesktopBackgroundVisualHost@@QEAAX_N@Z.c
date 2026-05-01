/*
 * XREFs of ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8CD8
 * Callers:
 *     ?Show@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_N@Z @ 0x1806E8C80 (-Show@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@In.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E6648 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D04 (--1Show@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Show@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9348 (-StartActivity@Show@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806E998C (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SharedDesktopBackgroundVisualHost::Show(RTL_SRWLOCK *this, bool a2)
{
  _QWORD v4[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v4,
    (__int64)"Show");
  v4[0] = &SharedVisualHostProvider::Show::`vftable';
  SharedVisualHostProvider::Show::StartActivity((SharedVisualHostProvider::Show *)v4, a2);
  AcquireSRWLockExclusive(this + 24);
  LOBYTE(this[25].Ptr) = a2;
  if ( this != (RTL_SRWLOCK *)-192LL )
    ReleaseSRWLockExclusive(this + 24);
  SharedDesktopBackgroundVisualHost::SyncState(this, 1LL);
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v4);
  SharedVisualHostProvider::Show::~Show((SharedVisualHostProvider::Show *)v4);
}
