/*
 * XREFs of ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x18028B348
 * Callers:
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x180108DB0 (-EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ @ 0x18010A3F0 (-EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801E431C (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x18028BF70 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 */

__int64 __fastcall CLegacySwapChain::EnsureComputeScribbleResources(CLegacySwapChain *this)
{
  CSwapChainBuffer **v1; // rdi
  CSwapChainBuffer **v3; // rbp
  int v4; // eax
  unsigned int v5; // esi
  struct CComputeScribbleRenderer **v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CSwapChainBuffer **)*((_QWORD *)this - 37);
  v3 = (CSwapChainBuffer **)*((_QWORD *)this - 36);
  while ( v1 != v3 )
  {
    v4 = CSwapChainBuffer::EnsureComputeScribbleResources(*v1, (CLegacySwapChain *)((char *)this - 400));
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    ++v1;
  }
  v6 = (struct CComputeScribbleRenderer **)((char *)this - 80);
  if ( *((_QWORD *)this - 10) )
    return 0LL;
  *v6 = 0LL;
  v7 = CComputeScribbleRenderer::Create((CLegacySwapChain *)((char *)this - 400), v6);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x482,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
