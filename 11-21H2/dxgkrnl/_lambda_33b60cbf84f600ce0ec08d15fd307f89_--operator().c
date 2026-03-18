/*
 * XREFs of _lambda_33b60cbf84f600ce0ec08d15fd307f89_::operator() @ 0x1C02260A8
 * Callers:
 *     _lambda_33b60cbf84f600ce0ec08d15fd307f89_::_lambda_invoker_cdecl_ @ 0x1C0226090 (_lambda_33b60cbf84f600ce0ec08d15fd307f89_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

char __fastcall lambda_33b60cbf84f600ce0ec08d15fd307f89_::operator()(__int64 a1, struct DXGSWAPCHAIN **a2)
{
  struct DXGSWAPCHAIN *v3; // rcx
  __int64 v4; // rdi
  char result; // al
  struct _D3DKMT_RELEASESWAPCHAIN v6; // [rsp+50h] [rbp-48h] BYREF

  memset(&v6, 0, 0x40uLL);
  v3 = *a2;
  v6.bProducer = 1;
  v4 = (int)SwapChainReleaseInternal(v3, &v6, 0LL, 0);
  result = ObfDereferenceObject(a2);
  if ( (int)v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000,
             -1,
             (__int64)L"Indirect display present failed to release a buffer with status: 0x%I64x",
             v4,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
