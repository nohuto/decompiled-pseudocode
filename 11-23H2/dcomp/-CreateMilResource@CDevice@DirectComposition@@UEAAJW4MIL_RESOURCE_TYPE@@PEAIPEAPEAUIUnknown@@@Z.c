/*
 * XREFs of ?CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z @ 0x1800EFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___ @ 0x1800ED794 (wil--details--lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___--_lambda_call__lambda_e7a4.c)
 *     ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z @ 0x1800EDEE0 (-ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPE.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateMilResource(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct IDCompositionGaussianBlurEffect **a4)
{
  int v7; // eax
  struct IDCompositionGaussianBlurEffect *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // edi
  struct IDCompositionGaussianBlurEffect **v13; // [rsp+20h] [rbp-38h]
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v18 = 0LL;
  v17 = 0;
  v14 = &v18;
  v15 = 1;
  v7 = DirectComposition::CDevice::CreateProxyInternal(
         (DirectComposition::CDevice *)(a1 - 72),
         a2,
         0,
         (void **)&v18,
         &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 6888LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v7);
    wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___((__int64)&v14);
    return v9;
  }
  v13 = a4;
  v11 = v17;
  v7 = DirectComposition::CDevice::ConstructProxyObjectForMilResource(v8, a2, v18, (const char *)v17, v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 6892LL;
    goto LABEL_5;
  }
  *a3 = v11;
  return 0LL;
}
