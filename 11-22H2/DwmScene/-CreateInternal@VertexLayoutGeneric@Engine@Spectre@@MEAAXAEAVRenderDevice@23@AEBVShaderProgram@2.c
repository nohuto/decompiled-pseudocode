/*
 * XREFs of ?CreateInternal@VertexLayoutGeneric@Engine@Spectre@@MEAAXAEAVRenderDevice@23@AEBVShaderProgram@23@@Z @ 0x180053060
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::VertexLayoutGeneric::CreateInternal(
        Spectre::Engine::VertexLayoutGeneric *this,
        struct Spectre::Engine::RenderDevice *a2,
        const struct Spectre::Engine::ShaderProgram *a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v6, (__int64)"Deprecated code path");
  v3 = (unsigned int)std::string::string(
                       v5,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\In"
                                "c\\NativeRenderer\\Resources\\VertexLayoutGeneric.h");
  Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v3, v4, (unsigned int)v6, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
