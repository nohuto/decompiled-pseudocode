/*
 * XREFs of ?_Xlength@?$vector@EV?$allocator@E@std@@@std@@CAXXZ @ 0x140065FF0
 * Callers:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x140064514 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<unsigned char>::_Xlength()
{
  std::_Xlength_error("vector too long");
}
