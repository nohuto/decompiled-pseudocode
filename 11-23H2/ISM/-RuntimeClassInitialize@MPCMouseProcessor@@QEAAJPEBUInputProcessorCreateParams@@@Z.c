/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004030C
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180040270 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180038090 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040560 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041260 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180047AE8 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004E9F0 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, char *); // rdi
  int v9; // eax
  char *v10; // r15
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rbx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v16)(_QWORD, GUID *, char *); // rbx
  int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  char *v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 fPending; // [rsp+80h] [rbp+30h] BYREF
  MPCMouseProcessor *v25; // [rsp+88h] [rbp+38h] BYREF
  LARGE_INTEGER Frequency; // [rsp+90h] [rbp+40h] BYREF

  v19 = *(_OWORD *)a2;
  fPending = *((_QWORD *)a2 + 2);
  v20 = fPending;
  *((_DWORD *)this + 930) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  *((_DWORD *)this + 931) = 2;
  *(_QWORD *)&v19 = (char *)this + 3720;
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 680) = 500 * qword_1802688A0 / 1000;
  v21 = v19;
  v4 = (__int64)this + 16;
  v22 = (char *)this + 16;
  if ( !this )
    v4 = 16LL;
  v5 = MPCInputProviderBase::RuntimeClassInitialize(
         (MPCInputProviderBase *)v4,
         (const struct InputProcessorCreateParams *)&v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v25 = this;
    if ( !__std_init_once_begin_initialize(&MPCMouseProcessor::s_constantsInitialized, 0, (PBOOL)&fPending, 0LL) )
      abort();
    if ( (_DWORD)fPending )
    {
      *(_QWORD *)&v19 = &MPCMouseProcessor::s_constantsInitialized;
      DWORD2(v19) = 4;
      lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()(&v25);
      DWORD2(v19) = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v19);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
    v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 72LL);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 461);
    v9 = v8(v7, (char *)this + 3688);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v9,
        v19);
    MPCMouseProcessor::AttachMouse(this, *(struct DeviceInfo **)a2);
    v10 = (char *)this + 3696;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 462);
    ChildInputProcessor = CreateChildInputProcessor(2u, (__int64)&v21, (__int64)this + 3696);
    if ( ChildInputProcessor < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)ChildInputProcessor,
        v19);
    v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
    v13 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 463);
    v14 = v13(v12, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3704);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v14,
        v19);
    v15 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
    v16 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 464);
    v17 = v16(v15, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 3712);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v17,
        v19);
    return 0LL;
  }
}
