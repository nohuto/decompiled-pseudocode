/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180028B0C
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18002890C (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180028E10 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800296EC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180038070 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003D588 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, char *); // rdi
  int v8; // eax
  char *v9; // r15
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rdi
  int v16; // eax
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  char *v21; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 fPending; // [rsp+80h] [rbp+30h] BYREF
  MPCMouseProcessor *v24; // [rsp+88h] [rbp+38h] BYREF
  LARGE_INTEGER Frequency; // [rsp+90h] [rbp+40h] BYREF

  v18 = *(_OWORD *)a2;
  fPending = *((_QWORD *)a2 + 2);
  v19 = fPending;
  *((_DWORD *)this + 930) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  *((_DWORD *)this + 931) = 2;
  *(_QWORD *)&v18 = (char *)this + 3720;
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 680) = 500 * qword_180242810 / 1000;
  v20 = v18;
  v21 = (char *)this + 16;
  v4 = MPCInputProviderBase::RuntimeClassInitialize(
         (MPCMouseProcessor *)((char *)this + 16),
         (const struct InputProcessorCreateParams *)&v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v4,
      v18);
    return v5;
  }
  else
  {
    v24 = this;
    if ( !__std_init_once_begin_initialize(&MPCMouseProcessor::s_constantsInitialized, 0, (PBOOL)&fPending, 0LL) )
      abort();
    if ( (_DWORD)fPending )
    {
      *(_QWORD *)&v18 = &MPCMouseProcessor::s_constantsInitialized;
      DWORD2(v18) = 4;
      lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()(&v24);
      DWORD2(v18) = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v18);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
    v7 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 461);
    v8 = v7(v6, (char *)this + 3688);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v8,
        v18);
    MPCMouseProcessor::AttachMouse(this, *(struct DeviceInfo **)a2);
    v9 = (char *)this + 3696;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 462);
    v10 = CreateChildInputProcessor(2LL, &v20, (char *)this + 3696);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v10,
        v18);
    v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v9;
    v12 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v9;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 463);
    v13 = v12(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3704);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13,
        v18);
    v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v9;
    v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v9;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 464);
    v16 = v15(v14, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 3712);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v16,
        v18);
    return 0LL;
  }
}
