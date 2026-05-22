/*
 * XREFs of ?RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A3858
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTexture@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A1D00 (--$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A36E0 (--4-$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAAAEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionTexture *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct DirectComposition::CCompositionTexture *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 21,
      (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontexture.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
