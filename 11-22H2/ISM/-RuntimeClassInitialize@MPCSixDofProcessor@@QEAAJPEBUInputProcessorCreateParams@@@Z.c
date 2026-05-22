/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EDA08
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E8FC8 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003FB30 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801E96D0 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801EA37C (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        MPCSixDofProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  union _RTL_RUN_ONCE *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  MPCSixDofProcessor *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = this;
    if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_constantsInitialized, 0, &fPending, 0LL) )
      abort();
    if ( fPending )
    {
      v9 = &MPCSixDofProcessor::s_constantsInitialized;
      lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(&v13, v6, v7, v8);
      v10 = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v9);
    }
    std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
