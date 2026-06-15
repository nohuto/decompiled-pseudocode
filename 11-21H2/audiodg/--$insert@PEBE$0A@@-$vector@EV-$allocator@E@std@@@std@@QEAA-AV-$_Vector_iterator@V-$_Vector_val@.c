/*
 * XREFs of ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140060C88
 * Callers:
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@@Z @ 0x14002DD48 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400608F0 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::insert<unsigned char const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  char *v5; // rbx
  _QWORD *result; // rax

  v5 = &a3[-*a1];
  std::vector<unsigned char>::_Insert_range<unsigned char const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = &v5[*a1];
  return result;
}
