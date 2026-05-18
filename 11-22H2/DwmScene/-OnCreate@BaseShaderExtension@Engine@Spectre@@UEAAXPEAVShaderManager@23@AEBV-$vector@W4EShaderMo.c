/*
 * XREFs of ?OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18009A980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180017CDC (--4-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@Z @ 0x18004F6E0 (-CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?BeginShaderModel@ShaderFamily@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z @ 0x1800600B8 (-BeginShaderModel@ShaderFamily@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z.c)
 *     ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780 (-EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndShaderModel@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060900 (-EndShaderModel@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetShaderGroup@ShaderFamily@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18007F2BC (-SetShaderGroup@ShaderFamily@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::BaseShaderExtension::OnCreate(__int64 *a1, __int64 a2, int **a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  void **v11; // rax
  int *v12; // r15
  int *i; // rbx
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-31h]
  _QWORD v17[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64 *, _BYTE *))(*a1 + 184))(a1, v18);
  v6 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this((__int64)(a1 + 1), &v14);
  v7 = std::string::string(v17, (__int64)v18);
  v8 = Spectre::Engine::ShaderManager::CreateShaderFamily(a2, &v15, v7, v6);
  v9 = a1 + 7;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 7, v8);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v10 = *v9;
  v11 = (void **)(*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*a1 + 176))(a1, v17);
  Spectre::Engine::ShaderFamily::SetShaderGroup(v10, v11);
  std::vector<enum Spectre::Engine::EShaderModel>::operator=((_QWORD *)(*v9 + 528), (__int64)a3);
  (*(void (__fastcall **)(__int64 *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  v12 = a3[1];
  for ( i = *a3; i != v12; ++i )
  {
    Spectre::Engine::ShaderFamily::BeginShaderModel(*v9, *i);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 152))(a1, a2);
    Spectre::Engine::ShaderFamily::EndShaderModel((Spectre::Engine::ShaderFamily *)*v9);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 144))(a1, a2);
  Spectre::Engine::ShaderFamily::EndDeclaration((Spectre::Engine::ShaderFamily *)*v9);
  std::string::_Tidy_deallocate((__int64)v18);
}
