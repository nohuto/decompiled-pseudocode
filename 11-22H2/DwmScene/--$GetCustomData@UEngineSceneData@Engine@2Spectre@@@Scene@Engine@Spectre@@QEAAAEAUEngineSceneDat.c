/*
 * XREFs of ??$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DF5C
 * Callers:
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001E3A4 (--0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Find@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002EB18 (--$_Find@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomDa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::Scene::GetCustomData<Spectre::Engine::Engine::EngineSceneData>(__int64 a1)
{
  __int64 v2; // rax
  void ***v4; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v4 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v2 = std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Find<std::type_index>(
         a1 + 200,
         &v4);
  if ( v2 == *(_QWORD *)(a1 + 200) )
  {
    std::string::string(
      v5,
      (__int64)"Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called be"
               "fore GetCustomData<T>()");
    Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(pExceptionObject, (const char *)v5);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v2 + 40);
}
