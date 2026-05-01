/*
 * XREFs of ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x1805492BC
 * Callers:
 *     ??$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@Z @ 0x180548EB8 (--$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@-$basic_string@_WU-$char_tr.c)
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x180761CC0 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::wstring::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 7;
  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( (a2 | 7uLL) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = v2 >> 1;
    if ( v2 <= 0x7FFFFFFFFFFFFFFELL - (v2 >> 1) )
    {
      v4 = v5 + v2;
      if ( v3 >= v5 + v2 )
        return v3;
    }
  }
  return v4;
}
