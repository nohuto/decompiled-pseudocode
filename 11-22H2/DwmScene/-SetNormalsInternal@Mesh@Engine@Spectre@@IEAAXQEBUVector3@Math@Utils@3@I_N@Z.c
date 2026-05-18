/*
 * XREFs of ?SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z @ 0x180049704
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_ @ 0x180047808 (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_5_std--shared_ptr_Spectre--Engin.c)
 */

void __fastcall Spectre::Engine::Mesh::SetNormalsInternal(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Utils::Math::Vector3 *const a2,
        unsigned int a3,
        char a4)
{
  struct Spectre::Engine::Engine *Engine; // rax

  if ( !a4 )
    *((_DWORD *)this + 74) |= 0x10u;
  *((_DWORD *)this + 73) |= 0x10u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_(
    (__int64 *)this + 20,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 31),
    1,
    *((_DWORD *)this + 76),
    (__int64)Engine);
}
