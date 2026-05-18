/*
 * XREFs of ?Load@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@4@@Z @ 0x1800D4B80
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall __noreturn Spectre::Engine::D3D11::SamplerD3D11::Load(
        Spectre::Engine::D3D11::SamplerD3D11 *this,
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
         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\samplerd3d11.cpp");
  Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v2, v3, (const char *)v5, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
