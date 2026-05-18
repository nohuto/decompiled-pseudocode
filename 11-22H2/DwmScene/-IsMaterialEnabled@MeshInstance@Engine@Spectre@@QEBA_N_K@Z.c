/*
 * XREFs of ?IsMaterialEnabled@MeshInstance@Engine@Spectre@@QEBA_N_K@Z @ 0x18004BB70
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEBAAEBUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CEB0 (-at@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@_ea_18004CEB0.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::MeshInstance::IsMaterialEnabled(
        Spectre::Engine::MeshInstance *this,
        unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = (_QWORD *)((char *)this + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v2[1] - *v2) >> 3) )
  {
    std::string::string(v7, (__int64)"Out of range");
    v3 = (unsigned int)std::string::string(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v3, v4, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at(v2, a2) + 16);
}
