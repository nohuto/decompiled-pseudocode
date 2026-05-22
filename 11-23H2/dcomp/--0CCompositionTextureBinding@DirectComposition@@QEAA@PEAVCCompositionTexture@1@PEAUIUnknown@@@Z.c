/*
 * XREFs of ??0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIUnknown@@@Z @ 0x18009FC44
 * Callers:
 *     ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90 (-CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x18009FB3C (--0-$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

DirectComposition::CCompositionTextureBinding *__fastcall DirectComposition::CCompositionTextureBinding::CCompositionTextureBinding(
        DirectComposition::CCompositionTextureBinding *this,
        struct DirectComposition::CCompositionTexture *a2,
        struct IUnknown *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionTextureBinding::`vftable';
  wil::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    (__int64)a2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
  return this;
}
