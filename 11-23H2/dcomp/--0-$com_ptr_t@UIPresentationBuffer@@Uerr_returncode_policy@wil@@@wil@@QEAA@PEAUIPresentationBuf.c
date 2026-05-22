/*
 * XREFs of ??0?$com_ptr_t@UIPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIPresentationBuffer@@@Z @ 0x1800983A8
 * Callers:
 *     ?EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAUIPresentationBuffer@@@Z @ 0x180098968 (-EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEA.c)
 *     ??0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@@Z @ 0x18009FB78 (--0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuff.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
