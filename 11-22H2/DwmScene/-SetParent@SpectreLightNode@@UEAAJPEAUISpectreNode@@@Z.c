/*
 * XREFs of ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??$GetComponents@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180011F38 (--$GetComponents@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VLi.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?FindWorld@SpectreRenderer@@QEBAPEAVSpectreWorld@@PEAVSceneNode@Engine@Spectre@@@Z @ 0x180018900 (-FindWorld@SpectreRenderer@@QEBAPEAVSpectreWorld@@PEAVSceneNode@Engine@Spectre@@@Z.c)
 *     ?AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z @ 0x18001BB00 (-AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?AddDiffuseSHs@SpectreWorld@@QEAAXQEBMM@Z @ 0x18001BC24 (-AddDiffuseSHs@SpectreWorld@@QEAAXQEBMM@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetDefaultScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180034098 (-GetDefaultScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SpectreLightNode::SetParent(SpectreLightNode *this, struct ISpectreNode *a2)
{
  SpectreRenderer *v4; // r13
  __int64 v5; // r12
  char v6; // si
  _QWORD *v7; // rax
  char v8; // di
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rdi
  _QWORD *v12; // rax
  __int64 *RootNode; // rax
  struct Spectre::Engine::SceneNode *v14; // r15
  __int64 *Scene; // rax
  _QWORD *i; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r10
  _QWORD *v19; // rax
  _QWORD *j; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  SpectreWorld *World; // rax
  float v24; // xmm2_4
  SpectreWorld *v25; // rax
  float v26; // xmm2_4
  std::_Ref_count_base *v28[2]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v30; // [rsp+40h] [rbp-61h]
  struct Spectre::Engine::SceneNode *v31; // [rsp+48h] [rbp-59h] BYREF
  std::_Ref_count_base *v32; // [rsp+50h] [rbp-51h]
  __int64 v33; // [rsp+58h] [rbp-49h] BYREF
  std::_Ref_count_base *v34; // [rsp+60h] [rbp-41h]
  _QWORD v35[3]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v36[4]; // [rsp+80h] [rbp-21h] BYREF
  struct Spectre::Engine::SceneNode *v37; // [rsp+A0h] [rbp-1h] BYREF
  std::_Ref_count_base *v38; // [rsp+A8h] [rbp+7h]
  __int64 v39; // [rsp+B0h] [rbp+Fh] BYREF
  std::_Ref_count_base *v40; // [rsp+B8h] [rbp+17h]
  _BYTE v41[24]; // [rsp+C0h] [rbp+1Fh] BYREF

  v4 = SpectreRenderer::s_pInstance;
  Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 2), &v39);
  v5 = v39;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v39 + 16));
  Spectre::Engine::SceneNode::GetParent(*((Spectre::Engine::SceneNode **)this + 2), &v37);
  v6 = 1;
  if ( a2 )
  {
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v29,
           (_QWORD *)a2 + 4);
    v8 = 1;
  }
  else
  {
    *(_OWORD *)v28 = 0LL;
    v7 = v28;
    v8 = 2;
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v31, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v28[1] )
      std::_Ref_count_base::_Decref(v28[1]);
  }
  if ( (v8 & 1) != 0 && v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v37, &v31) )
  {
    *(_OWORD *)v28 = 0LL;
    if ( std::operator==<Spectre::Engine::Scene>(&v31) )
    {
      v9 = *((_QWORD *)this + 23);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 104) = *((_DWORD *)this + 50);
        *((_QWORD *)this + 23) = 0LL;
        v10 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = 0LL;
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
      }
      Spectre::Engine::Engine::GetDefaultScene(*((_QWORD *)v4 + 7), &v29);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v28, &v29);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      v11 = v28[0];
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((std::_Ref_count_base *)((char *)v28[0] + 16));
      v12 = std::wstring::wstring(v36, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
      RootNode = (__int64 *)Spectre::Engine::Scene::GetRootNode(v11, &v29, v12);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v31, RootNode);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v33);
      v14 = v31;
    }
    else
    {
      v14 = v31;
      Scene = (__int64 *)Spectre::Engine::SceneNode::GetScene((__int64)v31, &v33);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v28, Scene);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      v6 = 0;
      v11 = v28[0];
    }
    if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v39, v28) )
    {
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((std::_Ref_count_base *)((char *)v11 + 16));
      if ( (*((_DWORD *)this + 12) & 0xFFFFFFFB) != 0 && !v6 )
      {
        Spectre::Engine::Scene::GetComponents<Spectre::Engine::Light>((__int64)v11, (__int64)v35);
        for ( i = (_QWORD *)v35[0]; i != (_QWORD *)v35[1]; i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 23, i);
            break;
          }
        }
        std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy(v35);
      }
      v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v33,
              &v31);
      Spectre::Engine::SceneNode::Clone(v18, &v29, 131075LL, v17);
      v19 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v35,
              (_QWORD *)this + 2);
      Spectre::Engine::Scene::RemoveNode(v5, v19);
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 2, &v29);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v36);
    }
    else
    {
      if ( (*((_DWORD *)this + 12) & 0xFFFFFFFB) != 0 && !v6 )
      {
        Spectre::Engine::Scene::GetComponents<Spectre::Engine::Light>(v5, (__int64)v36);
        for ( j = (_QWORD *)v36[0]; j != (_QWORD *)v36[1]; j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 23, j);
            break;
          }
        }
        std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy(v36);
      }
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v36,
        &v31);
      v21 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v35,
              (_QWORD *)this + 2);
      Spectre::Engine::Scene::SetNodeParent(v5, v21);
    }
    v22 = *((_QWORD *)this + 23);
    if ( v22 )
      *(_DWORD *)(v22 + 104) = 0;
    if ( (*((_DWORD *)this + 12) & 0xFFFFFFFB) == 0 )
    {
      if ( v37 )
      {
        World = SpectreRenderer::FindWorld(v4, v37);
        if ( World )
        {
          LODWORD(v24) = *((_DWORD *)this + 17) ^ _xmm;
          if ( *((_DWORD *)this + 12) )
            SpectreWorld::AddDiffuseSHs(World, (const float *const)this + 18, v24);
          else
            SpectreWorld::AddAmbient(World, (const struct _D3DCOLORVALUE *)((char *)this + 52), v24);
        }
      }
      if ( v14 )
      {
        v25 = SpectreRenderer::FindWorld(v4, v14);
        if ( v25 )
        {
          v26 = *((float *)this + 17);
          if ( *((_DWORD *)this + 12) )
            SpectreWorld::AddDiffuseSHs(v25, (const float *const)this + 18, v26);
          else
            SpectreWorld::AddAmbient(v25, (const struct _D3DCOLORVALUE *)((char *)this + 52), v26);
        }
      }
    }
    if ( v28[1] )
      std::_Ref_count_base::_Decref(v28[1]);
  }
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v41);
  if ( v40 )
    std::_Ref_count_base::_Decref(v40);
  return 0LL;
}
