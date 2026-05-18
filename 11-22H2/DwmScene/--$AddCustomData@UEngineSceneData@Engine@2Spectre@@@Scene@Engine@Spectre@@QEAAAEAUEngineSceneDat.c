/*
 * XREFs of ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC
 * Callers:
 *     ?CreateScene@Engine@1Spectre@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x1800332A4 (-CreateScene@Engine@1Spectre@@QEAA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001E3A4 (--0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ??$_Try_emplace@AEBVtype_index@std@@$$V@?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBVtype_index@1@@Z @ 0x18002F970 (--$_Try_emplace@AEBVtype_index@std@@$$V@-$map@Vtype_index@std@@V-$shared_ptr@USceneCustomData@En.c)
 *     ??$make_shared@UEngineSceneData@Engine@2Spectre@@$$V@std@@YA?AV?$shared_ptr@UEngineSceneData@Engine@2Spectre@@@0@XZ @ 0x180030018 (--$make_shared@UEngineSceneData@Engine@2Spectre@@$$V@std@@YA-AV-$shared_ptr@UEngineSceneData@Eng.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBVtype_index@2@@Z @ 0x180038644 (-count@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomData@Engine@Spectre@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Scene::AddCustomData<Spectre::Engine::Engine::EngineSceneData>(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rbx
  __int64 v4; // rdi
  std::_Ref_count_base *v5; // rcx
  void ***v7; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+28h] [rbp-21h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-19h]
  _QWORD v10[4]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp+Fh] BYREF

  v7 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v1 = a1 + 200;
  if ( std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::count(
         a1 + 200,
         &v7) )
  {
    std::string::string(
      v10,
      (__int64)"Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(pExceptionObject, (const char *)v10);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  std::make_shared<Spectre::Engine::Engine::EngineSceneData,>(&v8);
  v2 = *(_QWORD *)std::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>::_Try_emplace<std::type_index const &,>(
                    v1,
                    v10,
                    &v7);
  v3 = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v3 = v9;
  }
  v4 = v8;
  *(_QWORD *)(v2 + 40) = v8;
  v5 = *(std::_Ref_count_base **)(v2 + 48);
  *(_QWORD *)(v2 + 48) = v3;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return v4;
}
