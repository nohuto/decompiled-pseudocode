/*
 * XREFs of ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800D0734
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C0574 (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003FB30 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800CEB3C (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHandProcessor::RuntimeClassInitialize(
        MPCHandProcessor *this,
        const struct InputProcessorCreateParams *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  union _RTL_RUN_ONCE *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  MPCHandProcessor *v15; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 512 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      a4);
  v5 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15 = this;
    if ( !__std_init_once_begin_initialize(&stru_180277DF8, 0, &fPending, 0LL) )
      abort();
    if ( fPending )
    {
      v11 = &stru_180277DF8;
      lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(&v15, v8, v9, v10);
      v12 = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v11);
    }
    *((_QWORD *)this + 1244) = 1000 * qword_1802778B8 / 1000;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
