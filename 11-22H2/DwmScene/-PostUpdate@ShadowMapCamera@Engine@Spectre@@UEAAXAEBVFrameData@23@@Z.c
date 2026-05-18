/*
 * XREFs of ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?GetAttribute@SceneNode@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z @ 0x18003BF50 (-GetAttribute@SceneNode@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z.c)
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV45@@Z @ 0x18003C170 (-GetNextInTree@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AE.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 *     ?IsVisible@SceneLayer@Engine@Spectre@@QEBA_NXZ @ 0x180041810 (-IsVisible@SceneLayer@Engine@Spectre@@QEBA_NXZ.c)
 *     ?Transform@BoundingBox@DirectX@@QEBQXAEAU12@UXMMATRIX@2@@Z @ 0x1800420B0 (-Transform@BoundingBox@DirectX@@QEBQXAEAU12@UXMMATRIX@2@@Z.c)
 *     ?GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z @ 0x18004A35C (-GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z.c)
 *     ?GetLayers@Camera@Engine@Spectre@@QEBAAEBV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18005BA88 (-GetLayers@Camera@Engine@Spectre@@QEBAAEBV-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$a.c)
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 *     ?SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D18C (-SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D268 (-SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::ShadowMapCamera::PostUpdate(
        Spectre::Engine::ShadowMapCamera *this,
        const struct Spectre::Engine::FrameData *a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  char v5; // r14
  __int64 *Layers; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  std::_Ref_count_base *v10; // rax
  __int64 v11; // rcx
  Spectre::Engine::SceneNode *v12; // rbx
  _OWORD *TransformMatrix; // rax
  __int64 *v14; // r8
  __int64 *NextInTree; // rax
  const struct Spectre::Engine::SceneNode *v16; // [rsp+28h] [rbp-E0h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-D8h]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v20; // [rsp+50h] [rbp-B8h]
  Spectre::Engine::SceneNode *v21; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp-A8h]
  Spectre::Engine::SceneLayer *v23; // [rsp+68h] [rbp-A0h] BYREF
  std::_Ref_count_base *v24[3]; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+8Ch] [rbp-7Ch]
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  std::_Ref_count_base *v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+C0h] [rbp-48h] BYREF
  std::_Ref_count_base *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h] BYREF
  std::_Ref_count_base *v34; // [rsp+D8h] [rbp-30h]
  __int128 v35; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-18h]
  _OWORD v37[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v38; // [rsp+138h] [rbp+30h] BYREF
  __int128 v39; // [rsp+158h] [rbp+50h]
  __int128 v40; // [rsp+168h] [rbp+60h]
  __int128 v41[4]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v42[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v43[96]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v44; // [rsp+238h] [rbp+130h] BYREF

  if ( *((_BYTE *)this + 1953) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v29);
    v3 = FLOAT_3_4028235e38;
    v4 = FLOAT_N3_4028235e38;
    v5 = 0;
    Layers = (__int64 *)Spectre::Engine::Camera::GetLayers((__int64)this);
    v7 = *Layers;
    v8 = Layers[1];
    if ( *Layers != v8 )
    {
      do
      {
        std::wstring::wstring(v42, v7);
        v9 = *(_QWORD *)Spectre::Engine::SceneNode::GetScene(v29, &v31);
        v10 = (std::_Ref_count_base *)std::wstring::wstring(&v24[1], (__int64)v42);
        Spectre::Engine::Scene::GetLayer(v9, &v23, v10);
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        if ( Spectre::Engine::SceneLayer::IsVisible(v23) )
        {
          Spectre::Utils::IConfigurationManager::GetParent(v11, &v21);
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v16,
            &v21);
          while ( std::operator!=<Spectre::Engine::Scene>(&v16) )
          {
            v12 = v16;
            if ( *((_DWORD *)this + 490) == 1 || Spectre::Engine::SceneNode::GetAttribute(v16) )
            {
              Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(v12, &v19);
              Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(v12, &v27);
              if ( std::operator!=<Spectre::Engine::Scene>(&v19) && std::operator!=<Spectre::Engine::Scene>(&v27) )
              {
                v35 = *(_OWORD *)(v19 + 88);
                v36 = *(_QWORD *)(v19 + 104);
                *(_OWORD *)&v24[1] = _xmm;
                v25 = 1065353216;
                v26 = 1065353216;
                TransformMatrix = (_OWORD *)Spectre::Engine::Camera::GetTransformMatrix(this, 0, 1);
                v37[0] = *TransformMatrix;
                v37[1] = TransformMatrix[1];
                v37[2] = TransformMatrix[2];
                v37[3] = TransformMatrix[3];
                Spectre::Engine::SceneNode::GetWorldTransformMatrix((__int64)v12, v41);
                Spectre::Utils::Math::operator*((__int64)&v38, v41, v37);
                DirectX::BoundingBox::Transform(
                  (unsigned __int64 *)&v35,
                  (__int64)&v24[1],
                  *(double *)&v39,
                  *(double *)&v40);
                DirectX::BoundingBox::GetCorners((DirectX::BoundingBox *)&v24[1], (struct DirectX::XMFLOAT3 *)v43);
                v14 = (__int64 *)v43;
                do
                {
                  LODWORD(v18) = *((_DWORD *)v14 + 2);
                  if ( COERCE_FLOAT(v18 ^ _xmm) > v4 )
                    LODWORD(v4) = v18 ^ _xmm;
                  if ( v3 > COERCE_FLOAT(v18 ^ _xmm) )
                    LODWORD(v3) = v18 ^ _xmm;
                  v14 = (__int64 *)((char *)v14 + 12);
                }
                while ( v14 != &v44 );
                v5 = 1;
              }
              if ( v28 )
                std::_Ref_count_base::_Decref(v28);
              if ( v20 )
                std::_Ref_count_base::_Decref(v20);
            }
            NextInTree = Spectre::Engine::SceneNode::GetNextInTree(v21, &v33, &v16);
            std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v16, NextInTree);
            if ( v34 )
              std::_Ref_count_base::_Decref(v34);
          }
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
          if ( v22 )
            std::_Ref_count_base::_Decref(v22);
        }
        if ( v24[0] )
          std::_Ref_count_base::_Decref(v24[0]);
        std::wstring::_Tidy_deallocate((__int64)v42);
        v7 += 32LL;
      }
      while ( v7 != v8 );
      if ( v5 )
      {
        if ( (unsigned int)(*((_DWORD *)this + 79) - 1) <= 1 )
        {
          v3 = fmaxf(0.001, v3);
          v4 = fmaxf(0.001, v4);
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - v3) & _xmm) > 0.0000099999997 )
        {
          Spectre::Engine::Camera::SetNearClip(this, v3);
          Spectre::Engine::Camera::SetFarClip(this, v4);
        }
      }
    }
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
  }
}
