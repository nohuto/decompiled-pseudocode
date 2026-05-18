/*
 * XREFs of ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0
 * Callers:
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110 (-GetNodeLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$sha.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::Scene::InsertNode(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *Scene; // rax
  bool v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  volatile __int32 *v19; // rax
  __int32 v20; // r8d
  _QWORD *Parent; // rax
  bool v22; // si
  __int64 *v23; // rax
  Spectre::Engine::SceneNode *v24; // r8
  int v25; // eax
  _DWORD *v26; // rdx
  __int64 *v27; // rax
  Spectre::Engine::SceneNode *v28; // r8
  std::_Ref_count_base *v29; // rcx
  std::_Ref_count_base *v30; // rcx
  unsigned int v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v38; // [rsp+88h] [rbp-78h]
  __int64 *v39; // [rsp+90h] [rbp-70h]
  _QWORD *v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 pExceptionObject; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v45; // [rsp+D8h] [rbp-28h]
  _QWORD v46[7]; // [rsp+108h] [rbp+8h] BYREF

  v39 = a2;
  v40 = a3;
  if ( std::operator==<Spectre::Engine::Scene>(a2) )
  {
    std::string::string(v43, (__int64)"Scene::InsertNode() - node must not be null");
    v6 = std::string::string(
           v34,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      &pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v43,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  if ( std::operator==<Spectre::Engine::Scene>(a3) )
  {
    std::string::string(
      v43,
      (__int64)"Scene::InsertNode() - new parent must not be null (to remove a node from the scene graph use RemoveNode() instead");
    v8 = std::string::string(
           v34,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      &pExceptionObject,
      (__int64)v8,
      v9,
      (__int64)v43,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  Scene = (_QWORD *)Spectre::Engine::SceneNode::GetScene(*a2, &pExceptionObject);
  v11 = std::operator!=<Spectre::Engine::Scene>(Scene);
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  if ( v11 )
  {
    std::string::string(
      v43,
      (__int64)"Scene::InsertNode() - node must not be already attached to a scene (to insert this node into the parents "
               "scene use RemoveNode() first");
    v12 = std::string::string(
            v34,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      &pExceptionObject,
      (__int64)v12,
      v13,
      (__int64)v43,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  v14 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v43,
          a2);
  Spectre::Engine::Scene::GetNodeLayer(a1, &v37, (__int64)v14);
  v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v34,
          a3);
  Spectre::Engine::Scene::GetNodeLayer(a1, &v35, (__int64)v15);
  if ( std::operator!=<Spectre::Engine::Scene>(&v37) )
  {
    std::string::string(&pExceptionObject, (__int64)"Scene::InsertNode() - the node must not already be in a layer.");
    v16 = std::string::string(
            v43,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      v46,
      (__int64)v16,
      v17,
      (__int64)&pExceptionObject,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)v46;
  }
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(a1 + 16));
  if ( std::operator!=<Spectre::Engine::Scene>(&v35) )
  {
    v32 = v35 + 76;
    v31 = 1;
    std::_Atomic_reinterpret_as<long,long>(&v31);
    v19 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v18);
    while ( _InterlockedExchange(v19, v20) )
      ;
    Parent = Spectre::Engine::SceneNode::GetParent((Spectre::Engine::SceneNode *)*a2, &v41);
    v22 = std::operator!=<Spectre::Engine::Scene>(Parent);
    if ( v42 )
      std::_Ref_count_base::_Decref(v42);
    if ( v22 )
    {
      v33 = 0LL;
      Spectre::Engine::SceneNode::SetParent((Spectre::Engine::SceneNode *)*a2, (__int64 *)&v33);
    }
    v23 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v34,
            a3);
    Spectre::Engine::SceneNode::SetParent(v24, v23);
    v31 = 0;
    std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v32);
    v25 = std::_Atomic_reinterpret_as<int,long>(&v31);
    *v26 = v25;
  }
  else
  {
    v27 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v43,
            a3);
    Spectre::Engine::SceneNode::SetParent(v28, v27);
  }
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  v29 = (std::_Ref_count_base *)a2[1];
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v30 = (std::_Ref_count_base *)a3[1];
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
}
