/*
 * XREFs of ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800FC044
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800DD15C (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800FCB74 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800FD990 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E7640 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800EE3EC (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800FC294 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801E6640 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CLegacyRenderTarget::ReleaseSwapChain(CLegacyRenderTarget *this)
{
  CResource *v2; // rcx
  CSyncLockGroup *v3; // rcx

  COverlayContext::Reset((CLegacyRenderTarget *)((char *)this + 200));
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 22);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  v2 = (CResource *)*((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CSyncLockGroup *)*((_QWORD *)this + 2321);
  if ( v3 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v3,
      (struct IMonitorTarget *)(((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 2321) = 0LL;
  }
  *((_QWORD *)this + 2311) = 0LL;
  *((_QWORD *)this + 2312) = 0LL;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_BYTE *)this + 18560) = 0;
  *((_BYTE *)this + 18700) = 0;
  *((_BYTE *)this + 18702) = 0;
}
