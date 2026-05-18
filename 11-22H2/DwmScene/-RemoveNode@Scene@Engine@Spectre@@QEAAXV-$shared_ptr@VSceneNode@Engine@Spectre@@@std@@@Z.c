/*
 * XREFs of ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z @ 0x180014FF0 (-RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110 (-GetNodeLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$sha.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::Scene::RemoveNode(__int64 a1, Spectre::Engine::SceneNode **a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *Parent; // rax
  bool v12; // di
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  volatile __int32 *v16; // rax
  __int32 v17; // r8d
  int v18; // eax
  _DWORD *v19; // rdx
  std::_Ref_count_base *v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v24; // [rsp+50h] [rbp-B0h]
  Spectre::Engine::SceneNode **v25; // [rsp+68h] [rbp-98h]
  __int64 pExceptionObject[7]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[7]; // [rsp+C8h] [rbp-38h] BYREF

  v25 = a2;
  if ( std::operator==<Spectre::Engine::Scene>(a2) )
  {
    std::string::string(v27, (__int64)"Scene::RemoveNode() - node must not be null");
    v5 = std::string::string(
           &v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v5,
      v6,
      (__int64)v27,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v27,
         v4);
  Spectre::Engine::Scene::GetNodeLayer(a1, &v21, (__int64)v7);
  if ( std::operator==<Spectre::Engine::Scene>(&v21) )
  {
    std::string::string(pExceptionObject, (__int64)"Scene::RemoveNode() - node is not in any layer");
    v8 = std::string::string(
           &v23,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      v28,
      (__int64)v8,
      v9,
      (__int64)pExceptionObject,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  v10 = v21;
  Parent = (_QWORD *)Spectre::Utils::IConfigurationManager::GetParent(v21, &v23);
  v12 = std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(a2, Parent);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  if ( v12 )
  {
    std::string::string(
      pExceptionObject,
      (__int64)"Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v13 = std::string::string(
            &v23,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      v28,
      (__int64)v13,
      v14,
      (__int64)pExceptionObject,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(a1 + 16));
  LODWORD(pExceptionObject[0]) = 1;
  std::_Atomic_reinterpret_as<long,long>((unsigned int *)pExceptionObject);
  v16 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v15);
  while ( _InterlockedExchange(v16, v17) )
    ;
  *(_OWORD *)pExceptionObject = 0LL;
  Spectre::Engine::SceneNode::SetParent(*a2, pExceptionObject);
  LODWORD(pExceptionObject[0]) = 0;
  std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v10 + 76);
  v18 = std::_Atomic_reinterpret_as<int,long>((unsigned int *)pExceptionObject);
  *v19 = v18;
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v20 = a2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}
