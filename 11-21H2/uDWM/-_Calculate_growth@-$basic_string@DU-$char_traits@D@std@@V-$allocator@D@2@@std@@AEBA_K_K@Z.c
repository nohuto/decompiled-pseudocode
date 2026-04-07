/*
 * XREFs of ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180042B40
 * Callers:
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x180042AA4 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1800F21E8 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 *     ??$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD2@Z @ 0x1800F22D0 (--$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@-$basic_string@DU-$c.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::string::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 0xF;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (a2 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = v2 >> 1;
    if ( v2 <= 0x7FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    {
      v4 = v5 + v2;
      if ( v3 >= v5 + v2 )
        return v3;
    }
  }
  return v4;
}
