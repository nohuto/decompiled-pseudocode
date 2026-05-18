/*
 * XREFs of ?SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z @ 0x180049994
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8 (-SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_6_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector4_ @ 0x18004783C (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_6_std--shared_ptr_Spectre--Engin.c)
 */

void __fastcall Spectre::Engine::Mesh::SetTangentsInternal(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Utils::Math::Vector4 *const a2,
        unsigned int a3,
        char a4)
{
  struct Spectre::Engine::Engine *Engine; // rax
  int v8; // [rsp+20h] [rbp-28h]

  if ( !a4 )
    *((_DWORD *)this + 74) |= 0x20u;
  *((_DWORD *)this + 73) |= 0x20u;
  Engine = Spectre::Engine::SharedResource::GetEngine(this);
  Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_6_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector4_(
    (__int64 *)this + 24,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 31),
    v8,
    *((_DWORD *)this + 76),
    (__int64)Engine);
}
