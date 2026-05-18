/*
 * XREFs of ?OnPresentFrameComplete@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ @ 0x1800534F0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::RenderDeviceGeneric::OnPresentFrameComplete(
        Spectre::Engine::RenderDeviceGeneric *this)
{
  unsigned int v1; // eax
  int v2; // r8d
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v4, (__int64)"Not implemented");
  v1 = (unsigned int)std::string::string(
                       v3,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\renderdevicegeneric.cpp");
  Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v1, v2, (unsigned int)v4, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
