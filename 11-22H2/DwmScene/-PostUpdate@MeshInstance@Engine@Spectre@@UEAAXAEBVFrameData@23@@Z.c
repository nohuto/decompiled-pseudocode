/*
 * XREFs of ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348 (-SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ?GetSceneAttribute@Material@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z @ 0x1800443E8 (-GetSceneAttribute@Material@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18004B964 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ.c)
 *     ?GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ @ 0x18004BA58 (-GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::MeshInstance::PostUpdate(
        Spectre::Engine::MeshInstance *this,
        const struct Spectre::Engine::FrameData *a2)
{
  unsigned __int64 v4; // rsi
  char v5; // bp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *Texture; // rax
  _QWORD *Extension; // rax
  char SceneAttribute; // bl
  __int64 v12; // rcx
  char v13; // si
  Spectre::Engine::SceneNode *v14; // rdi
  char v15; // r9
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-20h]
  Spectre::Engine::SceneNode *v18; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 1;
  if ( Spectre::Engine::MeshInstance::GetMaterialCount(this) )
  {
    v6 = 0LL;
    do
    {
      v7 = *((_QWORD *)this + 13);
      v8 = *(_QWORD *)(v6 + v7);
      if ( v8 && *(_BYTE *)(v6 + v7 + 16) )
      {
        Texture = (_QWORD *)Spectre::Engine::FrameBuffer::GetTexture(v8, &v16);
        Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(*Texture, &v18);
        (*(void (__fastcall **)(_QWORD, Spectre::Engine::MeshInstance *, unsigned __int64, const struct Spectre::Engine::FrameData *))(*(_QWORD *)*Extension + 40LL))(
          *Extension,
          this,
          v4,
          a2);
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
      }
      ++v4;
      v6 += 88LL;
    }
    while ( v4 < Spectre::Engine::MeshInstance::GetMaterialCount(this) );
  }
  Spectre::Engine::MeshInstance::GetMaterial((__int64)this, (__int64)&v16);
  if ( std::operator!=<Spectre::Engine::Scene>(&v16) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v18);
    SceneAttribute = Spectre::Engine::Material::GetSceneAttribute(v16, 9u);
    v13 = Spectre::Engine::Material::GetSceneAttribute(v12, 8u);
    v14 = v18;
    Spectre::Engine::SceneNode::SetAttribute(v18, v15, v13);
    Spectre::Engine::SceneNode::SetAttribute(v14, 9, SceneAttribute);
    if ( !SceneAttribute && v13 )
      v5 = 0;
    Spectre::Engine::SceneNode::SetAttribute(v14, 16, v5);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
  }
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
