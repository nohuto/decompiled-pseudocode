/*
 * XREFs of _Spectre::Engine::LightGatherer::UpdateLightConstants_::_1_::dtor$0 @ 0x1800EB5AC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$array@V?$shared_ptr@VAimer@Engine@Spectre@@@std@@$02@std@@QEAA@XZ @ 0x18006405C (--1-$array@V-$shared_ptr@VAimer@Engine@Spectre@@@std@@$02@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::LightGatherer::UpdateLightConstants_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    std::array<std::shared_ptr<Spectre::Engine::Aimer>,3>::~array<std::shared_ptr<Spectre::Engine::Aimer>,3>(*(char **)(a2 + 800));
  }
}
