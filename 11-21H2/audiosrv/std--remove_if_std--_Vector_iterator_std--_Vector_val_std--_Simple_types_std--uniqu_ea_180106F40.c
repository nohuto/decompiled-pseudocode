/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___ @ 0x180106F40
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x180107330 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCAppSubmixClientContext@@@std@@$0A@@?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801060AC (--$-4U-$default_delete@VCAppSubmixClientContext@@@std@@$0A@@-$unique_ptr@VCAppSubmixClientContex.c)
 */

CAppSubmixClientContext ***__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___(
        CAppSubmixClientContext ***a1,
        CAppSubmixClientContext **a2,
        CAppSubmixClientContext **a3,
        CAppSubmixClientContext **a4)
{
  CAppSubmixClientContext **i; // rsi
  CAppSubmixClientContext **j; // rbp
  CAppSubmixClientContext ***result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( *j != *a4 )
        std::unique_ptr<CAppSubmixClientContext>::operator=<std::default_delete<CAppSubmixClientContext>,0>(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
