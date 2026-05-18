/*
 * XREFs of ??$GetComponents_Internal@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x18007C7F4
 * Callers:
 *     ??$GetComponents@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x18007C7D4 (--$GetComponents@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$vector@V-$shared_pt.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Reallocate_exactly@?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180013280 (-_Reallocate_exactly@-$vector@V-$shared_ptr@VLight@Engine@Spectre@@@std@@V-$allocator@V-$shared_.c)
 *     ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C (-ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV-$function@$$A6AXAEBV-$shared_ptr@$$CBVSceneNode@Eng.c)
 *     ??$_Test_callable@V_lambda_7184ac0b1d10aa8b036768733263c113_@@@std@@YA_NAEBV_lambda_7184ac0b1d10aa8b036768733263c113_@@@Z @ 0x18007C9C4 (--$_Test_callable@V_lambda_7184ac0b1d10aa8b036768733263c113_@@@std@@YA_NAEBV_lambda_7184ac0b1d10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::Scene::GetComponents_Internal<Spectre::Engine::LightProbe>(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD v8[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp-20h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::Light>>::_Reallocate_exactly((char **)a2);
  v9 = 0LL;
  if ( (unsigned __int8)std::_Test_callable<_lambda_7184ac0b1d10aa8b036768733263c113_>(v5, v4) )
  {
    v8[0] = &std::_Func_impl_no_alloc<_lambda_7184ac0b1d10aa8b036768733263c113_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v8[1] = a2;
    v9 = v8;
  }
  Spectre::Engine::Scene::ForEachNode(a1, (__int64)v8);
  if ( v9 )
  {
    v6 = v8;
    LOBYTE(v6) = v9 != v8;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v6);
  }
  return a2;
}
