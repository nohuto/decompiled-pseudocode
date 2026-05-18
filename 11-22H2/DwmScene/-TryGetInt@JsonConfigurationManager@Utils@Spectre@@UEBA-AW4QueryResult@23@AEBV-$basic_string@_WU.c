/*
 * XREFs of ?TryGetInt@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4QueryResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DF100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::TryGetInt(__int64 a1, wchar_t *a2, _DWORD *a3)
{
  return Spectre::Utils::JsonConfigurationManager::TryGetValue<int>(a1, a2, a3);
}
