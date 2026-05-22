/*
 * XREFs of ??0?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800983E4
 * Callers:
 *     ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700 (-Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@.c)
 *     ??0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@@Z @ 0x18009FB78 (--0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuff.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
