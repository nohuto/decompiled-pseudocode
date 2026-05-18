/*
 * XREFs of ?PresentFrame@RenderDeviceGeneric@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@5@11@Z @ 0x180053570
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __noreturn Spectre::Engine::RenderDeviceGeneric::PresentFrame()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v3, (__int64)"Not implemented");
  v0 = (unsigned int)std::string::string(
                       v2,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\renderdevicegeneric.cpp");
  Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
