/*
 * XREFs of ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800A2B14
 * Callers:
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x1800915E4 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x1800489DC (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x1800A1EB0 (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800A2958 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@M.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x1800A30BC (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x1800A8F04 (--0MPCThrottleableInputHelper@@QEAA@IPEBG@Z.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x1800A9584 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800FF8F8 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x180100230 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x180101740 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1801017B8 (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1801017F4 (-SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
MPCGestureHandler *__fastcall MPCGestureHandler::MPCGestureHandler(
        MPCGestureHandler *this,
        struct IInputProcessorHost *a2)
{
  unsigned int **v4; // rsi
  _QWORD *v5; // r14
  const unsigned __int16 *v6; // r8
  const char *v7; // r9
  const char *v8; // r9
  HMONITOR v9; // rdx
  int v10; // eax
  const char *v11; // r9
  MPCSpatialGestureRecognizerHandler *v12; // rax
  const char *v13; // r9
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v18; // [rsp+70h] [rbp+18h]
  MPCSpatialGestureRecognizerHandler *v19; // [rsp+70h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  ManipulationInjector::ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  v4 = (unsigned int **)((char *)this + 888);
  *((_QWORD *)this + 111) = 0LL;
  v5 = (_QWORD *)((char *)this + 896);
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_BYTE *)this + 972) = 0;
  *((_DWORD *)this + 244) = 100;
  MPCThrottleableInputHelper::MPCThrottleableInputHelper((MPCGestureHandler *)((char *)this + 984), 0x64u, v6);
  Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((__int64 *)this + 112, (__int64)a2);
  if ( !*((_QWORD *)this + 112) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v7);
  v18 = operator new(0x60CuLL);
  memset_0(v18, 0, 0x60CuLL);
  v18[2] = 1548;
  std::unique_ptr<LegacyDeviceInfo>::reset((void **)this + 111, v18);
  if ( !*v4 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v8);
  if ( IsEdition(8778LL) )
    ManipulationInjector::SetPanOverlapType((char *)this + 80, 0LL);
  ManipulationInjector::SetInjectionMechanism((char *)this + 80);
  *((_QWORD *)this + 109) = (char *)this + 72;
  ManipulationInjector::SetZoomDecreasingThresholds((MPCGestureHandler *)((char *)this + 80), 150, 150);
  ManipulationInjector::Initialize((MPCGestureHandler *)((char *)this + 80), v9, 0LL);
  **v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  (*v4)[1] = 8;
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, char *))(*(_QWORD *)*v5 + 40LL))(*v5, *v4, (char *)this + 8);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v10,
      v16);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v11);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v19 = (MPCSpatialGestureRecognizerHandler *)operator new(0xD8uLL);
    v12 = MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
            v19,
            **v4,
            (MPCGestureHandler *)((char *)this + 80));
    v14 = *((_QWORD *)this + 113);
    *((_QWORD *)this + 113) = v12;
    if ( v14 )
    {
      std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
      v12 = (MPCSpatialGestureRecognizerHandler *)*((_QWORD *)this + 113);
    }
    if ( !v12 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        49LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        v13);
  }
  return this;
}
