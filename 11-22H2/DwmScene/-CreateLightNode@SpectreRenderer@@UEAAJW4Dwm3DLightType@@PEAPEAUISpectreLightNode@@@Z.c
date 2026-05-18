/*
 * XREFs of ?CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z @ 0x180018290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreLightNode@@@WRL@Microsoft@@@012@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180016530 (--$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV-$shared_ptr@VS_ea_180016530.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetDefaultScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180034098 (-GetDefaultScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SpectreRenderer::CreateLightNode(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 RootNode; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  Spectre::Engine::SceneNode *v11; // [rsp+20h] [rbp-60h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-48h]
  _BYTE v15[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a2;
  Spectre::Engine::Engine::GetDefaultScene(*(_QWORD *)(a1 + 56), &v13);
  v4 = v13;
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v13 + 16));
  v5 = std::wstring::wstring(v17, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
  RootNode = Spectre::Engine::Scene::GetRootNode(v4, v16, v5);
  Spectre::Engine::Scene::AddNode(v4, &v11, -1LL, RootNode);
  v19 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SpectreLightNode,SpectreLightNode,enum Dwm3DLightType &,std::shared_ptr<Spectre::Engine::SceneNode> &>(
         &v19,
         &v20,
         &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v19;
    v19 = 0LL;
    *a3 = v10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v15);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v15);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return v8;
  }
}
