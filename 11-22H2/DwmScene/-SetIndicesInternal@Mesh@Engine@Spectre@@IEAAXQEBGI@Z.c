/*
 * XREFs of ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z @ 0x1800493B8
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 * Callees:
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     Spectre::Engine::_anonymous_namespace_::SetIndexBufferInternal_12_std::shared_ptr_Spectre::Engine::IndexBuffer__unsigned_short_ @ 0x1800477C8 (Spectre--Engine--_anonymous_namespace_--SetIndexBufferInternal_12_std--shared_ptr_Spectre--Engin.c)
 */

void __fastcall Spectre::Engine::Mesh::SetIndicesInternal(
        Spectre::Engine::Mesh *this,
        const unsigned __int16 *const a2,
        unsigned int a3)
{
  int v3; // eax
  __int64 *Engine; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = v3 & 0xEFFFFFBF | 0x40;
  Engine = (__int64 *)Spectre::Engine::SharedResource::GetEngine(this);
  LODWORD(v8) = *((_DWORD *)this + 76);
  Spectre::Engine::_anonymous_namespace_::SetIndexBufferInternal_12_std::shared_ptr_Spectre::Engine::IndexBuffer__unsigned_short_(
    (__int64 *)this + 34,
    (__int64)a2,
    a3,
    *((_DWORD *)this + 29),
    v8,
    Engine);
}
