/*
 * XREFs of ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003C9E4
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C1CC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E7D18 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B1740 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B4E4C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E6460 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseDeviceTarget(CRenderTargetBitmap *this)
{
  char *v1; // rdi
  __int64 v3; // r8
  char *v4; // rcx
  __int64 v5; // r9

  v1 = (char *)this + 136;
  v3 = *((_QWORD *)this + 17);
  v4 = 0LL;
  if ( v3 )
  {
    if ( this )
      v4 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16;
    v5 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v5 + 8) + 48LL))(v5 + 8, v4);
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
  CD2DBitmapCache::InitializeCache(this, 0LL);
}
