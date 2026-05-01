/*
 * XREFs of ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F3550
 * Callers:
 *     ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F38F0 (-ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F4E10 (-HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804F5040 (-InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$VAPositioner_CacheViewToManage@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1804F24CC (--$VAPositioner_CacheViewToManage@AEAPEAUIApplicationView@@@VoiceAssistantPositionerTelemetry@@S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::CacheViewToManage(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  __int64 *v4; // rsi
  struct IUnknown *v5; // rcx
  void (__fastcall *v6)(VoiceAssistantPositioner *, GUID *, IUnknown **); // rbx
  HRESULT v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IApplicationView *v13; // [rsp+58h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+60h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+68h] [rbp+48h] BYREF

  v13 = a2;
  v4 = (__int64 *)((char *)this + 376);
  v5 = (struct IUnknown *)*((_QWORD *)this + 47);
  if ( v5 && !(unsigned int)SHIsSameObject(v5, (struct IUnknown *)a2) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v6 = *(void (__fastcall **)(VoiceAssistantPositioner *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v6(this, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v7 = IUnknown_QueryService(
           punk,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 642LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      return (unsigned int)v7;
    }
    v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, *v4, 4LL);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 643LL;
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_CacheViewToManage<IApplicationView * &>(&v13, (unsigned __int64)a2);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v4, (__int64)a2);
  *((_QWORD *)this + 48) = 0xF800000198LL;
  return 0LL;
}
