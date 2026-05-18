/*
 * XREFs of _Spectre::Utils::JsonConfigurationManager::SerializeConfiguration_::_1_::dtor$2 @ 0x1800F1F71
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@QEAA@XZ @ 0x180010F30 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@M@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Utils::JsonConfigurationManager::SerializeConfiguration_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::pair<std::string const,float>::~pair<std::string const,float>((void *)(a2 + 64));
  }
}
