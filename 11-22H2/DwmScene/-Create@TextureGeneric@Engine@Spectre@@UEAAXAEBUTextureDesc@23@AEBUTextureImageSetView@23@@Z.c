/*
 * XREFs of ?Create@TextureGeneric@Engine@Spectre@@UEAAXAEBUTextureDesc@23@AEBUTextureImageSetView@23@@Z @ 0x18008C740
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::TextureGeneric::Create(
        Spectre::Engine::TextureGeneric *this,
        const struct Spectre::Engine::TextureDesc *a2,
        const struct Spectre::Engine::TextureImageSetView *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v6, (__int64)"Deprecated code path");
  v3 = std::string::string(
         v5,
         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\"
                  "texturegeneric.cpp");
  Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v3, v4, (const char *)v6, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
