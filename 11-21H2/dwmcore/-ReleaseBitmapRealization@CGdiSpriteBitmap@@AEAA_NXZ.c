/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180060888
 * Callers:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180060834 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x180062568 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180207900 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E9914 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char *v1; // rsi
  __int64 v3; // rcx
  bool v4; // di
  bool result; // al
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 424;
  v3 = *((_QWORD *)this + 53);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v3 + 8) + 4LL) + v3 + 8);
    if ( (**v6)(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v7) >= 0 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)this + 112);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v1);
    *((_QWORD *)this + 43) = 0LL;
    v4 = 1;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>>(*((void **)this + 54));
  result = v4;
  *((_QWORD *)this + 55) = *((_QWORD *)this + 54);
  return result;
}
