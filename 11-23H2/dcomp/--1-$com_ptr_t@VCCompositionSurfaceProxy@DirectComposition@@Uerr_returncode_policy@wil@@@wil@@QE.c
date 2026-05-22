/*
 * XREFs of ??1?$com_ptr_t@VCCompositionSurfaceProxy@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A35D0
 * Callers:
 *     ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z @ 0x1800A3614 (-BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionText.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<DirectComposition::CCompositionSurfaceProxy,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CCompositionSurfaceProxy,wil::err_returncode_policy>(
        DirectComposition::CTransformGroupProxy **a1)
{
  DirectComposition::CTransformGroupProxy *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return DirectComposition::CTransformGroupProxy::Release(v1);
  return result;
}
