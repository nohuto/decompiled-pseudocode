/*
 * XREFs of ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x180560B2C
 * Callers:
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x1801C4140 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@V-$initializer_list@H@1@AEBV-$allocator@H@1@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801CE468 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18023877C (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Copy_unchecked@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@PEAV12@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@PEAV10@00@Z @ 0x180561004 (--$_Copy_unchecked@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@P.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18031AEE0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<int>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<4>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * a2];
  a1[2] = result;
  return result;
}
