/*
 * XREFs of ?DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045218
 * Callers:
 *     ?DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007DE20 (-DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FC10 (-DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@M@Z @ 0x1800450A0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_1800450A0.c)
 *     ??1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ @ 0x1800451F0 (--1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4EShaderPropertyLinkage@23@@Z @ 0x18008244C (-AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4ESha.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetAlignment@ShaderPropertyLayout@Engine@Spectre@@QEAAXI@Z @ 0x18008311C (-SetAlignment@ShaderPropertyLayout@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z @ 0x180083830 (-SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_tr.c)
 *     ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z @ 0x180083864 (-SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z.c)
 */

// Hidden C++ exception states: #wind=39
void __fastcall Spectre::Engine::DefineGlobalPropertyLayouts(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  Spectre::Engine::ShaderPropertyLayout *v37; // rbx
  _QWORD *v38; // rax
  Spectre::Engine::ShaderPropertyLayout *v39; // rbx
  _QWORD *v40; // rax
  unsigned __int16 v41; // r13
  Spectre::Engine::ShaderPropertyLayout *v42; // rbx
  _QWORD *v43; // rax
  unsigned __int16 v44; // r12
  Spectre::Engine::ShaderPropertyLayout *v45; // rbx
  _QWORD *v46; // rax
  unsigned __int16 v47; // r15
  Spectre::Engine::ShaderPropertyLayout *v48; // rbx
  _QWORD *v49; // rax
  unsigned __int16 v50; // r14
  Spectre::Engine::ShaderPropertyLayout *v51; // rbx
  _QWORD *v52; // rax
  unsigned __int16 v53; // si
  Spectre::Engine::ShaderPropertyLayout *v54; // rbx
  _QWORD *v55; // rax
  unsigned __int16 v56; // di
  Spectre::Engine::ShaderPropertyLayout *v57; // rbx
  _QWORD *v58; // rax
  int v59; // r8d
  int v60; // r13d
  __int64 v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // r9
  __int64 v64; // rsi
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // r8
  Spectre::Engine::ShaderPropertyLayout *v82; // rbx
  _QWORD *v83; // rax
  Spectre::Engine::ShaderPropertyLayout *v84; // rbx
  _QWORD *v85; // rax
  Spectre::Engine::ShaderPropertyLayout *v86; // rbx
  _QWORD *v87; // rax
  Spectre::Engine::ShaderPropertyLayout *v88; // rbx
  _QWORD *v89; // rax
  Spectre::Engine::ShaderPropertyLayout *v90; // rbx
  _QWORD *v91; // rax
  Spectre::Engine::ShaderPropertyLayout *v92; // rbx
  _QWORD *v93; // rax
  Spectre::Engine::ShaderPropertyLayout *v94; // rbx
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r8
  Spectre::Engine::ShaderPropertyLayout *v98; // rbx
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // r8
  std::_Ref_count_base *v102; // rcx
  Spectre::Engine::ShaderPropertyLayout *v103[2]; // [rsp+28h] [rbp-E0h] BYREF
  Spectre::Engine::ShaderPropertyLayout *v104; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v105; // [rsp+40h] [rbp-C8h]
  _QWORD v106[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+68h] [rbp-A0h]
  _QWORD v108[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v109; // [rsp+80h] [rbp-88h]
  __int64 v110; // [rsp+88h] [rbp-80h]
  _QWORD v111[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v112[64]; // [rsp+D8h] [rbp-30h] BYREF
  char v113[64]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v114[64]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v115[64]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v116[64]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v117[64]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v118[64]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v119[64]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v120[64]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v121[64]; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v122[64]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v123[64]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v124[64]; // [rsp+3D8h] [rbp+2D0h] BYREF
  _BYTE v125[64]; // [rsp+418h] [rbp+310h] BYREF
  _BYTE v126[64]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v127[64]; // [rsp+498h] [rbp+390h] BYREF
  _BYTE v128[64]; // [rsp+4D8h] [rbp+3D0h] BYREF
  _BYTE v129[64]; // [rsp+518h] [rbp+410h] BYREF
  _BYTE v130[64]; // [rsp+558h] [rbp+450h] BYREF
  _BYTE v131[64]; // [rsp+598h] [rbp+490h] BYREF
  _BYTE v132[64]; // [rsp+5D8h] [rbp+4D0h] BYREF
  _BYTE v133[64]; // [rsp+618h] [rbp+510h] BYREF
  _BYTE v134[64]; // [rsp+658h] [rbp+550h] BYREF
  _BYTE v135[64]; // [rsp+698h] [rbp+590h] BYREF
  _BYTE v136[64]; // [rsp+6D8h] [rbp+5D0h] BYREF
  _BYTE v137[64]; // [rsp+718h] [rbp+610h] BYREF
  _BYTE v138[64]; // [rsp+758h] [rbp+650h] BYREF
  _BYTE v139[64]; // [rsp+798h] [rbp+690h] BYREF
  _BYTE v140[64]; // [rsp+7D8h] [rbp+6D0h] BYREF
  _BYTE v141[64]; // [rsp+818h] [rbp+710h] BYREF
  char v142[64]; // [rsp+858h] [rbp+750h] BYREF
  _BYTE v143[64]; // [rsp+898h] [rbp+790h] BYREF
  _BYTE v144[64]; // [rsp+8D8h] [rbp+7D0h] BYREF
  _BYTE v145[64]; // [rsp+918h] [rbp+810h] BYREF
  _BYTE v146[64]; // [rsp+958h] [rbp+850h] BYREF

  v109 = a2;
  v108[0] = a1;
  v110 = a2;
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v104, 6LL);
  v2 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_DebugValue1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v113, (__int64)v2, 2);
  v3 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_CameraExposure);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v114, (__int64)v3, 2);
  v4 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_Contrast);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v115, (__int64)v4, v5, 1.0);
  v6 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_ToneMappingEnabled);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v116, (__int64)v6, 2);
  v7 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_CompatibilitySettings);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v117, (__int64)v7, 5);
  v8 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_RenderTargetSize);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v118, (__int64)v8, 5);
  v9 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_RenderPassInfo);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v119, (__int64)v9, 5);
  v10 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_ShaderAntialiasingControl);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v120, (__int64)v10, 5);
  v11 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_PlanarReflectionControl);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v121, (__int64)v11, 5);
  v12 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_PlanarReflectionWorldPlane);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v122, (__int64)v12, 5);
  v13 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Settings);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v123, (__int64)v13, 5);
  v14 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_DepthBiasSettings);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v124, (__int64)v14, 5);
  v15 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Color);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v125, (__int64)v15, 6);
  v16 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_DirectLightingIntensity);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v126, (__int64)v16, 2);
  v17 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_EmissiveLightingIntensity);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v127, (__int64)v17, v18, 1.0);
  v19 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundShadowFalloff);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v128, (__int64)v19, 2);
  v20 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundShadowWeight);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v129, (__int64)v20, 2);
  v21 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundColorR);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v130, (__int64)v21, 2);
  v22 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundColorG);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v131, (__int64)v22, 2);
  v23 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundColorB);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v132, (__int64)v23, 2);
  v24 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundColorA);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v133, (__int64)v24, 2);
  v25 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundLighting);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v134, (__int64)v25, 2);
  v26 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundEnvironmentDisplay);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v135, (__int64)v26, 2);
  v27 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_BackgroundEnvironmentDisplayLOD);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v136, (__int64)v27, 2);
  v28 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_UseReceiverPlaneDepthBias);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v137, (__int64)v28, 2);
  v29 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_DistanceFadeScale);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v138, (__int64)v29, v30, 2.0);
  v31 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_DistanceFadeOffset);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v139, (__int64)v31, v32, 1.0);
  v33 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_DistanceFadeMultiplier);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v140, (__int64)v33, v34, 1.0);
  v35 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_ForceNormalsForward);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v141, (__int64)v35, v36, 1.0);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v104, v113, 29LL, 1LL);
  v37 = v104;
  v38 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ShadowBuffer0);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v38, 8);
  LOWORD(v107) = Spectre::Engine::ShaderPropertyLayout::AddProperty(v37, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v39 = v104;
  v40 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ShadowBuffer1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v40, 8);
  v41 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v39, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v42 = v104;
  v43 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ShadowBuffer2);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v43, 8);
  v44 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v42, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v45 = v104;
  v46 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ColoredShadowBuffer0);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v46, 8);
  v47 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v45, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v48 = v104;
  v49 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ColoredShadowBuffer1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v49, 8);
  v50 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v48, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v51 = v104;
  v52 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_ColoredShadowBuffer2);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v52, 8);
  v53 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v51, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v54 = v104;
  v55 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Radiance);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v55, 8);
  v56 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v54, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  v57 = v104;
  v58 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kGlobal_PlanarReflection);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v111, (__int64)v58, 8);
  LOWORD(v57) = Spectre::Engine::ShaderPropertyLayout::AddProperty(v57, v111, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v111);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, (unsigned __int16)v107, 5LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v41, 6LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v44, 7LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v47, 13LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v50, 14LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v53, 15LL);
  v60 = v59 - 7;
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, (unsigned __int16)v57, (unsigned int)(v59 - 7));
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v104, v56, (unsigned int)(v60 + 3));
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v104);
  v61 = v109;
  v62 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v103,
          &v104);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v63, v62);
  `eh vector destructor iterator'(
    v113,
    (unsigned int)(v60 + 56),
    (unsigned int)(v60 + 21),
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v105 )
    std::_Ref_count_base::_Decref(v105);
  v64 = v108[0];
  Spectre::Engine::ShaderManager::CreatePropertyLayout(v108[0], &v104, 5LL);
  v65 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_GeometryNormalMode);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v113, (__int64)v65, 1);
  v66 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_GeometryDebugDisplayMode);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v114, (__int64)v66, 1);
  v67 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_ShowGrid);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v115, (__int64)v67, 0);
  v68 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Normal);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v116, (__int64)v68, 0);
  v69 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Diffuse);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v117, (__int64)v69, 0);
  v70 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Opacity);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v118, (__int64)v70, 0);
  v71 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Specular);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v119, (__int64)v71, 0);
  v72 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Emissive);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v120, (__int64)v72, 0);
  v73 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Occlusion);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v121, (__int64)v73, 0);
  v74 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_GLTFComplianceEnabled);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v122, (__int64)v74, 0);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v104, v113, 10LL, 1LL);
  Spectre::Engine::ShaderPropertyLayout::SetAlignment(v104, 0x10u);
  v75 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_SplitScreenSettings);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v142, (__int64)v75, 5);
  v76 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_MaterialOverride_Diffuse);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v143, (__int64)v76, 5);
  v77 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_MaterialOverride_Specular);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v144, (__int64)v77, 5);
  v78 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kDebug_MaterialOverride_Smoothness);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v145, (__int64)v78, 5);
  v79 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kDebug_MaterialOverride_Opacity);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v146, (__int64)v79, 5);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v104, v142, 5LL, 1LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v104);
  v80 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v103,
          &v104);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v81, v80);
  `eh vector destructor iterator'(
    v142,
    64LL,
    5LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  `eh vector destructor iterator'(
    v113,
    64LL,
    10LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v105 )
    std::_Ref_count_base::_Decref(v105);
  Spectre::Engine::ShaderManager::CreatePropertyLayout(v64, &v104, 4LL);
  v82 = v104;
  v83 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kView_ViewProjectionMatrix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v83, 7);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v82, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  v84 = v104;
  v85 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kView_CameraPosition);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v85, 5);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v84, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  v86 = v104;
  v87 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryDepthBufferMatrix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v87, 7);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v86, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  v88 = v104;
  v89 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kView_SoftwareViewport);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v89, 5);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v88, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  v90 = v104;
  v91 = std::string::string(
          v106,
          (__int64)&Spectre::Engine::ShaderConstants::kView_UseConservativeAlphaMaskForDepthOnly);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v91, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v90, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  v92 = v104;
  v93 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryDepthBufferTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v93, v60);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v92, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(
    v104,
    &Spectre::Engine::ShaderConstants::kView_PrimaryDepthBufferTexture,
    9LL);
  v94 = v104;
  v95 = std::string::string(v111, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryStencilBufferTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v95, v60);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v94, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(
    v104,
    &Spectre::Engine::ShaderConstants::kView_PrimaryStencilBufferTexture,
    10LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v104);
  v96 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v108,
          &v104);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v97, v96);
  if ( v105 )
    std::_Ref_count_base::_Decref(v105);
  Spectre::Engine::ShaderManager::CreatePropertyLayout(v64, &v104, 1LL);
  v98 = v104;
  v99 = std::string::string(v106, (__int64)&Spectre::Engine::ShaderConstants::kFrame_FrameTime);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v112, (__int64)v99, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v98, v112, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v112);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v104);
  v100 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v108,
           &v104);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v101, v100);
  if ( v105 )
    std::_Ref_count_base::_Decref(v105);
  v102 = *(std::_Ref_count_base **)(v61 + 8);
  if ( v102 )
    std::_Ref_count_base::_Decref(v102);
}
