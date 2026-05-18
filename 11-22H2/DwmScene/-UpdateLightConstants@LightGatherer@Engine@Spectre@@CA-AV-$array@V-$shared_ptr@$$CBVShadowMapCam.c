/*
 * XREFs of ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764
 * Callers:
 *     ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544 (-Gather@LightGatherer@Engine@Spectre@@SAXAEBV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@.c)
 * Callees:
 *     cosf @ 0x18000C008 (cosf.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0Matrix@Math@Utils@Spectre@@QEAA@AEBUVector4@123@000@Z @ 0x18003AF6C (--0Matrix@Math@Utils@Spectre@@QEAA@AEBUVector4@123@000@Z.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?GetWorldScale@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C508 (-GetWorldScale@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20 (-Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ.c)
 *     ?GetIntensityMode@Light@Engine@Spectre@@QEBA?AW4EPhotometricQuantity@23@XZ @ 0x180043270 (-GetIntensityMode@Light@Engine@Spectre@@QEBA-AW4EPhotometricQuantity@23@XZ.c)
 *     ?GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18005BB7C (-GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18005D800 (-Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z.c)
 *     ??$GetComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180062688 (--$GetComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@.c)
 */

// Hidden C++ exception states: #wind=8
char *__fastcall Spectre::Engine::LightGatherer::UpdateLightConstants(char *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  char *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  std::_Ref_count_base **v8; // rsi
  __int64 v9; // rax
  int v10; // xmm6_4
  __int64 v11; // r15
  __m128 v12; // xmm7
  __int32 v13; // xmm14_4
  __int32 v14; // xmm15_4
  __m128 v15; // xmm10
  unsigned int v16; // edi
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm11
  _DWORD *LocalToWorld; // rax
  int v21; // xmm2_4
  int v22; // xmm1_4
  __m128 v23; // xmm8
  unsigned __int32 v24; // xmm8_4
  int v25; // xmm12_4
  int v26; // xmm13_4
  int IntensityMode; // ecx
  int v28; // r8d
  _DWORD *v29; // rax
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  float v32; // xmm4_4
  float v33; // xmm6_4
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  _DWORD *v39; // rax
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  float *v42; // rax
  char *v43; // rax
  std::_Ref_count_base **v44; // rdi
  std::_Ref_count_base **v45; // rax
  std::_Ref_count_base *v46; // rcx
  std::_Ref_count_base *v47; // rdx
  std::_Ref_count_base *v48; // rcx
  std::_Ref_count_base *v49; // rdi
  std::_Ref_count_base *v50; // r13
  Spectre::Utils::Math::Matrix *v51; // rax
  __int64 v52; // rcx
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  float v56; // xmm1_4
  float v57; // xmm4_4
  int v58; // xmm0_4
  float v59; // xmm3_4
  int v60; // xmm5_4
  float v61; // xmm2_4
  float *v62; // rax
  float *v63; // rdx
  unsigned __int32 v65; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v66; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int32 v70; // [rsp+68h] [rbp-A0h]
  __int64 v71; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v72; // [rsp+74h] [rbp-94h]
  unsigned __int64 v73; // [rsp+80h] [rbp-88h]
  unsigned __int32 v74; // [rsp+88h] [rbp-80h]
  unsigned __int64 v75; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A8h] [rbp-60h]
  float v78; // [rsp+B0h] [rbp-58h] BYREF
  float v79; // [rsp+B4h] [rbp-54h]
  float v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h]
  __int64 v82; // [rsp+C8h] [rbp-40h]
  _BYTE *v83; // [rsp+D0h] [rbp-38h]
  __int64 v84; // [rsp+D8h] [rbp-30h]
  __int64 v85; // [rsp+E0h] [rbp-28h]
  __int64 v86; // [rsp+E8h] [rbp-20h]
  __m128 v87; // [rsp+F0h] [rbp-18h]
  __int64 v88; // [rsp+100h] [rbp-8h] BYREF
  std::_Ref_count_base *v89; // [rsp+108h] [rbp+0h]
  __int64 v90; // [rsp+110h] [rbp+8h] BYREF
  std::_Ref_count_base *v91; // [rsp+118h] [rbp+10h]
  Spectre::Engine::SceneNode *v92; // [rsp+120h] [rbp+18h] BYREF
  std::_Ref_count_base *v93; // [rsp+128h] [rbp+20h]
  __int64 v94; // [rsp+130h] [rbp+28h] BYREF
  std::_Ref_count_base *v95; // [rsp+138h] [rbp+30h]
  Spectre::Engine::SceneNode *v96; // [rsp+140h] [rbp+38h] BYREF
  std::_Ref_count_base *v97; // [rsp+148h] [rbp+40h]
  _QWORD v98[2]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v99; // [rsp+160h] [rbp+58h] BYREF
  std::_Ref_count_base *v100; // [rsp+168h] [rbp+60h]
  __m128 v101[4]; // [rsp+178h] [rbp+70h] BYREF
  char v102[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v103[232]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int32 v107; // [rsp+340h] [rbp+238h]

  v3 = a2;
  v4 = a1;
  `eh vector constructor iterator'(
    a1,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  HIDWORD(v71) = 1;
  v5 = (__int64)(v3[1] - *v3) >> 4;
  v6 = 0LL;
  v68 = 0LL;
  if ( v5 > 3 )
  {
    v5 = 3LL;
LABEL_4:
    v7 = 0LL;
    v8 = (std::_Ref_count_base **)(v4 + 8);
    v77 = 392LL - (_QWORD)v4;
    v81 = 440LL - (_QWORD)v4;
    v82 = 344LL - (_QWORD)v4;
    v84 = 488LL - (_QWORD)v4;
    v85 = 536LL - (_QWORD)v4;
    v9 = -8LL - (_QWORD)v4;
    v86 = -8LL - (_QWORD)v4;
    v10 = _xmm;
    while ( 1 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v88,
        (std::_Ref_count_base **)((char *)v8 + v9 + *v3));
      v11 = v88;
      v87 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v88 + 104), (__m128)*(unsigned int *)(v88 + 104), 0),
              (__m128)_mm_loadu_si128((const __m128i *)(v88 + 88)));
      v12 = 0LL;
      v83 = (_BYTE *)(v88 + 72);
      if ( *(_BYTE *)(v88 + 72) )
      {
        v107 = v87.m128_u32[2];
        v14 = v87.m128_i32[1];
        v13 = v87.m128_i32[0];
      }
      else
      {
        v13 = 0;
        v14 = 0;
        v107 = 0;
        v10 = _xmm;
      }
      v15 = (__m128)*(unsigned int *)(v88 + 116);
      v16 = *(_DWORD *)(v88 + 120);
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v88 + 56, &v90);
      Spectre::Engine::SceneNode::GetWorldScale(v90, &v78);
      if ( v91 )
        std::_Ref_count_base::_Decref(v91);
      v17 = (__m128)LODWORD(v79);
      v17.m128_f32[0] = (float)(v79 * v78) * v80;
      v18 = _mm_and_ps(v17, (__m128)_xmm);
      v18.m128_f32[0] = cbrtf(v18.m128_f32[0]);
      v19 = v18;
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11 + 56, &v92);
      Spectre::Engine::SceneNode::GetWorldPosition(v92, (__int64)&v69);
      if ( v93 )
        std::_Ref_count_base::_Decref(v93);
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11 + 56, &v94);
      LocalToWorld = (_DWORD *)Spectre::Engine::SceneNode::GetLocalToWorld(v94, (__int64)v102);
      v21 = LocalToWorld[10] ^ v10;
      v22 = LocalToWorld[9] ^ v10;
      LODWORD(v66) = LocalToWorld[8] ^ v10;
      HIDWORD(v66) = v22;
      LODWORD(v67) = v21;
      if ( v95 )
        std::_Ref_count_base::_Decref(v95);
      Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v66);
      if ( v16 == 2 )
      {
        v23 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v66, (__m128)(unsigned int)v67));
        v72 = v23.m128_u64[0];
        v24 = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
        v25 = v72;
        v69 = v72;
        v26 = HIDWORD(v72);
        v70 = v24;
      }
      else
      {
        v24 = v70;
        v26 = HIDWORD(v69);
        v25 = v69;
      }
      IntensityMode = Spectre::Engine::Light::GetIntensityMode(v11);
      if ( !IntensityMode )
      {
        if ( v16 == v28 )
          goto LABEL_23;
        IntensityMode = v28;
      }
      if ( v16 < 2 )
      {
        if ( IntensityMode == 1 )
        {
          v12 = (__m128)LODWORD(FLOAT_0_079577468);
        }
        else if ( IntensityMode == v28 )
        {
          v12 = (__m128)LODWORD(FLOAT_1_0);
        }
        else if ( IntensityMode == 4 )
        {
          v12 = v15;
          v12.m128_f32[0] = v15.m128_f32[0] * v15.m128_f32[0];
        }
      }
      else if ( v16 == 2 )
      {
        if ( IntensityMode != 3 )
        {
          if ( IntensityMode == 4 )
          {
            v12 = (__m128)LODWORD(FLOAT_1_0);
            v12.m128_f32[0] = (float)(1.0 - cosf(fmaxf(0.001, v15.m128_f32[0]))) * 6.2831855;
          }
          goto LABEL_24;
        }
LABEL_23:
        v12 = (__m128)LODWORD(FLOAT_1_0);
        goto LABEL_24;
      }
      if ( v16 == 1 )
      {
        v33 = cosf((float)(fmaxf(1.0, *(float *)(v11 + 112)) * 0.017453292) * 0.5);
        v34 = (__m128)LODWORD(FLOAT_0_0099999998);
        v34.m128_f32[0] = log2f(0.0099999998);
        v35 = _mm_xor_ps(v34, (__m128)_xmm);
        v35.m128_f32[0] = v35.m128_f32[0] / (float)(1.0 - v33);
        v36 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v66, (__m128)(unsigned int)v67));
        v73 = v36.m128_u64[0];
        v74 = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
        v37 = 0LL;
        v37.m128_u64[0] = v36.m128_u64[0];
        v38 = _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), _mm_movelh_ps(v37, (__m128)v74));
        v75 = v38.m128_u64[0];
        v10 = _xmm;
        v39 = (_DWORD *)((char *)v8 + v77 + *(_QWORD *)(a3 + 64));
        *v39 = v38.m128_i32[0];
        v39[1] = HIDWORD(v75);
        v39[2] = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
        v39[3] = v35.m128_i32[0] ^ _xmm;
        goto LABEL_25;
      }
LABEL_24:
      v29 = (_DWORD *)((char *)v8 + v77 + *(_QWORD *)(a3 + 64));
      *v29 = 0;
      v29[1] = 0;
      v29[2] = 0;
      v29[3] = 0;
LABEL_25:
      v65 = v107;
      if ( v16 == 2 )
      {
        v32 = 0.0;
        v31.m128_u64[0] = __PAIR64__(v14, v13);
      }
      else
      {
        v30 = v19;
        v30.m128_f32[0] = v19.m128_f32[0] * v19.m128_f32[0];
        v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), _mm_movelh_ps((__m128)__PAIR64__(v14, v13), (__m128)v107));
        v65 = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
        v32 = FLOAT_1_0;
      }
      v40 = 0LL;
      v40.m128_u64[0] = v31.m128_u64[0];
      v41 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_movelh_ps(v40, (__m128)v65));
      v76 = v41.m128_u64[0];
      v42 = (float *)((char *)v8 + v81 + *(_QWORD *)(a3 + 64));
      *v42 = v41.m128_f32[0];
      v42[1] = *((float *)&v76 + 1);
      *((_DWORD *)v42 + 2) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
      v42[3] = v32;
      v43 = (char *)v8 + v82 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)v43 = v25;
      *((_DWORD *)v43 + 1) = v26;
      *((_DWORD *)v43 + 2) = v24;
      *((float *)v43 + 3) = v19.m128_f32[0] * v15.m128_f32[0];
      if ( v6 < 3 )
      {
        v44 = v8 - 1;
        if ( std::operator==<Spectre::Engine::Scene>(v8 - 1) )
        {
          std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11 + 56, &v96);
          v45 = (std::_Ref_count_base **)Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ShadowMapCamera>(
                                           v96,
                                           &v99);
          v46 = *v45;
          v47 = v45[1];
          *v45 = 0LL;
          v45[1] = 0LL;
          *v44 = v46;
          v48 = *v8;
          *v8 = v47;
          if ( v48 )
            std::_Ref_count_base::_Decref(v48);
          if ( v100 )
            std::_Ref_count_base::_Decref(v100);
          if ( v97 )
            std::_Ref_count_base::_Decref(v97);
        }
        if ( *v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)*v8 + 2);
          v11 = v88;
        }
        v49 = *v44;
        v98[0] = v49;
        v50 = *v8;
        v98[1] = *v8;
        if ( std::operator!=<Spectre::Engine::Scene>(v98) )
        {
          if ( *(_BYTE *)(v11 + 124) )
          {
            Spectre::Engine::Camera::GetViewProjectionMatrix(v49, v101);
            Spectre::Utils::Math::Matrix::Transpose(v101, (__m128 *)(v7 + *(_QWORD *)(a3 + 64)));
          }
          else
          {
            v51 = Spectre::Utils::Math::Matrix::Matrix(
                    (Spectre::Utils::Math::Matrix *)v103,
                    (const struct Spectre::Utils::Math::Vector4 *)&Spectre::Utils::Math::Vector4::Zero,
                    (const struct Spectre::Utils::Math::Vector4 *)&Spectre::Utils::Math::Vector4::Zero,
                    (const struct Spectre::Utils::Math::Vector4 *)&Spectre::Utils::Math::Vector4::Zero,
                    (const struct Spectre::Utils::Math::Vector4 *)&Spectre::Utils::Math::Vector4::Zero);
            v52 = *(_QWORD *)(a3 + 64);
            v53 = *((_OWORD *)v51 + 1);
            v54 = *((_OWORD *)v51 + 2);
            v55 = *((_OWORD *)v51 + 3);
            *(_OWORD *)(v7 + v52) = *(_OWORD *)v51;
            *(_OWORD *)(v7 + v52 + 16) = v53;
            *(_OWORD *)(v7 + v52 + 32) = v54;
            *(_OWORD *)(v7 + v52 + 48) = v55;
          }
          v56 = 1.0 / (float)*((int *)v49 + 485);
          if ( *((_BYTE *)v49 + 1952) )
            v57 = FLOAT_1_0;
          else
            v57 = 0.0;
          v58 = *((_DWORD *)v49 + 487);
          if ( ((*((_DWORD *)v49 + 79) - 2) & 0xFFFFFFFD) == 0 )
            v58 ^= v10;
          if ( *((_DWORD *)v49 + 490) == 1 )
            v59 = FLOAT_1_0;
          else
            v59 = 0.0;
          v60 = *((_DWORD *)v49 + 492);
          if ( *v83 && *(_BYTE *)(v11 + 124) )
            v61 = FLOAT_1_0;
          else
            v61 = 0.0;
          v62 = (float *)((char *)v8 + v84 + *(_QWORD *)(a3 + 64));
          *v62 = v56;
          v62[1] = v56;
          v62[2] = v57;
          *((_DWORD *)v62 + 3) = v58;
          v63 = (float *)((char *)v8 + v85 + *(_QWORD *)(a3 + 64));
          *v63 = *((float *)v49 + 489);
          v63[1] = v59;
          *((_DWORD *)v63 + 2) = v60;
          v63[3] = v61;
        }
        if ( v50 )
          std::_Ref_count_base::_Decref(v50);
        v6 = v68;
      }
      if ( v89 )
        std::_Ref_count_base::_Decref(v89);
      v68 = ++v6;
      v8 += 2;
      v7 += 64LL;
      v3 = a2;
      v9 = v86;
      if ( v6 >= v5 )
        return a1;
    }
  }
  if ( v5 )
    goto LABEL_4;
  return v4;
}
