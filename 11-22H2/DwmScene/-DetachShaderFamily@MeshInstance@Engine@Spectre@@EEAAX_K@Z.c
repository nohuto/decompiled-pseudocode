/*
 * XREFs of ?DetachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_K@Z @ 0x18004B800
 * Callers:
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C9D0 (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEAAAEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CE64 (-at@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstance@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::MeshInstance::DetachShaderFamily(
        Spectre::Engine::MeshInstance *this,
        unsigned __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD *v4; // rbx
  std::_Ref_count_base *v5[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3) )
  {
    std::string::string(v7, (__int64)"Out of range");
    v2 = (unsigned int)std::string::string(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v2, v3, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v4 = (_QWORD *)std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at();
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v4 + 3, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v4 + 5, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v4 + 7, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v4 + 9, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
}
