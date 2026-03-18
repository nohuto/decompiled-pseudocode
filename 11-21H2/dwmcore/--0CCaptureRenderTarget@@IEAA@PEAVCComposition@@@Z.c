/*
 * XREFs of ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019C514
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019D514 (--0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801C0F98 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::CCaptureRenderTarget(
        CCaptureRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CCaptureRenderTarget *result; // rax
  const char *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  if ( a3 )
  {
    *((_QWORD *)this + 10) = &CCaptureRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 261) = &CInk::`vbtable'{for `IContent'};
    *((_QWORD *)this + 264) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
    *((_QWORD *)this + 263) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 264) + 4LL) + 2112) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  v9 = 26;
  v8 = "DWM Rendertarget (capture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v8);
  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v4 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 1984;
  v5 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 2000;
  v6 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v6 + 76) = v6 - 2024;
  *((_QWORD *)this + 234) = 0LL;
  *((_QWORD *)this + 238) = 0LL;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 242) = 0LL;
  *((_QWORD *)this + 244) = 0LL;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 256) = 0LL;
  *(_WORD *)((char *)this + 1897) = 1;
  *((_BYTE *)this + 140) = 0;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 482) = -1;
  *((_DWORD *)this + 438) = 0;
  return result;
}
