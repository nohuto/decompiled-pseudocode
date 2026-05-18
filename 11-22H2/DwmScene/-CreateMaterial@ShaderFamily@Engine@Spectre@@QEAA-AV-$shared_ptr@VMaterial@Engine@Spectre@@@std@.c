/*
 * XREFs of ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8
 * Callers:
 *     ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0 (-CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z @ 0x180029DF8 (--0-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188 (-AttachShaderFamily@Material@Engine@Spectre@@AEAAXV-$shared_ptr@VShaderFamily@Engine@Spectre@@@s.c)
 *     ?GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18004FA78 (-GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18005EC68 (--$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_pt_ea_18005EC68.c)
 *     ??$_Emplace@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VMaterial@Engine@Spectre@@@1@@Z @ 0x18005EF7C (--$_Emplace@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMa.c)
 *     ?GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C50 (-GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV-$shared_ptr@VShaderPropertyLayout@Engin.c)
 *     ?IsComplete@ShaderPropertyLayout@Engine@Spectre@@QEBA_NXZ @ 0x180083108 (-IsComplete@ShaderPropertyLayout@Engine@Spectre@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Spectre::Engine::ShaderFamily::CreateMaterial(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *PropertyLayout; // rax
  __int64 *Engine; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-59h]
  Spectre::Engine::ShaderPropertyLayout *v16; // [rsp+48h] [rbp-51h] BYREF
  std::_Ref_count_base *v17; // [rsp+50h] [rbp-49h]
  _QWORD v18[5]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v19; // [rsp+80h] [rbp-19h] BYREF
  std::_Ref_count_base *v20; // [rsp+88h] [rbp-11h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp+7h] BYREF

  v18[4] = a2;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      &v19,
      (__int64)"ShaderFamily::CreateMaterial() -- materials cannot be created until shader family declaration is complete");
    v4 = std::string::string(
           v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)&v19,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  PropertyLayout = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(a1, 2LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v16,
    PropertyLayout);
  if ( std::operator==<Spectre::Engine::Scene>(&v16) || !Spectre::Engine::ShaderPropertyLayout::IsComplete(v16) )
  {
    std::string::string(
      &v19,
      (__int64)"ShaderFamily::CreateMaterial() -- materials cannot be created until valid material layout is specified (n"
               "on-null and complete)");
    v12 = std::string::string(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v12,
      v13,
      (__int64)&v19,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  Engine = (__int64 *)Spectre::Engine::ShaderManager::GetEngine(*(Spectre::Engine::ShaderManager **)(a1 + 440));
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Material,>(Engine, (__int64)a2);
  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    v8 = (_QWORD *)*a2;
    v9 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1, &v14);
    Spectre::Engine::Material::AttachShaderFamily(v8, v9);
    std::unique_lock<Spectre::Engine::Mutex>::unique_lock<Spectre::Engine::Mutex>(
      (__int64)&v19,
      (Spectre::Engine::Mutex *)(a1 + 472));
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v14, a2);
    std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Emplace<std::weak_ptr<Spectre::Engine::Material>>(
      (__int64 *)(a1 + 480),
      (__int64)v18,
      &v14);
    if ( v15 )
      std::_Ref_count_base::_Decwref(v15);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v19);
  }
  v10 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(*a2 + 96LL, &v19);
  std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>((__int64 *)(*a2 + 216LL), v10);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  return a2;
}
