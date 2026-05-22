/*
 * XREFs of ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180045E98
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180045820 (--$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180035064 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180045FC4 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrati.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180054BC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyRegistrationForwarder::RuntimeClassInitialize(HotkeyRegistrationForwarder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  HotkeyRegistrationForwarder *v9; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t v10[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v8 = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
  v2 = CoreUIFactoryCreate(&v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 26LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v7 + 24LL))(
         v7,
         &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
         &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 30LL;
    goto LABEL_9;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputServiceSecureDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputServiceSecureDesktop>::GetImpl'::`2'::impl,
    v4);
  memset_0(v10, 0, 0x208uLL);
  GetDesktopUniqueName(L"TextInputServer", v10);
  v9 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],HotkeyRegistrationForwarder *>(
         (char *)this + 40,
         &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
         v10,
         &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 41LL;
    goto LABEL_9;
  }
  v3 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
  return v3;
}
