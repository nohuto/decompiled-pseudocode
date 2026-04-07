/*
 * XREFs of ??4?$com_ptr_t@VCCachedVisualImageProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisualImageProxy@@@Z @ 0x18000D940
 * Callers:
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180029E9C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CCachedVisualImageProxy,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  v3 = *a1;
  *a1 = (CBaseObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  return a1;
}
