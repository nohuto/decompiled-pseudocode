/*
 * XREFs of ??$?4U?$default_delete@VCAppSubmixClientContext@@@std@@$0A@@?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CFC60
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___ @ 0x1800D1190 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--uniqu_ea_1800D1190.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D3450 (-erase@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800D14F0 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

CAppSubmixClientContext **__fastcall std::unique_ptr<CAppSubmixClientContext>::operator=<std::default_delete<CAppSubmixClientContext>,0>(
        CAppSubmixClientContext **a1,
        CAppSubmixClientContext **a2)
{
  CAppSubmixClientContext *v3; // rax
  CAppSubmixClientContext *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CAppSubmixClientContext::~CAppSubmixClientContext(v4);
      operator delete(v4);
    }
  }
  return a1;
}
