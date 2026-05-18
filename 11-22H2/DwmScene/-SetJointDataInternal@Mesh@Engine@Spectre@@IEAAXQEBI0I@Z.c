/*
 * XREFs of ?SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z @ 0x18004957C
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z @ 0x18004949C (-SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_ @ 0x18004787C (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_17_std--shared_ptr_Spectre--Engi.c)
 */

void __fastcall Spectre::Engine::Mesh::SetJointDataInternal(
        Spectre::Engine::Mesh *this,
        const unsigned int *const a2,
        const unsigned int *const a3,
        unsigned int a4)
{
  struct Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::Engine *v9; // rax

  *((_DWORD *)this + 73) |= 0x400u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_(
    (__int64 *)this + 26,
    (__int64)a2,
    a4,
    *((_DWORD *)this + 31),
    6,
    *((_DWORD *)this + 76),
    (__int64)Engine);
  v9 = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_(
    (__int64 *)this + 28,
    (__int64)a3,
    a4,
    *((_DWORD *)this + 31),
    7,
    *((_DWORD *)this + 76),
    (__int64)v9);
}
