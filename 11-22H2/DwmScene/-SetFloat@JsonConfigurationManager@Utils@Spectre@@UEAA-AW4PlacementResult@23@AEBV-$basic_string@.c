/*
 * XREFs of ?SetFloat@JsonConfigurationManager@Utils@Spectre@@UEAA?AW4PlacementResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MW4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DEEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::JsonConfigurationManager::SetFloat(__int64 a1, wchar_t *a2, float a3, int a4)
{
  return Spectre::Utils::JsonConfigurationManager::SetValue<double>(a1, a2, a3, a4);
}
