/*
 * XREFs of ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x180025294
 * Callers:
 *     ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800F790C (-ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERT.c)
 *     ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800FFD50 (-ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERT.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801C034C (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z @ 0x1801C6140 (-SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z.c)
 *     ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1801C8B38 (-ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYREN.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801E0F4C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x180025230 (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIVisualTreeClient@@_K0@Z @ 0x180025344 (-reserve_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x180027160 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( a2 != *((struct CVisualTree **)this + 12) )
  {
    CRenderTarget::ReleaseVisualTree(this);
    v4 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *((_QWORD *)this + 12);
    if ( v5 )
    {
      *(_QWORD *)detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   v5 + 4536,
                   (__int64)(*(_QWORD *)(v5 + 4544) - *(_QWORD *)(v5 + 4536)) >> 3) = (char *)this + 72;
      *(_BYTE *)(v5 + 4712) = 1;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        (char *)this + 88,
        *(_QWORD *)(*((_QWORD *)this + 12) + 64LL));
    }
    *((_BYTE *)this + 141) = 1;
  }
}
