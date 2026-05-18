/*
 * XREFs of _Spectre::Engine::Scene::Scene_::_1_::dtor$2 @ 0x1800E660E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::Scene::Scene_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ID3D11Resource>::~ComPtr<ID3D11Resource>((_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL));
}
