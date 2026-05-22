/*
 * XREFs of ?CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4 (-ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___ @ 0x1800ED794 (wil--details--lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___--_lambda_call__lambda_e7a4.c)
 *     ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z @ 0x1800EDEE0 (-ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPE.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSharedMilResource(
        __int64 a1,
        unsigned int a2,
        int *a3,
        void **a4,
        struct IDCompositionGaussianBlurEffect **a5)
{
  struct IDCompositionGaussianBlurEffect **v5; // rdi
  DirectComposition::CDevice *v6; // rbp
  int ProxyInternal; // eax
  struct IDCompositionGaussianBlurEffect *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // edi
  struct IDCompositionGaussianBlurEffect **v16; // [rsp+20h] [rbp-38h]
  __int64 *v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0;
  v5 = a5;
  v6 = (DirectComposition::CDevice *)(a1 - 72);
  *a4 = 0LL;
  v20 = 0LL;
  LODWORD(a5) = 0;
  *v5 = 0LL;
  v17 = &v20;
  v18 = 1;
  ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                    (DirectComposition::CDevice *)(a1 - 72),
                    a2,
                    1u,
                    (void **)&v20,
                    (unsigned int *)&a5);
  v12 = ProxyInternal;
  if ( ProxyInternal < 0 )
  {
    v13 = 6922LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)ProxyInternal);
    wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___((__int64)&v17);
    return v12;
  }
  v16 = v5;
  v14 = (int)a5;
  ProxyInternal = DirectComposition::CDevice::ConstructProxyObjectForMilResource(
                    v11,
                    a2,
                    v20,
                    (const char *)(unsigned int)a5,
                    v16);
  v12 = ProxyInternal;
  if ( ProxyInternal < 0 )
  {
    v13 = 6927LL;
    goto LABEL_7;
  }
  ProxyInternal = DirectComposition::CDevice::ResourceOpenSharedHandle(v6, v14, a4);
  v12 = ProxyInternal;
  if ( ProxyInternal < 0 )
  {
    v13 = 6929LL;
    goto LABEL_7;
  }
  *a3 = v14;
  return 0LL;
}
