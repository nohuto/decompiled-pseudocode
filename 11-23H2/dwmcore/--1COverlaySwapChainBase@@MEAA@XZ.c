/*
 * XREFs of ??1COverlaySwapChainBase@@MEAA@XZ @ 0x1800FD2A8
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800FD374 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180288200 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??_ECOverlaySwapChainBase@@MEAAPEAXI@Z @ 0x1802887A8 (--_ECOverlaySwapChainBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x1800A1034 (--1CDeviceResource@@MEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlaySwapChainBase::~COverlaySwapChainBase(COverlaySwapChainBase *this)
{
  __int64 v2; // rcx
  CD3DDevice *v3; // rcx
  __int64 v4; // rax

  *(_QWORD *)this = &COverlaySwapChainBase::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &COverlaySwapChainBase::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &COverlaySwapChainBase::`vftable'{for `CDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 240;
  FastRegion::CRegion::FreeMemory((void **)this + 17);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 128);
  v3 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v3 )
    CD3DDevice::Release(v3);
  CDeviceResource::~CDeviceResource((COverlaySwapChainBase *)((char *)this + 40));
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  }
}
