/*
 * XREFs of ?GetDouble@JsonConfigurationManager@Utils@Spectre@@UEBANAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@N@Z @ 0x1800DE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAN@Z @ 0x1800DCEBC (--$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall Spectre::Utils::JsonConfigurationManager::GetDouble(__int64 a1, wchar_t *a2, double a3)
{
  unsigned __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Spectre::Utils::JsonConfigurationManager::TryGetValue<double>(a1, a2, (double *)&v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
