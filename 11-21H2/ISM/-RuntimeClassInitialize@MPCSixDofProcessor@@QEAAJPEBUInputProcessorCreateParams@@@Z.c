/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C1D6C
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BD450 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800296EC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801BDA2C (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BE668 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        MPCSixDofProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  union _RTL_RUN_ONCE *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  MPCSixDofProcessor *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v14 = this;
    if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_constantsInitialized, 0, &fPending, 0LL) )
      abort();
    if ( fPending )
    {
      v10 = &MPCSixDofProcessor::s_constantsInitialized;
      lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(&v14, v6, v8, v9);
      v11 = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v10);
    }
    std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___(v7, v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
