/*
 * XREFs of ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Scene::SetNodeParent(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *Scene; // rax
  _QWORD *v12; // r11
  bool v13; // si
  _QWORD *v14; // rax
  __int64 v15; // r8
  Spectre::Engine::SceneNode **v16; // rax
  __int64 *v17; // rax
  _QWORD *v18; // r8
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-61h]
  _QWORD v23[6]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h] BYREF
  std::_Ref_count_base *v25; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v23[4] = a2;
  v23[5] = a3;
  if ( std::operator==<Spectre::Engine::Scene>(a2) )
  {
    std::string::string(&v24, (__int64)"Scene::SetNodeParent() - node must not be null");
    v6 = std::string::string(
           v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)&v24,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( std::operator==<Spectre::Engine::Scene>(a3) )
  {
    std::string::string(
      &v24,
      (__int64)"Scene::SetNodeParent() - new parent must not be null  (to remove a node from the scene graph use RemoveNode() instead");
    v9 = std::string::string(
           v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v9,
      v10,
      (__int64)&v24,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  Spectre::Engine::SceneNode::GetScene(*v8, &v24);
  Scene = (_QWORD *)Spectre::Engine::SceneNode::GetScene(*a2, &v21);
  v13 = std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(Scene, v12);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  if ( v13 )
  {
    std::string::string(&v24, (__int64)"Scene::SetNodeParent() - both nodes must belong to the same scene");
    v14 = std::string::string(
            v23,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v14,
      v15,
      (__int64)&v24,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v16 = (Spectre::Engine::SceneNode **)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                         &v24,
                                         a2);
  Spectre::Engine::Scene::RemoveNode(a1, v16);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v24, a3);
  v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v23,
          a2);
  Spectre::Engine::Scene::InsertNode(a1, v17, v18);
  v19 = (std::_Ref_count_base *)a2[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v20 = (std::_Ref_count_base *)a3[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}
