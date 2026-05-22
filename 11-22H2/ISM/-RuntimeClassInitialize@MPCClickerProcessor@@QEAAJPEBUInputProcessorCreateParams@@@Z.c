/*
 * XREFs of ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F7CB4
 * Callers:
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801F6C20 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003FB30 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator() @ 0x1801F6D60 (_lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCClickerProcessor::RuntimeClassInitialize(
        MPCClickerProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  union _RTL_RUN_ONCE *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  WINBOOL fPending; // [rsp+50h] [rbp+20h] BYREF
  MPCClickerProcessor *v13; // [rsp+58h] [rbp+28h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = this;
    if ( !__std_init_once_begin_initialize(&MPCClickerProcessor::s_constantsInitialized, 0, &fPending, 0LL) )
      abort();
    if ( fPending )
    {
      v9 = &MPCClickerProcessor::s_constantsInitialized;
      lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator()(&v13, v6, v7, v8);
      v10 = 0;
      std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v9);
    }
    v10 = 0;
    *((_QWORD *)this + 463) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 928) = v10;
    v10 = 0;
    *((_QWORD *)this + 466) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 934) = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
