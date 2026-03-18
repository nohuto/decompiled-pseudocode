/*
 * XREFs of ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801EB108
 * Callers:
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801EA3A4 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801EA598 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801EAB60 (-NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801EAD30 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801EBA2C (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DFC1C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseSwapChain(CRemoteAppRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (__int64 *)((char *)this + 168);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(
      v4,
      ((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *((_QWORD *)this + 22) = 0LL;
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
}
