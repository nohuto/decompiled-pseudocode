/*
 * XREFs of ??0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@@Z @ 0x18009FB78
 * Callers:
 *     ?Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@PEAPEAV12@@Z @ 0x18009FDBC (-Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationB.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$com_ptr_t@UIPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIPresentationBuffer@@@Z @ 0x1800983A8 (--0-$com_ptr_t@UIPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIPresentationBuf.c)
 *     ??0?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800983E4 (--0-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::CCompositionTexture(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6)
{
  void *v9; // rdx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DirectComposition::CCompositionTexture::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CCompositionTexture::`vftable'{for `IDCompositionTexture'};
  wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(a1 + 32) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  wil::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 40),
    a3);
  *(_QWORD *)(a1 + 48) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  v9 = *a5;
  *a5 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(a1 + 56),
    v9);
  return a1;
}
