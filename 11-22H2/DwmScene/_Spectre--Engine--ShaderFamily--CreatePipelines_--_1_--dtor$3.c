/*
 * XREFs of _Spectre::Engine::ShaderFamily::CreatePipelines_::_1_::dtor$3 @ 0x1800E7D09
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031C08 (--1-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VComponent.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::CreatePipelines_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::vector<std::shared_ptr<Spectre::Engine::Component>>::~vector<std::shared_ptr<Spectre::Engine::Component>>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
