/*
 * XREFs of ??$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062770
 * Callers:
 *     ??$GetComponents@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062750 (--$GetComponents@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C (-ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV-$function@$$A6AXAEBV-$shared_ptr@$$CBVSceneNode@Eng.c)
 *     ??$_Test_callable@V_lambda_750ab9e5186891eb31094975a637ff02_@@@std@@YA_NAEBV_lambda_750ab9e5186891eb31094975a637ff02_@@@Z @ 0x180062E90 (--$_Test_callable@V_lambda_750ab9e5186891eb31094975a637ff02_@@@std@@YA_NAEBV_lambda_750ab9e51868.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x18006EA00 (-_Reallocate_exactly@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::Scene::GetComponents_Internal<Spectre::Engine::Camera>(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Reallocate_exactly(a2);
  v7 = 0LL;
  if ( (unsigned __int8)std::_Test_callable<_lambda_750ab9e5186891eb31094975a637ff02_>() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_750ab9e5186891eb31094975a637ff02_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v6[1] = a2;
    v7 = v6;
  }
  Spectre::Engine::Scene::ForEachNode(a1, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
