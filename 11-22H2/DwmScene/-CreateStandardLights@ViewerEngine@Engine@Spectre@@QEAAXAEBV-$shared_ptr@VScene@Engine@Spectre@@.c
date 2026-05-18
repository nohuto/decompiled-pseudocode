/*
 * XREFs of ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011E04 (--$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLight@Eng.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14 (-GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV-$basic_s.c)
 *     ?SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z @ 0x1800433A8 (-SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 *     ?AddLayer@Camera@Engine@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180059DAC (-AddLayer@Camera@Engine@Spectre@@QEAAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_.c)
 *     ?SetRenderPriority@Camera@Engine@Spectre@@QEAAXH@Z @ 0x18005D3C4 (-SetRenderPriority@Camera@Engine@Spectre@@QEAAXH@Z.c)
 *     ??$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x180061878 (--$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VAimer@Eng.c)
 *     ??$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180061948 (--$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68 (--$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLigh.c)
 *     ??$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180061B88 (--$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ??A?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@1@$$QEAH@Z @ 0x180064264 (--A-$map@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBH.c)
 *     ?SetOutputTextures@ShadowMapCamera@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z @ 0x18008EC70 (-SetOutputTextures@ShadowMapCamera@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std.c)
 *     ?SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z @ 0x18008ECAC (-SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z.c)
 *     ?ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090F2C (-ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=50
__int64 __fastcall Spectre::Engine::ViewerEngine::CreateStandardLights(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  int v12; // r15d
  char *v13; // r13
  char *v14; // rbx
  int v15; // r12d
  __int64 *v16; // rdi
  _QWORD *v17; // rsi
  signed __int64 v18; // r14
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rbx
  void **v23; // rax
  Spectre::Engine::Light *v24; // rbx
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  Spectre::Engine::Light *v27; // rbx
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  Spectre::Engine::Light *v30; // rbx
  __m128 v31; // xmm2
  __m128 v32; // xmm0
  __int64 *v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  __int64 v42; // rax
  Spectre::Engine::SceneNode *v43; // r14
  __int64 *v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rdi
  _QWORD *v49; // rbx
  __int64 UniqueID; // rax
  __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int128 v54; // [rsp+28h] [rbp-E0h] BYREF
  Spectre::Engine::Light **v55; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v56; // [rsp+40h] [rbp-C8h]
  Spectre::Engine::SceneNode *v57; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v58; // [rsp+50h] [rbp-B8h]
  Spectre::Engine::Light *v59; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v60; // [rsp+60h] [rbp-A8h]
  _QWORD v61[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h] BYREF
  std::_Ref_count_base *v63; // [rsp+A0h] [rbp-68h]
  Spectre::Engine::SceneNode *v64; // [rsp+B8h] [rbp-50h] BYREF
  std::_Ref_count_base *v65; // [rsp+C0h] [rbp-48h]
  Spectre::Engine::SceneNode *v66; // [rsp+D8h] [rbp-30h] BYREF
  std::_Ref_count_base *v67; // [rsp+E0h] [rbp-28h]
  _QWORD v68[4]; // [rsp+F8h] [rbp-10h] BYREF
  Spectre::Engine::Light *v69; // [rsp+118h] [rbp+10h] BYREF
  std::_Ref_count_base *v70; // [rsp+120h] [rbp+18h]
  Spectre::Engine::SceneNode *v71; // [rsp+138h] [rbp+30h] BYREF
  std::_Ref_count_base *v72; // [rsp+140h] [rbp+38h]
  Spectre::Engine::SceneNode *v73; // [rsp+158h] [rbp+50h] BYREF
  std::_Ref_count_base *v74; // [rsp+160h] [rbp+58h]
  Spectre::Engine::Light *v75; // [rsp+178h] [rbp+70h] BYREF
  std::_Ref_count_base *v76; // [rsp+180h] [rbp+78h]
  _QWORD v77[4]; // [rsp+198h] [rbp+90h] BYREF
  char v78[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v79[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v80[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  v55 = (Spectre::Engine::Light **)a2;
  std::wstring::wstring(v77, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  v3 = *a2;
  v57 = (Spectre::Engine::SceneNode *)v68;
  v4 = std::wstring::wstring(v68, (__int64)v77);
  std::string::string(&v69, (__int64)"Key");
  v5 = Spectre::Engine::SceneNode::GenerateUniqueID(&v69);
  Spectre::Engine::Scene::AddNode(v3, (__int64)v78, v5, (__int64)v4);
  std::string::_Tidy_deallocate((__int64)&v69);
  v6 = *a2;
  v57 = (Spectre::Engine::SceneNode *)&v59;
  v7 = std::wstring::wstring(&v59, (__int64)v77);
  std::string::string(&v75, (__int64)"Fill");
  v8 = Spectre::Engine::SceneNode::GenerateUniqueID(&v75);
  Spectre::Engine::Scene::AddNode(v6, (__int64)v79, v8, (__int64)v7);
  std::string::_Tidy_deallocate((__int64)&v75);
  v9 = *a2;
  v57 = (Spectre::Engine::SceneNode *)v68;
  v10 = std::wstring::wstring(v68, (__int64)v77);
  std::string::string(&v69, (__int64)"Back");
  v11 = Spectre::Engine::SceneNode::GenerateUniqueID(&v69);
  Spectre::Engine::Scene::AddNode(v9, (__int64)v80, v11, (__int64)v10);
  std::string::_Tidy_deallocate((__int64)&v69);
  v57 = (Spectre::Engine::SceneNode *)Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a2);
  v12 = 0;
  v13 = (char *)v57 + 8;
  v14 = (char *)v57 + 56;
  *(_QWORD *)&v54 = (char *)v57 + 56;
  v15 = 3;
  v16 = (__int64 *)((char *)v57 + 136);
  v17 = (_QWORD *)((char *)v57 + 8);
  v18 = v78 - (char *)v57;
  do
  {
    v19 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Light>(
            *(Spectre::Engine::SceneNode **)((char *)v16 + v18 - 136),
            &v69);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v17, v19);
    if ( v70 )
      std::_Ref_count_base::_Decref(v70);
    v20 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Aimer>(
            *(Spectre::Engine::SceneNode **)((char *)v16 + v18 - 136),
            &v75);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)((char *)v17 + v14 - v13), v20);
    if ( v76 )
      std::_Ref_count_base::_Decref(v76);
    v21 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::ShadowMapCamera>(
            *(Spectre::Engine::SceneNode **)((char *)v16 + v18 - 136),
            &v59);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v17 + 16, v21);
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
    Spectre::Engine::ShadowMapCamera::SetZDirection(*v16, 1LL);
    v22 = *v16;
    std::_Integral_to_string<char,int>((__int64)&v66, v12);
    v23 = (void **)std::operator+<char>(v68, (__int64)"ShadowMap", &v66);
    std::string::operator=((void **)(v22 + 24), v23);
    std::string::_Tidy_deallocate((__int64)v68);
    std::string::_Tidy_deallocate((__int64)&v66);
    Spectre::Engine::Camera::AddLayer(*v16, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
    Spectre::Engine::Camera::SetRenderPriority((Spectre::Engine::Camera *)*v16, v15);
    std::_Integral_to_string<char,int>((__int64)&v66, v12);
    std::operator+<char>(&v64, (__int64)"Global/ShadowBuffer", &v66);
    std::string::_Tidy_deallocate((__int64)&v66);
    std::_Integral_to_string<char,int>((__int64)&v73, v12);
    std::operator+<char>(&v71, (__int64)"Global/ColoredShadowBuffer", &v73);
    std::string::_Tidy_deallocate((__int64)&v73);
    Spectre::Engine::ShadowMapCamera::SetOutputTextures(*v16, &v64, &v71);
    std::string::_Tidy_deallocate((__int64)&v71);
    std::string::_Tidy_deallocate((__int64)&v64);
    ++v12;
    v17 += 2;
    --v15;
    v16 += 2;
    v14 = (char *)v54;
  }
  while ( v15 > 0 );
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v69, v13);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v75,
    (_QWORD *)v57 + 3);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v59,
    (_QWORD *)v57 + 5);
  std::string::string(&v66, (__int64)"Key");
  v24 = v69;
  std::string::operator=((void **)v69 + 3, (void **)&v66);
  std::string::_Tidy_deallocate((__int64)&v66);
  *((_BYTE *)v24 + 72) = 1;
  Spectre::Engine::Light::SetShadowEnabled(v24, 1);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v24 + 56, &v64);
  v25 = 0LL;
  v25.m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N1_7351067), (__m128)LODWORD(FLOAT_2_3317304)).m128_u64[0];
  *(_QWORD *)&v54 = 0LL;
  v26 = _mm_mul_ps(_mm_movelh_ps(v25, (__m128)LODWORD(FLOAT_N1_8716711)), (__m128)_xmm);
  v62 = v26.m128_u64[0];
  LODWORD(v63) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  Spectre::Engine::SceneNode::SetPosition(v64, &v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v24 + 56, &v64);
  v62 = Spectre::Utils::Math::Vector3::Up;
  LODWORD(v63) = 0;
  *(_QWORD *)&v54 = Spectre::Utils::Math::Vector3::Zero;
  DWORD2(v54) = 0;
  Spectre::Engine::SceneNode::LookAt(v64, (unsigned __int64 *)&v54, (__int64)&v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  *((_DWORD *)v24 + 26) = 1092370432;
  *((_DWORD *)v24 + 29) = 1028443341;
  std::string::string(&v66, (__int64)"Fill");
  v27 = v75;
  std::string::operator=((void **)v75 + 3, (void **)&v66);
  std::string::_Tidy_deallocate((__int64)&v66);
  *((_BYTE *)v27 + 72) = 1;
  Spectre::Engine::Light::SetShadowEnabled(v27, 1);
  *((_DWORD *)v27 + 22) = 1060487823;
  *((_DWORD *)v27 + 23) = 1061997773;
  *((_DWORD *)v27 + 24) = 1065151889;
  *((_DWORD *)v27 + 25) = 1065353216;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v27 + 56, &v64);
  v28 = 0LL;
  v28.m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_7512932), (__m128)LODWORD(FLOAT_2_2724638)).m128_u64[0];
  *(_QWORD *)&v54 = 0LL;
  v29 = _mm_mul_ps(_mm_movelh_ps(v28, (__m128)LODWORD(FLOAT_N2_5614212)), (__m128)_xmm);
  DWORD2(v54) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
  v62 = v29.m128_u64[0];
  LODWORD(v63) = DWORD2(v54);
  Spectre::Engine::SceneNode::SetPosition(v64, &v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v27 + 56, &v64);
  v62 = Spectre::Utils::Math::Vector3::Up;
  LODWORD(v63) = 0;
  *(_QWORD *)&v54 = Spectre::Utils::Math::Vector3::Zero;
  DWORD2(v54) = 0;
  Spectre::Engine::SceneNode::LookAt(v64, (unsigned __int64 *)&v54, (__int64)&v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  *((_DWORD *)v27 + 26) = 1086849024;
  *((_DWORD *)v27 + 29) = 1036831949;
  std::string::string(&v66, (__int64)"Back");
  v30 = v59;
  std::string::operator=((void **)v59 + 3, (void **)&v66);
  std::string::_Tidy_deallocate((__int64)&v66);
  *((_BYTE *)v30 + 72) = 1;
  Spectre::Engine::Light::SetShadowEnabled(v30, 1);
  *((_DWORD *)v30 + 22) = 1063144775;
  *((_DWORD *)v30 + 23) = 1060773036;
  *((_DWORD *)v30 + 24) = 1065353216;
  *((_DWORD *)v30 + 25) = 1065353216;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v30 + 56, &v64);
  v31 = 0LL;
  v31.m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_6772946), (__m128)LODWORD(FLOAT_2_5802944)).m128_u64[0];
  *(_QWORD *)&v54 = 0LL;
  v32 = _mm_mul_ps(_mm_movelh_ps(v31, (__m128)LODWORD(FLOAT_1_5453174)), (__m128)_xmm);
  DWORD2(v54) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
  v62 = v32.m128_u64[0];
  LODWORD(v63) = DWORD2(v54);
  Spectre::Engine::SceneNode::SetPosition(v64, &v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v30 + 56, &v64);
  v62 = Spectre::Utils::Math::Vector3::Up;
  LODWORD(v63) = 0;
  *(_QWORD *)&v54 = Spectre::Utils::Math::Vector3::Zero;
  DWORD2(v54) = 0;
  Spectre::Engine::SceneNode::LookAt(v64, (unsigned __int64 *)&v54, (__int64)&v62);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  *((_DWORD *)v30 + 26) = 1078460416;
  *((_DWORD *)v30 + 29) = 1045220557;
  v33 = (__int64 *)v55;
  v34 = (__int64)*v55;
  v55 = (Spectre::Engine::Light **)v68;
  v35 = std::wstring::wstring(v68, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  std::string::string(&v73, (__int64)"LightProbe0");
  v36 = Spectre::Engine::SceneNode::GenerateUniqueID(&v73);
  Spectre::Engine::Scene::AddNode(v34, (__int64)&v66, v36, (__int64)v35);
  std::string::_Tidy_deallocate((__int64)&v73);
  v37 = *v33;
  v55 = &v64;
  v38 = std::wstring::wstring(&v64, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  std::string::string(&v71, (__int64)"LightProbe1");
  v39 = Spectre::Engine::SceneNode::GenerateUniqueID(&v71);
  Spectre::Engine::Scene::AddNode(v37, (__int64)&v73, v39, (__int64)v38);
  std::string::_Tidy_deallocate((__int64)&v71);
  v40 = *v33;
  v55 = (Spectre::Engine::Light **)v68;
  v41 = std::wstring::wstring(v68, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  std::string::string(&v62, (__int64)"LightProbe2");
  v42 = Spectre::Engine::SceneNode::GenerateUniqueID(&v62);
  Spectre::Engine::Scene::AddNode(v40, (__int64)&v71, v42, (__int64)v41);
  std::string::_Tidy_deallocate((__int64)&v62);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::LightProbe>(v66, &v64);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::LightProbe>(v73, &v55);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::LightProbe>(v71, &v62);
  v54 = _xmm;
  Spectre::Engine::LightProbe::SetAmbient();
  v54 = _xmm;
  Spectre::Engine::LightProbe::SetAmbient();
  v54 = _xmm;
  Spectre::Engine::LightProbe::SetAmbient();
  v43 = v57;
  v44 = (__int64 *)((char *)v57 + 104);
  LODWORD(v54) = 0;
  v45 = (__int64 *)std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::operator[](
                     (__int64 *)v57 + 13,
                     (int *)&v54);
  std::shared_ptr<Spectre::Engine::Light>::operator=(v45, &v64);
  LODWORD(v54) = 1;
  v46 = (__int64 *)std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::operator[](v44, (int *)&v54);
  std::shared_ptr<Spectre::Engine::Light>::operator=(v46, &v55);
  LODWORD(v54) = 2;
  v47 = (__int64 *)std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::operator[](v44, (int *)&v54);
  std::shared_ptr<Spectre::Engine::Light>::operator=(v47, &v62);
  v48 = *v33;
  v57 = (Spectre::Engine::SceneNode *)v61;
  v49 = std::wstring::wstring(v61, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  std::string::string(v68, (__int64)"ColorTransform");
  UniqueID = Spectre::Engine::SceneNode::GenerateUniqueID(v68);
  Spectre::Engine::Scene::AddNode(v48, (__int64)&v57, UniqueID, (__int64)v49);
  std::string::_Tidy_deallocate((__int64)v68);
  v51 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::ColorTransform>(v57, &v54);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)v43 + 15, v51);
  if ( *((_QWORD *)&v54 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v54 + 1));
  Spectre::Engine::ColorTransform::ResetToSize(*((Spectre::Engine::ColorTransform **)v43 + 15), v52);
  if ( v58 )
    std::_Ref_count_base::_Decref(v58);
  if ( v63 )
    std::_Ref_count_base::_Decref(v63);
  if ( v56 )
    std::_Ref_count_base::_Decref(v56);
  if ( v65 )
    std::_Ref_count_base::_Decref(v65);
  if ( v72 )
    std::_Ref_count_base::_Decref(v72);
  if ( v74 )
    std::_Ref_count_base::_Decref(v74);
  if ( v67 )
    std::_Ref_count_base::_Decref(v67);
  if ( v60 )
    std::_Ref_count_base::_Decref(v60);
  if ( v76 )
    std::_Ref_count_base::_Decref(v76);
  if ( v70 )
    std::_Ref_count_base::_Decref(v70);
  `eh vector destructor iterator'(
    v78,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  return std::wstring::_Tidy_deallocate((__int64)v77);
}
