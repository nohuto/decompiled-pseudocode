/*
 * XREFs of ?Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18004B964 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::MeshInstance::Update(
        Spectre::Engine::MeshInstance *this,
        const struct Spectre::Engine::FrameData *a2)
{
  __int64 *v3; // r9
  _QWORD *v4; // rsi
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rdi
  std::_Ref_count_base *v7; // rbx
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, _QWORD *); // r8
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-8h]

  Spectre::Engine::MeshInstance::GetMaterial((__int64)this, (__int64)&v10);
  if ( std::operator!=<Spectre::Engine::Scene>(&v10) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v13);
    v3 = (__int64 *)*((_QWORD *)this + 13);
    v4 = v3 + 9;
    if ( v3[9] )
    {
      v5 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
      if ( v5 && std::_Ref_count_base::_Incref_nz(v5) )
      {
        v6 = *((_QWORD *)this + 17);
        v7 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
      }
      else
      {
        v7 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
      {
        Spectre::Engine::Material::SetOption(*v3, (__int64)&Spectre::Engine::ShaderConstants::kOption_Skinning, 1);
        v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
               &v12,
               v4);
        v9(v6, v8);
      }
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
