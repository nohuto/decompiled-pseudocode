/*
 * XREFs of ?UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA?AV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4F20
 * Callers:
 *     ?Gather@LightGatherer@Engine@Spectre@@SAXAEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@AEAV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@5@AEAV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@5@@Z @ 0x1800A4544 (-Gather@LightGatherer@Engine@Spectre@@SAXAEBV-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??DMath@Utils@Spectre@@YA?AUQuaternion@012@AEBU3012@0@Z @ 0x18003B5A8 (--DMath@Utils@Spectre@@YA-AUQuaternion@012@AEBU3012@0@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?GetOrientation@LightProbe@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x180051B44 (-GetOrientation@LightProbe@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::LightGatherer::UpdateProbeConstants(_QWORD *a1, __int64 *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  __int64 v8; // r14
  float **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // r15
  volatile signed __int32 *v21; // r14
  std::_Ref_count_base *v22; // r12
  int v23; // xmm2_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  _DWORD *v26; // rcx
  int v27; // xmm2_4
  int v28; // xmm1_4
  int v29; // xmm0_4
  _DWORD *v30; // rcx
  int v31; // xmm3_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  _DWORD *v34; // rcx
  int v35; // xmm2_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  _DWORD *v38; // rcx
  int v39; // xmm3_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  _DWORD *v42; // rcx
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  _DWORD *v46; // rcx
  int v47; // xmm3_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  _DWORD *v50; // rcx
  int v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  _DWORD *v54; // rcx
  int v55; // xmm3_4
  int v56; // xmm1_4
  int v57; // xmm0_4
  _DWORD *v58; // rcx
  __int64 v59; // rbx
  __m128 *Orientation; // rax
  __m128 *v61; // rax
  std::_Ref_count_base *v62; // rcx
  float *v63; // rax
  __m128 v65; // [rsp+40h] [rbp-51h] BYREF
  __int64 v66; // [rsp+50h] [rbp-41h] BYREF
  std::_Ref_count_base *v67; // [rsp+58h] [rbp-39h]
  __int128 v68; // [rsp+60h] [rbp-31h] BYREF
  __m128 v69[5]; // [rsp+70h] [rbp-21h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = FLOAT_1_0;
  v8 = *a2;
  if ( *a2 == a2[1] )
  {
    v9 = (float **)(a3 + 64);
    v10 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v10 + 192) = 0LL;
    *(_QWORD *)(v10 + 200) = 0LL;
    v11 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    v12 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v12 + 224) = 0LL;
    *(_QWORD *)(v12 + 232) = 0LL;
    v13 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    v14 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v14 + 256) = 0LL;
    *(_QWORD *)(v14 + 264) = 0LL;
    v15 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v15 + 272) = 0LL;
    *(_QWORD *)(v15 + 280) = 0LL;
    v16 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_QWORD *)(v16 + 296) = 0LL;
    v17 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v17 + 304) = 0LL;
    *(_QWORD *)(v17 + 312) = 0LL;
    v18 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v18 + 320) = 0LL;
    *(_QWORD *)(v18 + 328) = 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(v8 + 8);
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v20 = *(_DWORD **)v8;
    v21 = *(volatile signed __int32 **)(v8 + 8);
    v22 = (std::_Ref_count_base *)v21;
    v23 = v20[67];
    v24 = v20[66];
    v25 = v20[65];
    v9 = (float **)(a3 + 64);
    v26 = *(_DWORD **)(a3 + 64);
    v26[48] = v20[64];
    v26[49] = v25;
    v26[50] = v24;
    v26[51] = v23;
    v27 = v20[71];
    v28 = v20[70];
    v29 = v20[69];
    v30 = *(_DWORD **)(a3 + 64);
    v30[52] = v20[68];
    v30[53] = v29;
    v30[54] = v28;
    v30[55] = v27;
    v31 = v20[75];
    v32 = v20[74];
    v33 = v20[73];
    v34 = *(_DWORD **)(a3 + 64);
    v34[56] = v20[72];
    v34[57] = v33;
    v34[58] = v32;
    v34[59] = v31;
    v35 = v20[79];
    v36 = v20[78];
    v37 = v20[77];
    v38 = *(_DWORD **)(a3 + 64);
    v38[60] = v20[76];
    v38[61] = v37;
    v38[62] = v36;
    v38[63] = v35;
    v39 = v20[83];
    v40 = v20[82];
    v41 = v20[81];
    v42 = *(_DWORD **)(a3 + 64);
    v42[64] = v20[80];
    v42[65] = v41;
    v42[66] = v40;
    v42[67] = v39;
    v43 = v20[87];
    v44 = v20[86];
    v45 = v20[85];
    v46 = *(_DWORD **)(a3 + 64);
    v46[68] = v20[84];
    v46[69] = v45;
    v46[70] = v44;
    v46[71] = v43;
    v47 = v20[91];
    v48 = v20[90];
    v49 = v20[89];
    v50 = *(_DWORD **)(a3 + 64);
    v50[72] = v20[88];
    v50[73] = v49;
    v50[74] = v48;
    v50[75] = v47;
    v51 = v20[95];
    v52 = v20[94];
    v53 = v20[93];
    v54 = *(_DWORD **)(a3 + 64);
    v54[76] = v20[92];
    v54[77] = v53;
    v54[78] = v52;
    v54[79] = v51;
    v55 = v20[99];
    v56 = v20[98];
    v57 = v20[97];
    v58 = *(_DWORD **)(a3 + 64);
    v58[80] = v20[96];
    v58[81] = v57;
    v58[82] = v56;
    v58[83] = v55;
    v59 = *Spectre::Engine::Component::GetSceneNode((__int64)v20, &v66);
    Spectre::Engine::SceneNode::VerifyReadAccess((Spectre::Engine::SceneNode *)v59);
    v65 = *(__m128 *)(v59 + 156);
    Orientation = (__m128 *)Spectre::Engine::LightProbe::GetOrientation((__int64)v20, &v68);
    v61 = Spectre::Utils::Math::operator*(v69, Orientation, &v65);
    v4 = v61->m128_f32[0];
    v5 = v61->m128_f32[1];
    v6 = v61->m128_f32[2];
    v7 = v61->m128_f32[3];
    if ( v67 )
      std::_Ref_count_base::_Decref(v67);
    if ( v21 )
    {
      _InterlockedIncrement(v21 + 2);
      v22 = (std::_Ref_count_base *)v21;
    }
    *a1 = v20;
    v62 = (std::_Ref_count_base *)a1[1];
    a1[1] = v21;
    if ( v62 )
      std::_Ref_count_base::_Decref(v62);
    if ( v21 )
      std::_Ref_count_base::_Decref(v22);
  }
  v63 = *v9;
  v63[84] = v4 * 1.4142135;
  v63[85] = v5 * 1.4142135;
  v63[86] = v6 * 1.4142135;
  v63[87] = v7 * 1.4142135;
  return a1;
}
