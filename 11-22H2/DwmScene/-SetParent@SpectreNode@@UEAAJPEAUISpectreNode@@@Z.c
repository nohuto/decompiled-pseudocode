/*
 * XREFs of ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetDefaultScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180034098 (-GetDefaultScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SpectreNode::SetParent(SpectreNode *this, struct ISpectreNode *a2)
{
  SpectreRenderer *v3; // rsi
  Spectre::Engine::SceneNode **v4; // rdi
  __int64 v5; // r14
  _QWORD *v6; // rax
  char v7; // bl
  std::_Ref_count_base *v8; // rbx
  _QWORD *v9; // rax
  __int64 *RootNode; // rax
  __int64 *Scene; // rax
  _QWORD *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  std::_Ref_count_base *v23; // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+60h] [rbp-19h] BYREF
  std::_Ref_count_base *v25; // [rsp+68h] [rbp-11h]
  _QWORD v26[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  std::_Ref_count_base *v28; // [rsp+88h] [rbp+Fh]
  _QWORD v29[4]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v30[16]; // [rsp+B0h] [rbp+37h] BYREF

  v3 = SpectreRenderer::s_pInstance;
  v4 = (Spectre::Engine::SceneNode **)((char *)this + 32);
  Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 4), &v24);
  v5 = v24;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v24 + 16));
  Spectre::Engine::SceneNode::GetParent(*v4, &v27);
  if ( a2 )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v18,
           (_QWORD *)a2 + 4);
    v7 = 1;
  }
  else
  {
    *(_OWORD *)v17 = 0LL;
    v6 = v17;
    v7 = 2;
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v20, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v17[1] )
      std::_Ref_count_base::_Decref(v17[1]);
  }
  if ( (v7 & 1) != 0 && v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v27, &v20) )
  {
    *(_OWORD *)v17 = 0LL;
    if ( std::operator==<Spectre::Engine::Scene>(&v20) )
    {
      Spectre::Engine::Engine::GetDefaultScene(*((_QWORD *)v3 + 7), &v18);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v17, &v18);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      v8 = v17[0];
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((std::_Ref_count_base *)((char *)v17[0] + 16));
      v9 = std::wstring::wstring(v29, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
      RootNode = (__int64 *)Spectre::Engine::Scene::GetRootNode(v8, &v18, v9);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v20, RootNode);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v22);
    }
    else
    {
      Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene(v20, &v22);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v17, Scene);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      v8 = v17[0];
    }
    if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v24, v17) )
    {
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((std::_Ref_count_base *)((char *)v8 + 16));
      v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v22,
              &v20);
      Spectre::Engine::SceneNode::Clone(v13, &v18, 131075LL, v12);
      v14 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v26,
              v4);
      Spectre::Engine::Scene::RemoveNode(v5, v14);
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v4, &v18);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v29);
    }
    else
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v29,
        &v20);
      v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v26,
              v4);
      Spectre::Engine::Scene::SetNodeParent(v5, v15);
    }
    if ( v17[1] )
      std::_Ref_count_base::_Decref(v17[1]);
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v30);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  return 0LL;
}
