/*
 * XREFs of ?AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004B100
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ @ 0x18004BA58 (-GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::MeshInstance::AttachDevice(Spectre::Engine::MeshInstance *this, _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  Spectre::Engine::ShaderPropertyBlock *v8; // r8
  Spectre::Engine::ShaderPropertyBlock *v9; // r8
  Spectre::Engine::ShaderPropertyBlock *v10; // r8
  Spectre::Engine::ShaderPropertyBlock *v11; // r8
  std::_Ref_count_base *v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF

  v4 = (std::_Ref_count_base *)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                 v13,
                                 a2)[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(*a2 + 24LL));
  v5 = 0LL;
  if ( Spectre::Engine::MeshInstance::GetMaterialCount(this) )
  {
    v6 = 0LL;
    do
    {
      v7 = *((_QWORD *)this + 13);
      if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v6 + v7 + 40)) )
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v13,
          a2);
        Spectre::Engine::ShaderPropertyBlock::AttachDevice(v8);
      }
      if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v6 + v7 + 24)) )
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v14,
          a2);
        Spectre::Engine::ShaderPropertyBlock::AttachDevice(v9);
      }
      if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v6 + v7 + 56)) )
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v15,
          a2);
        Spectre::Engine::ShaderPropertyBlock::AttachDevice(v10);
      }
      if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(v6 + v7 + 72)) )
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v16,
          a2);
        Spectre::Engine::ShaderPropertyBlock::AttachDevice(v11);
      }
      ++v5;
      v6 += 88LL;
    }
    while ( v5 < Spectre::Engine::MeshInstance::GetMaterialCount(this) );
  }
  v12 = (std::_Ref_count_base *)a2[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
