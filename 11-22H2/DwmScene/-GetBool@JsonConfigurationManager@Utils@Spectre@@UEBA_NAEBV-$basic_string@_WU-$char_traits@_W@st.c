/*
 * XREFs of ?GetBool@JsonConfigurationManager@Utils@Spectre@@UEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_N@Z @ 0x1800DE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEA_N@Z @ 0x1800DD288 (--$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_str.c)
 */

bool __fastcall Spectre::Utils::JsonConfigurationManager::GetBool(__int64 a1, wchar_t *a2, char a3)
{
  int v4; // eax
  char v5; // dl
  bool v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = Spectre::Utils::JsonConfigurationManager::TryGetValue<bool>(a1, a2, &v7);
  v5 = a3;
  if ( !v4 )
    return v7;
  return v5;
}
