/*
 * XREFs of ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C785C
 * Callers:
 *     ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800C76A4 (-ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERT.c)
 *     ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x18010B584 (-ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERT.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E6FBC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1801E87D4 (-ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYREN.c)
 *     ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z @ 0x1801EEA10 (-SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F95FC (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800C7A54 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIVisualTreeClient@@_K0@Z @ 0x1800C7D50 (-reserve_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C7E0C (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
                   (__int64)(*(_QWORD *)(v5 + 4544) - *(_QWORD *)(v5 + 4536)) >> 3) = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
      *(_BYTE *)(v5 + 4712) = 1;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        (char *)this + 88,
        *(_QWORD *)(*((_QWORD *)this + 12) + 64LL));
    }
    *((_BYTE *)this + 141) = 1;
  }
}
