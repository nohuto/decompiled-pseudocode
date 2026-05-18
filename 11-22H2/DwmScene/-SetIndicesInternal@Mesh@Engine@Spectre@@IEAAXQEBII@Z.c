/*
 * XREFs of ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x18004942C
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetIndexBufferInternal_8_std::shared_ptr_Spectre::Engine::IndexBuffer__unsigned_int_ @ 0x1800477BC (Spectre--Engine--_anonymous_namespace_--SetIndexBufferInternal_8_std--shared_ptr_Spectre--Engine.c)
 */

void __fastcall Spectre::Engine::Mesh::SetIndicesInternal(
        Spectre::Engine::Mesh *this,
        const unsigned int *const a2,
        unsigned int a3)
{
  __int64 *Engine; // rax
  __int64 v7; // [rsp+20h] [rbp-18h]

  *((_DWORD *)this + 73) |= 0x10000040u;
  *((_DWORD *)this + 72) = 1;
  Engine = (__int64 *)Spectre::Engine::SharedResource::GetEngine(this);
  LODWORD(v7) = *((_DWORD *)this + 76);
  Spectre::Engine::_anonymous_namespace_::SetIndexBufferInternal_8_std::shared_ptr_Spectre::Engine::IndexBuffer__unsigned_int_(
    (__int64 *)this + 34,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 29),
    v7,
    Engine);
}
