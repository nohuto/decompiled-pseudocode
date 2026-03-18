/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800D1AB0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801D8424 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007F150 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800DE6B4 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  struct IDeviceTarget **v8; // rcx
  struct IDeviceTarget *v9; // rbx
  struct IDeviceTarget *v11; // rdx
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rcx
  struct IDeviceTarget *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  v15 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v15);
  v5 = CD2DContext::PopTarget((CD2DContext *)(v2 + 16), (CDrawingContext *)((char *)this + 24), &v15);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0xB4u);
  if ( g_LockAndReadD2DTarget )
  {
    v14 = *((_QWORD *)this + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 24LL))(v14, (char *)this + 24);
  }
  v8 = (struct IDeviceTarget **)((char *)this + 32);
  if ( a2 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v8);
    v9 = v15;
  }
  else
  {
    v11 = *v8;
    v9 = 0LL;
    *v8 = v15;
    if ( v11 )
    {
      v12 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    CDrawingContext::UpdateRenderTargetInfo(this);
    --*((_DWORD *)this + 222);
  }
  *((_BYTE *)this + 8041) = 1;
  if ( v9 )
  {
    v13 = (char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v7;
}
