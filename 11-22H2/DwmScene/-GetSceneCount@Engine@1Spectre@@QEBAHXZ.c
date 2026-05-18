/*
 * XREFs of ?GetSceneCount@Engine@1Spectre@@QEBAHXZ @ 0x1800347D4
 * Callers:
 *     ?OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z @ 0x180066DA0 (-OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Engine::GetSceneCount(Spectre::Engine::Engine *this)
{
  return (__int64)(*((_QWORD *)this + 89) - *((_QWORD *)this + 88)) >> 4;
}
