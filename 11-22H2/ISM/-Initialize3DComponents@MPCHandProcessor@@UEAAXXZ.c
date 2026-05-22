/*
 * XREFs of ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800CF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CDF8C (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CDFC4 (--$-4U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@-$unique_ptr@VMPCSlateDeadzoneHelper@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800CE5C0 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800CE604 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800CEB3C (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800CED9C (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHandProcessor::Initialize3DComponents(unsigned __int64 this)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  unsigned __int64 v6; // rdi
  const char *v7; // r9
  _QWORD *v8; // rax
  const char *v9; // r9
  void *v10; // rsi
  std::_Ref_count_base *v11; // rcx
  const char *v12; // r9
  _QWORD *v13; // rax
  void *v14; // rdi
  std::_Ref_count_base *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  WINBOOL fPending; // [rsp+60h] [rbp+28h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, __int64); // [rsp+68h] [rbp+30h] BYREF
  void *v22; // [rsp+70h] [rbp+38h] BYREF
  void *v23; // [rsp+78h] [rbp+40h] BYREF

  v2 = (char *)(this - 24);
  v21 = (__int64 (__fastcall ***)(_QWORD, __int64))(this - 24);
  if ( !__std_init_once_begin_initialize(&stru_180277DF8, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    *(_QWORD *)&v18 = &stru_180277DF8;
    lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(&v21, v3, v4, v5);
    DWORD2(v18) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v18);
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
  *(_QWORD *)&v18 = L"RayInjectionTemporalDeadzoneSec";
  *((_QWORD *)&v18 + 1) = 31LL;
  v6 = this & -(__int64)(v2 != 0LL);
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v6, &v18);
  fPending = (unsigned int)L"RayInjectionTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
  *(_QWORD *)&v18 = L"RayInjectionXYDeadzone1M";
  *((_QWORD *)&v18 + 1) = 24LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v6, &v18);
  LODWORD(v21) = (unsigned int)L"RayInjectionXYDeadzone1M";
  v8 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v22, (float *)&v21, (float *)&fPending);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
    (_QWORD **)(this + 3648),
    v8);
  v10 = v22;
  if ( v22 )
  {
    v11 = (std::_Ref_count_base *)*((_QWORD *)v22 + 3);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    operator delete(v10);
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
  *(_QWORD *)&v18 = L"TouchTemporalDeadzoneSec";
  *((_QWORD *)&v18 + 1) = 24LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v6, &v18);
  fPending = (unsigned int)L"TouchTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
  *(_QWORD *)&v18 = L"TouchXYDeadzone1M";
  *((_QWORD *)&v18 + 1) = 17LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v6, &v18);
  LODWORD(v21) = (unsigned int)L"TouchXYDeadzone1M";
  v13 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v23, (float *)&v21, (float *)&fPending);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
    (_QWORD **)(this + 3656),
    v13);
  v14 = v23;
  if ( v23 )
  {
    v15 = (std::_Ref_count_base *)*((_QWORD *)v23 + 3);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    operator delete(v14);
  }
  fPending = 0;
  v16 = std::make_unique<MPCButtonHoldHelper,float,0>(&v21, (float *)&fPending);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
    (__int64 *)(this + 3664),
    v16);
  if ( v21 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v17, v21);
  *(_BYTE *)(this + 3547) = 1;
}
