/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001E6F8
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18014E678 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z @ 0x180160320 (-OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@P.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180022B9C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v5 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v6 = 2 * a3;
  memmove_0(v5, a2, 2 * a3);
  *(_WORD *)&v5[v6] = 0;
  return a1;
}
