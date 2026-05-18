/*
 * XREFs of _Spectre::Engine::ShaderManager::GetOptionNames_::_1_::dtor$0 @ 0x1800E733D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@XZ @ 0x18004E9A8 (--1-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$basic_string@D.c)
 */

void __fastcall Spectre::Engine::ShaderManager::GetOptionNames_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::set<std::string>::~set<std::string>(*(void ***)(a2 + 40));
  }
}
