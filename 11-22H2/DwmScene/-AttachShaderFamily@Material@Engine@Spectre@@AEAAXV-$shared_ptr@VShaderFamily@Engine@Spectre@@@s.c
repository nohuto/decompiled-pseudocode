/*
 * XREFs of ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188
 * Callers:
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4 (-GetExtension@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C50 (-GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV-$shared_ptr@VShaderPropertyLayout@Engin.c)
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Material::AttachShaderFamily(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *PropertyLayout; // rax
  __int64 *v6; // rax
  _QWORD *Extension; // rax
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-10h]

  v4 = a1 + 17;
  std::shared_ptr<Spectre::Engine::Light>::operator=(a1 + 17, a2);
  PropertyLayout = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(*a2, 2LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v10,
    PropertyLayout);
  v6 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(v10, &v12);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 15, v6);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Extension = (_QWORD *)Spectre::Engine::ShaderFamily::GetExtension(*v4, &v12);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*Extension + 16LL))(*Extension, a1);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v8 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)(a1 + 12), &v12);
  std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(a1 + 27, v8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
