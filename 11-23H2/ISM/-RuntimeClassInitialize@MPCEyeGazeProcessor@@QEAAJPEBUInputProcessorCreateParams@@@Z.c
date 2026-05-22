/*
 * XREFs of ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E982C
 * Callers:
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E931C (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040560 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x1801E9418 (std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390___.c)
 */

__int64 __fastcall MPCEyeGazeProcessor::RuntimeClassInitialize(
        MPCEyeGazeProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCEyeGazeProcessor *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v8 = this;
    std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___(v4, &v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpceyegazeprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
