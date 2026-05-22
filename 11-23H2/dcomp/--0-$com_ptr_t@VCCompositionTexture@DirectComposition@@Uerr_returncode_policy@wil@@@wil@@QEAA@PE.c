/*
 * XREFs of ??0?$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x18009FB3C
 * Callers:
 *     ??0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIUnknown@@@Z @ 0x18009FC44 (--0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIUnknown@@@Z.c)
 *     ?Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@PEAPEAV12@@Z @ 0x18009FDBC (-Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
