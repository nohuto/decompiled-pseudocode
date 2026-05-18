/*
 * XREFs of ?RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18001BF8C
 * Callers:
 *     ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreWorld@@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016A78 (--$MakeAndInitialize@VSpectreWorld@@V1@AEAV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreNode@@@WRL@Microsoft@@@012@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BAD0 (--$MakeAndInitialize@VSpectreNode@@V1@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std_ea_18001BAD0.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 */

__int64 __fastcall SpectreWorld::RuntimeClassInitialize(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *RootNode; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-30h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = a1 + 2;
  std::shared_ptr<Spectre::Engine::Light>::operator=(a1 + 2, a2);
  v4 = *v2;
  v5 = std::wstring::wstring(v15, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
  RootNode = (_QWORD *)Spectre::Engine::Scene::GetRootNode(v4, v13, v5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode>>(
         a1 + 4,
         RootNode);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v7 < 0 )
  {
    v8 = 33LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *v2;
  v11 = std::wstring::wstring(v15, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  v12 = (_QWORD *)Spectre::Engine::Scene::GetRootNode(v10, v13, v11);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode>>(
         a1 + 5,
         v12);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v7 < 0 )
  {
    v8 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
