/*
 * XREFs of _Spectre::Engine::SceneNode::GetWorldPosition_::_1_::dtor$1 @ 0x1800E6476
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::GetWorldPosition_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 272) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 272) &= ~1u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>((_QWORD *)(a2 + 32));
  }
}
