/*
 * XREFs of ??$GetComponent@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x180016288
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$_Test_callable@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@@std@@YA_NAEBV_lambda_e4f8b105d577d0521f3737a824532f0c_@@@Z @ 0x180017088 (--$_Test_callable@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@@std@@YA_NAEBV_lambda_e4f8b105d577.c)
 *     ?ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6A_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180040EE4 (-ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV-$function@$$A6A_NAEBV-$shared_ptr@VSceneNode@Engi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::Scene::GetComponent<Spectre::Engine::LightProbe>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD v11[5]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v12[7]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v13; // [rsp+98h] [rbp+2Fh]

  v11[4] = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = std::wstring::wstring(v11, a3);
  v13 = 0LL;
  if ( (unsigned __int8)std::_Test_callable<_lambda_e4f8b105d577d0521f3737a824532f0c_>(v8, v7, v6) )
  {
    v12[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
    v12[1] = a2;
    v13 = v12;
  }
  Spectre::Engine::Scene::ForEachNodeIf(a1, v12);
  if ( v13 )
  {
    v9 = v12;
    LOBYTE(v9) = v13 != v12;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v9);
  }
  std::wstring::_Tidy_deallocate(a3);
  return a2;
}
