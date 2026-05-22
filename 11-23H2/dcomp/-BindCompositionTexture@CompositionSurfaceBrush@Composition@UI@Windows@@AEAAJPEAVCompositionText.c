/*
 * XREFs of ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z @ 0x1800A3614
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90 (-CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@VCCompositionSurfaceProxy@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A35D0 (--1-$com_ptr_t@VCCompositionSurfaceProxy@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ?SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z @ 0x1801473D0 (-SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::BindCompositionTexture(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        struct Windows::UI::Composition::CompositionTexture *a2)
{
  DirectComposition::CCompositionTexture *v3; // rbx
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+38h] [rbp+10h] BYREF
  DirectComposition::CTransformGroupProxy *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v3 = (DirectComposition::CCompositionTexture *)*((_QWORD *)a2 + 21);
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)&v9);
  v4 = DirectComposition::CCompositionTexture::CreateSurfaceBinding(v3, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (unsigned int *)v9;
    v9 = 0LL;
    v5 = 0;
    v10 = (DirectComposition::CTransformGroupProxy *)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontexture.cpp",
      (const char *)(unsigned int)v4);
    v6 = 0LL;
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v9);
  if ( v5 >= 0 )
  {
    Windows::UI::Composition::ProxyObject::SetReferenceProperty(this, 0, v6[3]);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<DirectComposition::CCompositionSurfaceProxy,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CCompositionSurfaceProxy,wil::err_returncode_policy>(&v10);
  return (unsigned int)v5;
}
