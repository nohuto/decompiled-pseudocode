/*
 * XREFs of ?SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z @ 0x180049850
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_ @ 0x180047808 (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_5_std--shared_ptr_Spectre--Engin.c)
 */

void __fastcall Spectre::Engine::Mesh::SetPositionsInternal(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Utils::Math::Vector3 *const a2,
        unsigned int a3)
{
  struct Spectre::Engine::Engine *Engine; // rax

  *((_DWORD *)this + 73) |= 0x100u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_(
    (__int64 *)this + 18,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 31),
    0,
    *((_DWORD *)this + 76),
    (__int64)Engine);
}
