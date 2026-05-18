/*
 * XREFs of ??$GetComponents_Internal@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180011F58
 * Callers:
 *     ??$GetComponents@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180011F38 (--$GetComponents@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VLi.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$_Test_callable@V_lambda_38672d4837fba783512361a26dc8aa1f_@@@std@@YA_NAEBV_lambda_38672d4837fba783512361a26dc8aa1f_@@@Z @ 0x18001221C (--$_Test_callable@V_lambda_38672d4837fba783512361a26dc8aa1f_@@@std@@YA_NAEBV_lambda_38672d4837fb.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180013280 (-_Reallocate_exactly@-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@@V-$allocator@V-$shared_.c)
 *     ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C (-ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV-$function@$$A6AXAEBV-$shared_ptr@$$CBVSceneNode@Eng.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::Scene::GetComponents_Internal<Spectre::Engine::Light>(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::Light>>::_Reallocate_exactly(a2);
  v7 = 0LL;
  if ( (unsigned __int8)std::_Test_callable<_lambda_38672d4837fba783512361a26dc8aa1f_>() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_38672d4837fba783512361a26dc8aa1f_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v6[1] = a2;
    v7 = v6;
  }
  Spectre::Engine::Scene::ForEachNode(a1, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
