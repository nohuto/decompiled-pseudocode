/*
 * XREFs of ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z @ 0x1800A3614 (-BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionText.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098584 (--1-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIUnknown@@@Z @ 0x18009FC44 (--0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::CreateSurfaceBinding(
        DirectComposition::CCompositionTexture *this,
        struct IUnknown **a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, struct IUnknown **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  DirectComposition::CCompositionTextureBinding *v9; // rax
  DirectComposition::CCompositionTextureBinding *v10; // rax
  struct IUnknown *v11; // rax
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v15; // [rsp+40h] [rbp+8h] BYREF
  DirectComposition::CCompositionTextureBinding *v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 3);
  v15 = 0LL;
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v5 + 80LL);
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)&v15);
  v7 = v6(v5, *((_QWORD *)this + 7), &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (DirectComposition::CCompositionTextureBinding *)operator new(0x20uLL);
    if ( v9 )
    {
      v10 = DirectComposition::CCompositionTextureBinding::CCompositionTextureBinding(v9, this, v15);
      v16 = v10;
      if ( v10 )
      {
        (**(void (__fastcall ***)(DirectComposition::CCompositionTextureBinding *))v10)(v10);
        v11 = v15;
        v15 = 0LL;
        *a2 = v11;
        v12 = *((_QWORD *)this + 3);
        ++*((_DWORD *)this + 16);
        *(_BYTE *)(v12 + 56) = 1;
        wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v16);
        v8 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      v16 = 0LL;
    }
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v16);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
    (const char *)(unsigned int)v7);
LABEL_8:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v15);
  return v8;
}
