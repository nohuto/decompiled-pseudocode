/*
 * XREFs of ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x18001EEB4
 * Callers:
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x18001ED08 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x180290460 (--0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEB.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x1802910CC (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ?CalcVBlankDuration@CLegacySwapChain@@IEAA_NAEBUDXGI_RATIONAL@@_K1I@Z @ 0x18001F16C (-CalcVBlankDuration@CLegacySwapChain@@IEAA_NAEBUDXGI_RATIONAL@@_K1I@Z.c)
 *     ??0?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGISwapChainDWM1@@@Z @ 0x18001F1FC (--0-$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGISwapChainDWM.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x18001F238 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x18001F264 (--0ILegacySwapChain@@QEAA@XZ.c)
 */

__int64 __fastcall CLegacySwapChain::CLegacySwapChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        struct DXGI_RATIONAL *a10,
        unsigned __int64 a11,
        unsigned __int64 a12,
        unsigned int a13,
        int a14,
        int a15)
{
  __int64 v17; // r11
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // xmm1_8

  v17 = a2;
  if ( a15 )
  {
    *(_QWORD *)(a1 + 24) = &CLegacySwapChain::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 360) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 384) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 408) = &CLegacySwapChain::`vbtable'{for `ISwapChain'};
    ILegacySwapChain::ILegacySwapChain((ILegacySwapChain *)(a1 + 400));
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 20) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &CLegacySwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 16) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 56) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 12LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 16LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v19 = *(int *)(*(_QWORD *)(a1 + 24) + 4LL);
  *(_DWORD *)(v19 + a1 + 20) = v19 - 312;
  v20 = *(int *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(v20 + a1 + 20) = v20 - 328;
  v21 = *(int *)(*(_QWORD *)(a1 + 24) + 12LL);
  *(_DWORD *)(v21 + a1 + 20) = v21 - 352;
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 16LL) + a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) - 376;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(a1 + 64, v17);
  wil::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>(
    a1 + 72,
    a3);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 132) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a4 + 8);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)a5;
  v22 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 168) = a6;
  *(_QWORD *)(a1 + 160) = v22;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 204) = a7;
  *(_DWORD *)(a1 + 208) = a8;
  *(_DWORD *)(a1 + 212) = a9;
  *(_DWORD *)(a1 + 216) = a14;
  *(_DWORD *)(a1 + 200) = 1;
  *(_QWORD *)(a1 + 232) = 1LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 248;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_WORD *)(a1 + 316) = 0;
  *(_BYTE *)(a1 + 318) = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  CLegacySwapChain::CalcVBlankDuration((CLegacySwapChain *)a1, a10, a11, a12, a13);
  return a1;
}
