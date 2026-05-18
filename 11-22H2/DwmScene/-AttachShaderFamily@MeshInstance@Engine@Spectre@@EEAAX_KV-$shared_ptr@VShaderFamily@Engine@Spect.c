/*
 * XREFs of ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250
 * Callers:
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C9D0 (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEAAAEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CE64 (-at@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstance@.c)
 *     ?GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C50 (-GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV-$shared_ptr@VShaderPropertyLayout@Engin.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?AttachDevices@Component@Engine@Spectre@@QEAAXXZ @ 0x1800810A0 (-AttachDevices@Component@Engine@Spectre@@QEAAXXZ.c)
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::MeshInstance::AttachShaderFamily(
        Spectre::Engine::Component *this,
        unsigned __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rdi
  _QWORD *PropertyLayout; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rax
  std::_Ref_count_base *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-79h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-71h]
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-61h]
  __int64 v21; // [rsp+50h] [rbp-59h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-51h]
  _QWORD *v23; // [rsp+60h] [rbp-49h]
  __int64 v24; // [rsp+68h] [rbp-41h] BYREF
  std::_Ref_count_base *v25; // [rsp+70h] [rbp-39h]
  __int64 v26; // [rsp+88h] [rbp-21h] BYREF
  std::_Ref_count_base *v27; // [rsp+90h] [rbp-19h]
  _BYTE pExceptionObject[56]; // [rsp+A8h] [rbp-1h] BYREF

  v23 = a3;
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3) )
  {
    std::string::string(&v26, (__int64)"Out of range");
    v5 = (unsigned int)std::string::string(
                         &v24,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v5, v6, (unsigned int)&v26, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at();
  PropertyLayout = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(*a3, 0LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v26,
    PropertyLayout);
  v9 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(v26, &v21);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7 + 3, v9);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v10 = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(*a3, 3LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v21, v10);
  v11 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(v21, &v19);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7 + 5, v11);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v12 = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(*a3, 7LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v19, v12);
  v13 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(v19, &v17);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7 + 7, v13);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  v14 = (_QWORD *)Spectre::Engine::ShaderFamily::GetPropertyLayout(*a3, 8LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v17, v14);
  v15 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(v17, &v24);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7 + 9, v15);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  Spectre::Engine::Component::AttachDevices(this);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  v16 = (std::_Ref_count_base *)a3[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
