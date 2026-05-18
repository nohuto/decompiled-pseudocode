/*
 * XREFs of ?GetInt@JsonConfigurationManager@Utils@Spectre@@UEBAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z @ 0x1800DE760
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 */

__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetInt(__int64 a1, wchar_t *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)Spectre::Utils::JsonConfigurationManager::TryGetValue<int>(a1, a2, &v5) )
    return v5;
  return a3;
}
