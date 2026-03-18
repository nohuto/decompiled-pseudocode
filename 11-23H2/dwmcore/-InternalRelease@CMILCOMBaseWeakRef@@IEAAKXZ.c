/*
 * XREFs of ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x1800FA8BC
 * Callers:
 *     ?Release@CConversionSwapChain@@UEAAKXZ @ 0x1800FA8B0 (-Release@CConversionSwapChain@@UEAAKXZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C18A8 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E93E4 (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180293638 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x1802A180C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ @ 0x1800FA90C (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseWeakRef::InternalRelease(CMILCOMBaseWeakRef *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 2));
    v3 = v1 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  }
  else
  {
    v3 = 16LL;
  }
  v4 = CMILRefCountBaseT<IUnknownWeakRefSource>::InternalRelease(this);
  if ( v1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v4;
}
