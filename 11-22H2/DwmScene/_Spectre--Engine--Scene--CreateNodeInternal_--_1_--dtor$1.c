/*
 * XREFs of _Spectre::Engine::Scene::CreateNodeInternal_::_1_::dtor$1 @ 0x1800E672F
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Spectre::Engine::Scene::CreateNodeInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 104));
}
