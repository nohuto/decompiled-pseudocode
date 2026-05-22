/*
 * XREFs of ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0
 * Callers:
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     DCompositionCreateSurfaceHandle @ 0x180088D60 (DCompositionCreateSurfaceHandle.c)
 *     ??$_Emplace_reallocate@PEAVCCompositionTexture@DirectComposition@@@?$vector@PEAVCCompositionTexture@DirectComposition@@V?$allocator@PEAVCCompositionTexture@DirectComposition@@@std@@@std@@QEAAPEAPEAVCCompositionTexture@DirectComposition@@QEAPEAV23@$$QEAPEAV23@@Z @ 0x1800981C8 (--$_Emplace_reallocate@PEAVCCompositionTexture@DirectComposition@@@-$vector@PEAVCCompositionText.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAUIPresentationBuffer@@@Z @ 0x180098968 (-EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEA.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@PEAPEAV12@@Z @ 0x18009FDBC (-Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationB.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::CreateCompositionTexture(
        const void **this,
        struct ID3D11Texture2D *a2,
        struct DirectComposition::CCompositionTexture **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  _BYTE *v13; // rdx
  struct DirectComposition::CCompositionTexture *v14; // rbx
  struct DirectComposition::CCompositionTexture *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  struct IPresentationBuffer *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v18[0] = 0LL;
  v6 = DirectComposition::CDeviceTextureManager::EnsurePresentationBuffer(
         (DirectComposition::CDeviceTextureManager *)this,
         a2,
         v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  v20 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v20,
    0LL);
  v8 = DCompositionCreateSurfaceHandle(0x10000000u, 0LL, &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_5:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v20);
    goto LABEL_15;
  }
  v9 = (__int64 *)this[3];
  v10 = *v9;
  v17 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, void *, __int64 *))(v10 + 32))(v9, v20, &v17);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
    goto LABEL_5;
  }
  v16 = 0LL;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(&v16);
  v12 = DirectComposition::CCompositionTexture::Create(this, v18[0], v17, &v20, a2, &v16);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v16);
    goto LABEL_8;
  }
  v13 = this[11];
  v14 = v16;
  if ( v13 == this[12] )
  {
    std::vector<DirectComposition::CCompositionTexture *>::_Emplace_reallocate<DirectComposition::CCompositionTexture *>(
      this + 10,
      v13,
      &v16);
  }
  else
  {
    *(_QWORD *)v13 = v16;
    this[11] = (char *)this[11] + 8;
  }
  v16 = 0LL;
  *a3 = v14;
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v20);
  v7 = 0;
LABEL_15:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)v18);
  return v7;
}
