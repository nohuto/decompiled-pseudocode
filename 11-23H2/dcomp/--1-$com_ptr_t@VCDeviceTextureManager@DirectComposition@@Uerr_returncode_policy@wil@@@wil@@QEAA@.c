/*
 * XREFs of ??1?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098584
 * Callers:
 *     ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700 (-Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@.c)
 *     ??1CCompositionTexture@DirectComposition@@EEAA@XZ @ 0x18009FCA4 (--1CCompositionTexture@DirectComposition@@EEAA@XZ.c)
 *     ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90 (-CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 *     ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC (-EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceT.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
