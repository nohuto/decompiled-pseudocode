/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801BF890
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A58F4 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A592C (--$-4U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@-$unique_ptr@VMPCSlateDeadzoneHelper@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800A6238 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800A627C (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@AEBM$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@AEBM@Z @ 0x1801BDAA8 (--$make_unique@VMPCButtonHoldHelper@@AEBM$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BE668 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  const char *v10; // r9
  unsigned __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rcx
  const char *v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rcx
  const char *v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rcx
  const char *v25; // r9
  const char *v26; // r9
  _QWORD *v27; // rax
  const char *v28; // r9
  void *v29; // rsi
  std::_Ref_count_base *v30; // rcx
  const char *v31; // r9
  _QWORD *v32; // rax
  void *v33; // rdi
  std::_Ref_count_base *v34; // rcx
  __int128 v35; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  MPCButtonHoldHelper *fPending; // [rsp+60h] [rbp+30h] BYREF
  void (__fastcall ***v38)(_QWORD, __int64); // [rsp+68h] [rbp+38h] BYREF
  void *v39; // [rsp+70h] [rbp+40h] BYREF
  void *v40; // [rsp+78h] [rbp+48h] BYREF

  v2 = (char *)this - 24;
  v38 = (void (__fastcall ***)(_QWORD, __int64))((char *)this - 24);
  if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_constantsInitialized, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    *(_QWORD *)&v35 = &MPCSixDofProcessor::s_constantsInitialized;
    lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(&v38, v3, v4, v5);
    DWORD2(v35) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v35);
  }
  LODWORD(fPending) = 0;
  v6 = std::make_unique<MPCButtonHoldHelper,float,0>(&v38, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>((__int64 *)this + 509, v6);
  if ( v38 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v7, v38);
  v8 = (__int64 *)std::make_unique<MPCButtonHoldHelper,float const &,0>(&fPending, &flt_18020F928);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>((__int64 *)this + 510, v8);
  if ( fPending )
    std::default_delete<MPCButtonHoldHelper>::operator()(v9, (void (__fastcall ***)(_QWORD, __int64))fPending);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
  *(_QWORD *)&v35 = L"DragModeTriggerTimeInSec";
  *((_QWORD *)&v35 + 1) = 24LL;
  v11 = (unsigned __int64)this & -(__int64)(v2 != 0LL);
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"DragModeTriggerTimeInSec";
  v12 = std::make_unique<MPCButtonHoldHelper,float,0>(&v38, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)this + 511,
    v12);
  if ( v38 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v13, v38);
  LODWORD(fPending) = 0;
  v14 = std::make_unique<MPCButtonHoldHelper,float,0>(&v38, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)this + 512,
    v14);
  if ( v38 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v15, v38);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
  *(_QWORD *)&v35 = L"TouchpadReleasedTimeoutSeconds";
  *((_QWORD *)&v35 + 1) = 30LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"TouchpadReleasedTimeoutSeconds";
  v17 = std::make_unique<MPCButtonHoldHelper,float,0>(&v39, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)this + 513,
    v17);
  if ( v39 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v18, (void (__fastcall ***)(_QWORD, __int64))v39);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v19);
  *(_QWORD *)&v35 = L"TouchpadTouchedTimeoutSeconds";
  *((_QWORD *)&v35 + 1) = 29LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"TouchpadTouchedTimeoutSeconds";
  v20 = std::make_unique<MPCButtonHoldHelper,float,0>(&v38, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)this + 514,
    v20);
  if ( v38 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v21, v38);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v22);
  *(_QWORD *)&v35 = L"TouchpadDeltaSmoothingTimeoutSec";
  *((_QWORD *)&v35 + 1) = 32LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"TouchpadDeltaSmoothingTimeoutSec";
  v23 = std::make_unique<MPCButtonHoldHelper,float,0>(&v39, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)this + 515,
    v23);
  if ( v39 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v24, (void (__fastcall ***)(_QWORD, __int64))v39);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v25);
  *(_QWORD *)&v35 = L"TouchpadTemporalDeadzoneSec";
  *((_QWORD *)&v35 + 1) = 27LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"TouchpadTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v26);
  *(_QWORD *)&v35 = L"TouchpadXYDeadzone1M";
  *((_QWORD *)&v35 + 1) = 20LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(v38) = (unsigned int)L"TouchpadXYDeadzone1M";
  v27 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v40, (float *)&v38, (float *)&fPending);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
    (_QWORD **)this + 516,
    v27);
  v29 = v40;
  if ( v40 )
  {
    v30 = (std::_Ref_count_base *)*((_QWORD *)v40 + 3);
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    operator delete(v29);
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v28);
  *(_QWORD *)&v35 = L"TriggerTemporalDeadzoneSec";
  *((_QWORD *)&v35 + 1) = 26LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(fPending) = (unsigned int)L"TriggerTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v31);
  *(_QWORD *)&v35 = L"TriggerXYDeadzone1M";
  *((_QWORD *)&v35 + 1) = 19LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v35);
  LODWORD(v38) = (unsigned int)L"TriggerXYDeadzone1M";
  v32 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v39, (float *)&v38, (float *)&fPending);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
    (_QWORD **)this + 517,
    v32);
  v33 = v39;
  if ( v39 )
  {
    v34 = (std::_Ref_count_base *)*((_QWORD *)v39 + 3);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    operator delete(v33);
  }
  *((_BYTE *)this + 3547) = 1;
}
