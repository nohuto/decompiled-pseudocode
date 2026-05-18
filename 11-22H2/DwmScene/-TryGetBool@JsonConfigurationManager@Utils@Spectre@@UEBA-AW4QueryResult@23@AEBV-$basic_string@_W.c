/*
 * XREFs of ?TryGetBool@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4QueryResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEA_N@Z @ 0x1800DF090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::TryGetBool(__int64 a1, wchar_t *a2, bool *a3)
{
  return Spectre::Utils::JsonConfigurationManager::TryGetValue<bool>(a1, a2, a3);
}
