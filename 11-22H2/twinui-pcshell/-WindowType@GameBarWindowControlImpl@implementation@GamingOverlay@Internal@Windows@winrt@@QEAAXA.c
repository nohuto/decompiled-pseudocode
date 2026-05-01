/*
 * XREFs of ?WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBW4GameBarWindowType@3456@@Z @ 0x18041203C
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403968 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?put_WindowType@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHH@Z @ 0x180412EF0 (-put_WindowType@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 * Callees:
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180411EE8 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowType(
        RTL_SRWLOCK *this,
        const enum winrt::Windows::Internal::GamingOverlay::GameBarWindowType *a2)
{
  RTL_SRWLOCK *v4; // rsi
  const char *v5; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x1D0,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
    (const char *)0x8000FFFFLL,
    HIDWORD(this[7].Ptr) > 1,
    (__int64)"Changing window type is not supported",
    v5);
  LODWORD(this[7].Ptr) = *(_DWORD *)a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
