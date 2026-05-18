/*
 * XREFs of ?TryGetString@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4QueryResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV56@@Z @ 0x1800DF110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::TryGetString(__int64 a1, wchar_t *a2, _OWORD *a3)
{
  return Spectre::Utils::JsonConfigurationManager::TryGetValue<std::wstring>(a1, a2, a3);
}
