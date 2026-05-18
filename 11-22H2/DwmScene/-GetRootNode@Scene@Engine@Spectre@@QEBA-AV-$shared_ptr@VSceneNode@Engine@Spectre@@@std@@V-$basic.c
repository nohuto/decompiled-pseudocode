/*
 * XREFs of ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z @ 0x180018290 (-CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z.c)
 *     ?RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18001BF8C (-RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV-$basic_s.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::Scene::GetRootNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  std::_Ref_count_base *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-B8h]
  _QWORD v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v18[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v20[4]; // [rsp+110h] [rbp+10h] BYREF

  v16[4] = a3;
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v6 = (std::_Ref_count_base *)std::wstring::wstring(v15, (__int64)a3);
  Spectre::Engine::Scene::GetLayer(a1, &v13, v6);
  if ( std::operator==<Spectre::Engine::Scene>(&v13) )
  {
    v7 = Spectre::Utils::LexicalCast<std::string,std::wstring>(v18, a3);
    v8 = std::operator+<char>(v19, (__int64)"Scene::GetRootNode() - layer ", v7);
    v9 = std::operator+<char>(v20, v8, (__int64)" not found");
    v10 = std::string::string(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v10,
      v11,
      (__int64)v9,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  Spectre::Utils::IConfigurationManager::GetParent(v13, a2);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  std::wstring::_Tidy_deallocate((__int64)a3);
  return a2;
}
