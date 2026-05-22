/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180102DF8
 * Callers:
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x1800646FC (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1800FECA4 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 */

void **__fastcall std::string::assign(void **a1, const void *a2, size_t a3)
{
  void *v5; // rsi
  void **result; // rax

  if ( a3 > (unsigned __int64)a1[3] )
    return (void **)std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(
                      (__int64)a1,
                      a3,
                      a3,
                      a2);
  v5 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v5 = *a1;
  a1[2] = (void *)a3;
  memmove_0(v5, a2, a3);
  result = a1;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}
