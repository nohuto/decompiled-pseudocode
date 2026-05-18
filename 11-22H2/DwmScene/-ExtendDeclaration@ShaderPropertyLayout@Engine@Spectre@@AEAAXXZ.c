/*
 * XREFs of ?ExtendDeclaration@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ @ 0x180082BC4
 * Callers:
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyLayout::ExtendDeclaration(Spectre::Engine::ShaderPropertyLayout *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *((_DWORD *)this + 292) != 1 )
  {
    std::string::string(
      v4,
      (__int64)"ShaderPropertyLayout::ExtendDeclaration() -- this function must only be called when this layout is complete");
    v1 = std::string::string(
           v3,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v1,
      v2,
      (__int64)v4,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *((_DWORD *)this + 292) = 0;
}
