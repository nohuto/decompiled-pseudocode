/*
 * XREFs of ?RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ @ 0x18010C228
 * Callers:
 *     ??$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010C02C (--$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall VoiceAssistantPositioner::RuntimeClassInitialize(VoiceAssistantPositioner *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v4 = GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f;
  v5 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (VoiceAssistantPositioner *)((char *)this + 40),
         (__int64)v4,
         1uLL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB3,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v1,
    v4[0]);
  return v2;
}
