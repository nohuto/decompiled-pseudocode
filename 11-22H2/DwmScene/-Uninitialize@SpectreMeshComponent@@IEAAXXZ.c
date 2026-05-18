/*
 * XREFs of ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790
 * Callers:
 *     ?RemoveComponent@SpectreNode@@UEAAXAEBU_GUID@@@Z @ 0x180014FB0 (-RemoveComponent@SpectreNode@@UEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003D11C (-RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall SpectreMeshComponent::Uninitialize(SpectreMeshComponent *this)
{
  __int64 v1; // rax
  __int64 Scene; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  Spectre::Engine::SceneNode *v5; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-48h]
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+58h] [rbp-18h]
  _BYTE v12[16]; // [rsp+60h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(SpectreMeshComponent *))(*(_QWORD *)this + 24LL))(this);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v5,
    (_QWORD *)(v1 + 32));
  Scene = Spectre::Engine::SceneNode::GetScene((__int64)v5, &v8);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*(_QWORD *)Scene + 16LL));
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v3 = Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(v5, &v10);
  v7 = 0LL;
  v7 = *(_OWORD *)v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  Spectre::Engine::SceneNode::RemoveComponent(v5, &v7);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v4 = Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(v5, &v10);
  v7 = 0LL;
  v7 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  Spectre::Engine::SceneNode::RemoveComponent(v5, &v7);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v12);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
