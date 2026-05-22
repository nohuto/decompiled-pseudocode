/*
 * XREFs of ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E9D0C
 * Callers:
 *     ??$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E98C8 (--$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040560 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800B8398 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x1801E99C4 (std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___.c)
 */

__int64 __fastcall MPCHeadProcessor::RuntimeClassInitialize(
        MPCHeadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  MPCHolographicInputManager *Instance; // rax
  __int64 v8; // r8
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCHeadProcessor *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  if ( v4 < 0 )
  {
    v5 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcheadprocessor.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v11 = this;
  std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___(v3, &v11);
  Instance = MPCHolographicInputManager::GetInstance();
  v4 = MPCHolographicInputManager::SetProviderPrimary(
         Instance,
         (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
         v8,
         v9);
  if ( v4 < 0 )
  {
    v5 = 26LL;
    goto LABEL_3;
  }
  return 0LL;
}
