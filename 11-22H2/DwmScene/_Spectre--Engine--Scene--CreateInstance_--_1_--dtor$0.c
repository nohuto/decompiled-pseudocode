/*
 * XREFs of _Spectre::Engine::Scene::CreateInstance_::_1_::dtor$0 @ 0x1800E668D
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Spectre::Engine::Scene::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 96));
}
