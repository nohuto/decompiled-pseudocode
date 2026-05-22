/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E5410
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E2D20 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180038090 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040560 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041260 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801E310C (_lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  char *v9; // r15
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rdi
  int v16; // eax
  union _RTL_RUN_ONCE *v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  WINBOOL fPending; // [rsp+80h] [rbp+30h] BYREF
  MPCGamepadProcessor *v24; // [rsp+90h] [rbp+40h] BYREF

  v4 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5,
      (int)v18);
  v24 = this;
  if ( !__std_init_once_begin_initialize(&MPCGamepadProcessor::s_constantsInitialized, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v18 = &MPCGamepadProcessor::s_constantsInitialized;
    lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()(&v24, v6, v7, v8);
    v19 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v18);
  }
  v20 = *(_OWORD *)a2;
  v21 = v4 & -(__int64)(this != 0LL);
  v9 = (char *)this + 3672;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 459);
  ChildInputProcessor = CreateChildInputProcessor(0x40u, (__int64)&v20, (__int64)this + 3672);
  if ( ChildInputProcessor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor,
      (int)v18);
  v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v9;
  v12 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v9;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 460);
  v13 = v12(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3680);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v13,
      (int)v18);
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v9;
  v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v9;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 461);
  v16 = v15(v14, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, (char *)this + 3688);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v16,
      (int)v18);
  return 0LL;
}
