/*
 * XREFs of ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x180044CB8
 * Callers:
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180044C70 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180044EBC (--$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotke.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall HotkeyRegistrationForwarder::Create(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(a1);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
