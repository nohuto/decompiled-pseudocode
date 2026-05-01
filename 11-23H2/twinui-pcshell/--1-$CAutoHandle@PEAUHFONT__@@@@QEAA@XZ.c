/*
 * XREFs of ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x18055177C
 * Callers:
 *     __lambda_6825ce5d1ace0209a4941c0102e86eff_::operator()_::_1_::dtor$0 @ 0x18055194A (__lambda_6825ce5d1ace0209a4941c0102e86eff_--operator()_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$0 @ 0x18066DBAC (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$1 @ 0x18066DBB8 (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$1.c)
 *     _s_DrawGlyph_::_1_::dtor$0 @ 0x18074C5AE (_s_DrawGlyph_--_1_--dtor$0.c)
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
