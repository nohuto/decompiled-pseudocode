/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C4ED0
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
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800A627C (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@AEBM$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@AEBM@Z @ 0x1801BDAA8 (--$make_unique@VMPCButtonHoldHelper@@AEBM$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801C4580 (_lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::Initialize3DComponents(MPCGamepadProcessor *this)
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
  const char *v12; // r9
  _QWORD *v13; // rax
  void *v14; // rdi
  std::_Ref_count_base *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  MPCButtonHoldHelper *fPending; // [rsp+50h] [rbp+20h] BYREF
  char *v19; // [rsp+58h] [rbp+28h] BYREF
  void *v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = (char *)this - 32;
  v19 = (char *)this - 32;
  if ( !__std_init_once_begin_initialize(&MPCGamepadProcessor::s_constantsInitialized, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    *(_QWORD *)&v16 = &MPCGamepadProcessor::s_constantsInitialized;
    lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()(&v19, v3, v4, v5);
    DWORD2(v16) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v16);
  }
  v6 = (__int64 *)std::make_unique<MPCButtonHoldHelper,float const &,0>(&fPending, &flt_18020F92C);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>((__int64 *)this + 530, v6);
  if ( fPending )
    std::default_delete<MPCButtonHoldHelper>::operator()(v7, (void (__fastcall ***)(_QWORD, __int64))fPending);
  v8 = (__int64 *)std::make_unique<MPCButtonHoldHelper,float const &,0>(&fPending, &flt_18020F92C);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>((__int64 *)this + 531, v8);
  if ( fPending )
    std::default_delete<MPCButtonHoldHelper>::operator()(v9, (void (__fastcall ***)(_QWORD, __int64))fPending);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
  *(_QWORD *)&v16 = L"SelectTemporalDeadzoneSec";
  *((_QWORD *)&v16 + 1) = 25LL;
  v11 = (unsigned __int64)this & -(__int64)(v2 != 0LL);
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v16);
  LODWORD(fPending) = (unsigned int)L"SelectTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
  *(_QWORD *)&v16 = L"SelectXYDeadzone1M";
  *((_QWORD *)&v16 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v11, &v16);
  LODWORD(v19) = (unsigned int)L"SelectXYDeadzone1M";
  v13 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v20, (float *)&v19, (float *)&fPending);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
    (_QWORD **)this + 532,
    v13);
  v14 = v20;
  if ( v20 )
  {
    v15 = (std::_Ref_count_base *)*((_QWORD *)v20 + 3);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    operator delete(v14);
  }
  *((_BYTE *)this + 3547) = 1;
}
