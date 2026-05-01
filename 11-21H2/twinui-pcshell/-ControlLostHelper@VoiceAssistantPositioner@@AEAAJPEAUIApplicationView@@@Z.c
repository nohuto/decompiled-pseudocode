/*
 * XREFs of ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F3D3C
 * Callers:
 *     ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180158AD0 (-OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804F3AA0 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 *     ?OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1804F5F80 (-OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$VAPositioner_ControlLostHelper@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F256C (--$VAPositioner_ControlLostHelper@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@S.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804F5D10 (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 */

__int64 __fastcall VoiceAssistantPositioner::ControlLostHelper(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  struct IUnknown **v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (struct IUnknown **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
  {
    VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostHelper<IApplicationView * &>(&v9, (unsigned __int64)a2);
    if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *v2) )
      return 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v2);
    VoiceAssistantPositioner::NotifyTrayOfVisibility(this, 0);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 29) + 56LL))(*((_QWORD *)this + 29), 8LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29E,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v6);
    return v6;
  }
  return 0LL;
}
