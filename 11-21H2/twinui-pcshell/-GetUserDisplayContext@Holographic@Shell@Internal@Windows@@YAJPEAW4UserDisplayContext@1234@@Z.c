/*
 * XREFs of ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1803323F8
 * Callers:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1800381BC (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180332BEC (-HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1803638E4 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18009CA48 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::GetUserDisplayContext(
        Windows::Internal::Shell::Holographic *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"Windows.Internal.Shell.Holographic.ContextIdentifier",
    0x35u,
    0x34u);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
         v9,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 70LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\internal\\shell\\inc\\HolographicSession.h",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::Shell::Holographic *))(*(_QWORD *)v7 + 56LL))(v7, this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 72LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return v4;
}
