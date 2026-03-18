/*
 * XREFs of ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x180290460
 * Callers:
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyStereoSwapChain@@@Z @ 0x180290838 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainD.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x18001EEB4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x18001F264 (--0ILegacySwapChain@@QEAA@XZ.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::CLegacyStereoSwapChain(
        CLegacyStereoSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct _LUID a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct DXGI_RATIONAL a10)
{
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  CLegacyStereoSwapChain *result; // rax

  *((_QWORD *)this + 3) = &CLegacyStereoSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 42) = &CLegacyStereoSwapChain::`vbtable';
  *((_QWORD *)this + 48) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 51) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 54) = &CConversionSwapChain::`vbtable'{for `ISwapChain'};
  ILegacySwapChain::ILegacySwapChain((CLegacyStereoSwapChain *)((char *)this + 424));
  CLegacySwapChain::CLegacySwapChain(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    v13,
    (__int64)a5,
    *(_QWORD *)&a6,
    a7,
    a8,
    a9,
    &a10,
    0LL,
    0LL,
    1u,
    0,
    0);
  *((_QWORD *)this + 41) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 4LL) + 336) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 8LL) + 336) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 12LL) + 336) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 16LL) + 336) = &ILegacyStereoSwapChain::`vftable'{for `ILegacySwapChain'};
  *(_QWORD *)this = &CLegacyStereoSwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CLegacyStereoSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 41) = &CLegacyStereoSwapChain::`vftable'{for `ILegacyStereoSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CLegacyStereoSwapChain::`vftable'{for `ILegacySwapChain'};
  v14 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v14 + 20) = v14 - 336;
  v15 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v15 + 20) = v15 - 352;
  v16 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v16 + 20) = v16 - 376;
  v17 = *(int *)(*((_QWORD *)this + 3) + 16LL);
  result = this;
  *(_DWORD *)((char *)this + v17 + 20) = v17 - 400;
  *((_QWORD *)this + 43) = 0LL;
  return result;
}
