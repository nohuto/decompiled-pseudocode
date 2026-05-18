/*
 * XREFs of ?SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x180049188
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800490B0 (-SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_ @ 0x18004787C (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_17_std--shared_ptr_Spectre--Engi.c)
 */

void __fastcall Spectre::Engine::Mesh::SetColoursInternal(
        Spectre::Engine::Mesh *this,
        const unsigned int *const a2,
        unsigned int a3)
{
  struct Spectre::Engine::Engine *Engine; // rax

  *((_DWORD *)this + 73) |= 0x80u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_(
    (__int64 *)this + 22,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 31),
    3,
    *((_DWORD *)this + 76),
    (__int64)Engine);
}
