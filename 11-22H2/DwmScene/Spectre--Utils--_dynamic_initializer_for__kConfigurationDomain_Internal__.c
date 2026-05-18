/*
 * XREFs of Spectre::Utils::_dynamic_initializer_for__kConfigurationDomain_Internal__ @ 0x18000AA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Utils::_dynamic_initializer_for__kConfigurationDomain_Internal__()
{
  std::wstring::wstring(&Spectre::Utils::kConfigurationDomain_Internal, L"Internal");
  return atexit((void (__cdecl *)())Spectre::Utils::_dynamic_atexit_destructor_for__kConfigurationDomain_Internal__);
}
