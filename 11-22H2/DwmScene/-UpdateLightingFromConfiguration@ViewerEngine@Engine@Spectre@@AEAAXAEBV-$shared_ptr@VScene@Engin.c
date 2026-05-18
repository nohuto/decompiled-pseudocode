/*
 * XREFs of ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x180024ADC (--$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VCamera@E.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetIntensityMode@Light@Engine@Spectre@@QEAAXW4EPhotometricQuantity@23@@Z @ 0x18004338C (-SetIntensityMode@Light@Engine@Spectre@@QEAAXW4EPhotometricQuantity@23@@Z.c)
 *     ?SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z @ 0x1800433A8 (-SetShadowEnabled@Light@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetType@Light@Engine@Spectre@@QEAAXW4Type@123@@Z @ 0x1800433B4 (-SetType@Light@Engine@Spectre@@QEAAXW4Type@123@@Z.c)
 *     ?NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005BE28 (-NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ViewerEngine::UpdateLightingFromConfiguration(
        Spectre::Engine::Engine *a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r15
  _UNKNOWN **v6; // r12
  std::_Ref_count_base **v7; // r14
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rsi
  __int64 v10; // r8
  char v11; // al
  double v12; // xmm0_8
  int v13; // xmm11_4
  double v14; // xmm0_8
  int v15; // xmm12_4
  double v16; // xmm0_8
  int v17; // xmm13_4
  double v18; // xmm0_8
  int v19; // xmm14_4
  double v20; // xmm0_8
  int v21; // xmm15_4
  double v22; // xmm0_8
  double v23; // xmm0_8
  int v24; // xmm7_4
  double v25; // xmm0_8
  int v26; // xmm8_4
  double v27; // xmm0_8
  int v28; // xmm9_4
  int v29; // eax
  double v30; // xmm0_8
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rbx
  float v34; // xmm0_4
  float *v35; // rcx
  __int64 v36; // rcx
  float *v37; // rcx
  __int64 v38; // rcx
  struct Spectre::Utils::IConfigurationManager *Configuration; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+38h] [rbp-C8h]
  float v43; // [rsp+3Ch] [rbp-C4h]
  int v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh]
  int v46; // [rsp+48h] [rbp-B8h]
  float v47; // [rsp+4Ch] [rbp-B4h]
  std::_Ref_count_base *v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v50; // [rsp+68h] [rbp-98h]
  _QWORD v51[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v52; // [rsp+80h] [rbp-80h] BYREF
  Spectre::Engine::SceneNode *v53; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v54; // [rsp+98h] [rbp-68h]
  Spectre::Engine::Camera *v55; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[23]; // [rsp+C0h] [rbp-40h] BYREF
  char v61; // [rsp+1C8h] [rbp+C8h]
  char v62; // [rsp+1D0h] [rbp+D0h]
  char v63; // [rsp+1D8h] [rbp+D8h]

  v3 = (__int64)a1;
  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*a2 + 112));
  v4 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a2);
  v5 = (_QWORD *)(v4 + 8);
  v6 = &off_1801C89D0;
  v7 = (std::_Ref_count_base **)(v4 + 64);
  v41 = 3LL;
  do
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v49, v5);
    if ( *v7 )
      _InterlockedIncrement((volatile signed __int32 *)*v7 + 2);
    v8 = (__int64)*(v7 - 1);
    v51[0] = v8;
    v9 = *v7;
    v51[1] = *v7;
    if ( !std::operator==<Spectre::Engine::Scene>(&v49) && !std::operator==<Spectre::Engine::Scene>(v51) )
    {
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        *(v6 - 2),
        0LL);
      v62 = v11;
      v12 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              *(v6 - 1));
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              *v6);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[1]);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[2]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[3]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[4]);
      v42 = LODWORD(v22);
      v23 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[5]);
      v24 = LODWORD(v23);
      v25 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[6]);
      v26 = LODWORD(v25);
      v27 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[7]);
      v28 = LODWORD(v27);
      v43 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                            + 88LL))(
              Configuration,
              v6[8]);
      v44 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
              Configuration,
              v6[9],
              0LL);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 72LL))(
        Configuration,
        v6[10],
        0LL);
      v45 = v29;
      v30 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v6[11]);
      v46 = LODWORD(v30);
      v47 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                            + 88LL))(
              Configuration,
              v6[12]);
      v61 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
              Configuration,
              v6[13],
              0LL);
      v63 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
              Configuration,
              v6[14],
              0LL);
      v40 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
              Configuration,
              v6[15],
              0LL);
      v31 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v59,
              a2);
      Spectre::Engine::Engine::GetCamera(v3, &v57, v32, v31);
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v57 + 56, &v52);
      *(__m128i *)v48 = _mm_load_si128(&v52);
      v33 = _mm_srli_si128(*(__m128i *)v48, 8).m128i_u64[0];
      v52 = 0LL;
      std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)(v8 + 96), v48);
      if ( v33 )
        std::_Ref_count_base::_Decref(v48[1]);
      if ( v61 )
      {
        v34 = FLOAT_N1_5707964;
        v40 = 1;
      }
      else
      {
        v34 = 0.0;
      }
      *(_DWORD *)(v8 + 88) = v40;
      *(float *)(v8 + 136) = v34;
      *(_DWORD *)(v8 + 112) = v13;
      *(_DWORD *)(v8 + 116) = v15;
      *(_DWORD *)(v8 + 120) = v17;
      *(_DWORD *)(v8 + 124) = v19;
      *(_DWORD *)(v8 + 128) = v21;
      *(_DWORD *)(v8 + 132) = v42;
      *(_BYTE *)(v8 + 72) = v62;
      *(_DWORD *)(v8 + 152) = v24;
      *(_DWORD *)(v8 + 156) = v26;
      *(_DWORD *)(v8 + 160) = v28;
      *(_DWORD *)(v8 + 164) = 1065353216;
      v35 = (float *)v49;
      *(_BYTE *)(v49 + 72) = v62;
      *((_DWORD *)v35 + 22) = v24;
      *((_DWORD *)v35 + 23) = v26;
      *((_DWORD *)v35 + 24) = v28;
      v35[25] = 1.0;
      v35[26] = v43;
      Spectre::Engine::Light::SetIntensityMode((__int64)v35, v44);
      Spectre::Engine::Light::SetType(v36, v45);
      *((_DWORD *)v37 + 29) = v46;
      v37[28] = v47;
      Spectre::Engine::Light::SetShadowEnabled((Spectre::Engine::Light *)v37, v63);
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v38 + 56, &v53);
      Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Camera>(v53, &v55);
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      if ( v55 )
        Spectre::Engine::Camera::NotifyNodeTransformChanged(v55);
      if ( v56 )
        std::_Ref_count_base::_Decref(v56);
      if ( v58 )
        std::_Ref_count_base::_Decref(v58);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      if ( v50 )
        std::_Ref_count_base::_Decref(v50);
      v3 = (__int64)a1;
      goto LABEL_24;
    }
    if ( v9 )
    {
      std::_Ref_count_base::_Decref(v9);
      v10 = v41;
    }
    if ( v50 )
    {
      std::_Ref_count_base::_Decref(v50);
LABEL_24:
      v10 = v41;
    }
    v5 += 2;
    v7 += 2;
    v6 += 18;
    v41 = v10 - 1;
  }
  while ( v10 != 1 );
}
