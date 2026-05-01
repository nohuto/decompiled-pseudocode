/*
 * XREFs of ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805ACB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$VAPositioner_HandleRecoveryForView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1805AA4CC (--$VAPositioner_HandleRecoveryForView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetr.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805AB0FC (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall VoiceAssistantPositioner::HandleRecoveryForView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  VoiceAssistantPositionerTelemetry::VAPositioner_HandleRecoveryForView<IApplicationView * &>(&v8, (unsigned __int64)a2);
  v4 = VoiceAssistantPositioner::CacheViewToManage((VoiceAssistantPositioner *)((char *)this - 120), a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
