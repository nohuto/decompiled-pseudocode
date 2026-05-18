/*
 * XREFs of ?Initialize@SpectreMeshComponent@@IEAAXXZ @ 0x1800143FC
 * Callers:
 *     ?AddComponent@SpectreNode@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014C10 (-AddComponent@SpectreNode@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$AddComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013C74 (--$AddComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VBounds@E.c)
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 *     ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620 (-SetMesh@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SpectreMeshComponent::Initialize(SpectreMeshComponent *this)
{
  __int64 v1; // rax
  __int64 Scene; // rax
  _QWORD *v3; // rax
  Spectre::Engine::SceneNode *v4; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+48h] [rbp-18h]
  _BYTE v10[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(SpectreMeshComponent *))(*(_QWORD *)this + 24LL))(this);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v4,
    (_QWORD *)(v1 + 32));
  Scene = Spectre::Engine::SceneNode::GetScene((__int64)v4, &v8);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*(_QWORD *)Scene + 16LL));
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::MeshInstance>(v4, &v6);
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v8,
         (_QWORD *)SpectreRenderer::s_pInstance + 12);
  Spectre::Engine::MeshInstance::SetMesh(v6, v3);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Bounds>(v4, &v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v10);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
