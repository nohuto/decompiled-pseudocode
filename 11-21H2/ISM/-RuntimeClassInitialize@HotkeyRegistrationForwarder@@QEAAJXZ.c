/*
 * XREFs of ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180031218
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180030C58 (--$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BA@$$CBGPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BA@$$CBG$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x1800312DC (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BA@$$CBGPEAVHotkeyRegistr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyRegistrationForwarder::RuntimeClassInitialize(HotkeyRegistrationForwarder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  HotkeyRegistrationForwarder *v10; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v9);
  v2 = CoreUIFactoryCreate(&v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 24LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
      (const char *)(unsigned int)v2,
      v6);
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v9 + 24LL))(
         v9,
         &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
         &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 28LL;
    goto LABEL_9;
  }
  v10 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const (&)[16],HotkeyRegistrationForwarder *>(
         (char *)this + 40,
         &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
         L"TextInputServer",
         &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 34LL;
    goto LABEL_9;
  }
  v3 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v9);
  return v3;
}
