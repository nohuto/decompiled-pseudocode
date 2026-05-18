/*
 * XREFs of ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0
 * Callers:
 *     ?SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073ACC (-SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV-$shared_ptr@VImageProcessingEf.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 *     ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620 (-SetMesh@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ??1?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180071F04 (--1-$pair@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_ptr@VMesh@Engine@Spectre@@@2@.c)
 *     ??R?$_Func_class@U?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@$$V@std@@QEBA?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@1@XZ @ 0x180097DC0 (--R-$_Func_class@U-$pair@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_ptr@VMesh@Engi.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall Spectre::Engine::ImageProcessingEffect::SetResources(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  std::_Ref_count_base *v20; // rcx
  std::_Ref_count_base *v21; // rcx
  std::_Ref_count_base *v22; // rcx
  __int64 v23; // rcx
  std::_Ref_count_base *v24; // rcx
  _QWORD *v25; // [rsp+38h] [rbp-D0h]
  _BYTE *v26; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v30; // [rsp+68h] [rbp-A0h]
  Spectre::Engine::SceneNode *v31; // [rsp+70h] [rbp-98h] BYREF
  std::_Ref_count_base *v32; // [rsp+78h] [rbp-90h]
  _QWORD v33[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v38[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v39; // [rsp+108h] [rbp+0h]

  v9 = a1;
  v10 = (__int64 *)a1[19];
  if ( v10 != (__int64 *)a1[20] )
  {
    v11 = (__int64 *)a1[20];
    do
    {
      v29 = *v10;
      v31 = (Spectre::Engine::SceneNode *)v33;
      v25 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v33,
              a6);
      v26 = v38;
      v39 = 0LL;
      v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
      if ( v12 )
        v39 = (**v12)(v12, v38);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v34,
        a4);
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v35,
        a3);
      v13 = (unsigned int)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                            &v28,
                            a2);
      Spectre::Engine::ImageProcessingEffect::SetResources(v29, v13, v14, v15, (__int64)v38, (__int64)v25);
      v10 += 2;
    }
    while ( v10 != v11 );
    v9 = a1;
  }
  std::_Func_class<std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::operator()(
    a5,
    (__int64)v36);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v31, v36);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v29, &v37);
  Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::MeshInstance>(v31, &v26);
  v16 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v28,
          &v29);
  v17 = (__int64)v26;
  Spectre::Engine::MeshInstance::SetMesh((__int64)v26, v16);
  v18 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v28,
          a6);
  Spectre::Engine::MeshInstance::SetMaterial(v17, v18);
  *(_BYTE *)(v17 + 72) = 0;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 3, a2);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 5, a3);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 1, a4);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 7, (__int64 *)&v31);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 9, (__int64 *)&v26);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v9 + 11, a6);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>::~pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>((__int64)v36);
  v20 = (std::_Ref_count_base *)a2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v21 = (std::_Ref_count_base *)a3[1];
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  v22 = (std::_Ref_count_base *)a4[1];
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v23 = *(_QWORD *)(a5 + 56);
  if ( v23 )
  {
    LOBYTE(v19) = v23 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v19);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  v24 = (std::_Ref_count_base *)a6[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
}
