/*
 * XREFs of ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180181D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$VAPositioner_AppViewDestroyed@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1805AA1EC (--$VAPositioner_AppViewDestroyed@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SA.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805AB8EC (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall VoiceAssistantPositioner::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  struct IUnknown *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( a3 != 1 )
    return 0LL;
  v6 = *(struct IUnknown **)(a1 + 224);
  if ( !v6 )
    return 0LL;
  if ( !(unsigned int)SHIsSameObject(a2, v6) )
    return 0LL;
  VoiceAssistantPositionerTelemetry::VAPositioner_AppViewDestroyed<IApplicationView * &>(&v10);
  v7 = VoiceAssistantPositioner::ControlLostHelper(
         (VoiceAssistantPositioner *)(a1 - 152),
         (struct IApplicationView *)a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x251,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
