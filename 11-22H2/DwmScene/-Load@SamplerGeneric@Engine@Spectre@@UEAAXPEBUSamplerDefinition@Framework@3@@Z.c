/*
 * XREFs of ?Load@SamplerGeneric@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@@Z @ 0x18008B5D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::SamplerGeneric::Load(
        Spectre::Engine::SamplerGeneric *this,
        const struct Spectre::Framework::SamplerDefinition *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v5, (__int64)"Not implemented");
  v2 = std::string::string(
         v4,
         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\"
                  "samplergeneric.cpp");
  Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v2, v3, (const char *)v5, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
