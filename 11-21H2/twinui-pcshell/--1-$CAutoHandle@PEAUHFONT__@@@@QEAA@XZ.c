/*
 * XREFs of ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x1804981DC
 * Callers:
 *     __lambda_6825ce5d1ace0209a4941c0102e86eff_::operator()_::_1_::dtor$0 @ 0x18023119A (__lambda_6825ce5d1ace0209a4941c0102e86eff_--operator()_--_1_--dtor$0.c)
 *     _CShellSnapComponent::_IsEdgeCompletelyOccluded_::_1_::dtor$1 @ 0x180597DE2 (_CShellSnapComponent--_IsEdgeCompletelyOccluded_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$0 @ 0x18059E450 (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$1 @ 0x18059E45C (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$1.c)
 *     _s_DrawGlyph_::_1_::dtor$0 @ 0x1805F5B57 (_s_DrawGlyph_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteObject(v1);
  return (int)v1;
}
