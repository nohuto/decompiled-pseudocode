/*
 * XREFs of ?CopyRenderTargetPixels@RenderDeviceGeneric@Engine@Spectre@@UEAA_NAEAUScreenCapture@23@AEAVIRenderOutput@23@AEAVFrameBuffer@23@@Z @ 0x180052FF0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::RenderDeviceGeneric::CopyRenderTargetPixels(
        Spectre::Engine::RenderDeviceGeneric *this,
        struct Spectre::Engine::ScreenCapture *a2,
        struct Spectre::Engine::IRenderOutput *a3,
        struct Spectre::Engine::FrameBuffer *a4)
{
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v7, (__int64)"Not implemented");
  v4 = (unsigned int)std::string::string(
                       v6,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\renderdevicegeneric.cpp");
  Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
