/*
 * XREFs of ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ @ 0x1800451F0 (--1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ.c)
 *     ?AddGlobalProperty@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18004F194 (-AddGlobalProperty@ShaderManager@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDef.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetName@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18008341C (-SetName@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ShaderManager::Startup(Spectre::Engine::ShaderManager *this)
{
  __int64 *v2; // rax
  Spectre::Engine::ShaderPropertyLayout **v3; // rsi
  Spectre::Engine::ShaderPropertyLayout *v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // [rsp+28h] [rbp-19h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-11h]
  _BYTE v9[64]; // [rsp+48h] [rbp+7h] BYREF

  v2 = Spectre::Engine::ShaderManager::CreatePropertyLayout((__int64)this, &v7, 1u);
  v3 = (Spectre::Engine::ShaderPropertyLayout **)((char *)this + 18632);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 2329, v2);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v4 = *v3;
  std::string::string(&v7, (__int64)"Global");
  Spectre::Engine::ShaderPropertyLayout::SetName(v4, &v7);
  std::string::_Tidy_deallocate((__int64)&v7);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(*v3);
  v5 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(*v3, &v7);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 2331, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = std::string::string(&v7, (__int64)"Global/RenderTargetSize");
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v9, (__int64)v6, 5);
  Spectre::Engine::ShaderManager::AddGlobalProperty((__int64)this);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v9);
}
