/*
 * XREFs of _Spectre::Utils::Tweening::TweenManager::CreateTween_float_Spectre::Utils::Tweening::TransformationDefault_float____::_1_::dtor$4 @ 0x1800EA9FA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Utils::Tweening::TweenManager::CreateTween_float_Spectre::Utils::Tweening::TransformationDefault_float____::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>(*(_QWORD **)(a2 + 64));
  }
}
