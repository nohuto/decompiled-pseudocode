/*
 * XREFs of ?AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z @ 0x180060CB0
 * Callers:
 *     ?AddDeviceResourcesToCache@CBrushRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x180060C60 (-AddDeviceResourcesToCache@CBrushRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z.c)
 *     ?AddDeviceResourcesToCache@CWARPDrawListEntry@@UEBAXPEAVCDrawListCache@@@Z @ 0x1801E7A90 (-AddDeviceResourcesToCache@CWARPDrawListEntry@@UEBAXPEAVCDrawListCache@@@Z.c)
 *     ?AddDeviceResourcesToCache@CCubeMapRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1802AAAF0 (-AddDeviceResourcesToCache@CCubeMapRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800AFBC0 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::AddDeviceResourceToCache(CDrawListBitmap *this, struct CDrawListCache *a2)
{
  __int64 v2; // r8
  void (__fastcall ***v4)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  struct IDeviceResource *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( v2 && !*(_QWORD *)this )
  {
    v5 = 0LL;
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IDeviceResource **))(v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL));
    (**v4)(v4, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v5);
    if ( v5 )
      CDrawListCache::AddDeviceResource(a2, v5);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
  }
}
