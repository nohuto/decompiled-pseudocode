/*
 * XREFs of ?CreateSampler@SamplerGeneric@Engine@Spectre@@UEAAXV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@std@@@Z @ 0x18008B550
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=2
void __noreturn Spectre::Engine::SamplerGeneric::CreateSampler()
{
  _QWORD *v0; // rax
  __int64 v1; // r8
  _QWORD v2[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  std::string::string(v3, (__int64)"Deprecated code path");
  v0 = std::string::string(
         v2,
         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\"
                  "samplergeneric.cpp");
  Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v0, v1, (const char *)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
