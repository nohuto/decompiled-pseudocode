/*
 * XREFs of ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F4F4C
 * Callers:
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804F3AA0 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$VAPositioner_HideView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F27AC (--$VAPositioner_HideView@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::HideView(VoiceAssistantPositioner *this, struct IApplicationView *a2)
{
  ApplicationViewOperation **v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ApplicationViewOperation *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationView *v12; // [rsp+48h] [rbp+10h] BYREF
  ApplicationViewOperation *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  v11 = this;
  VoiceAssistantPositionerTelemetry::VAPositioner_HideView<IApplicationView * &>(&v12, (unsigned __int64)a2);
  v3 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v11);
  v13 = *v3;
  v4 = (__int64)v13;
  *v3 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v11);
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, 0LL);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v4);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 680LL;
    }
    else
    {
      v7 = 679LL;
    }
    v6 = (unsigned int)v8;
  }
  else
  {
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 678LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v6);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v5;
}
