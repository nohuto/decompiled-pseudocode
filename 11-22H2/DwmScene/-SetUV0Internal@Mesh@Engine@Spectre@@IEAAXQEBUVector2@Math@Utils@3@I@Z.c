/*
 * XREFs of ?SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049B6C
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_4_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector2_ @ 0x1800477D4 (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_4_std--shared_ptr_Spectre--Engin.c)
 */

void __fastcall Spectre::Engine::Mesh::SetUV0Internal(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Utils::Math::Vector2 *const a2,
        unsigned int a3)
{
  struct Spectre::Engine::Engine *Engine; // rax

  *((_DWORD *)this + 73) |= 1u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_4_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector2_(
    (__int64 *)this + 30,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 31),
    4,
    *((_DWORD *)this + 76),
    (__int64)Engine);
}
