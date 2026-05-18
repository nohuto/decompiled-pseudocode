/*
 * XREFs of ?CopyProgram@ShaderProgramBufferRef@ShaderRegistration@Engine@Spectre@@QEBA?AVShaderProgram@34@XZ @ 0x18007C12C
 * Callers:
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderRegistration::ShaderProgramBufferRef::CopyProgram(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a2;
  *(_OWORD *)(a2 + 24) = *a1;
  return result;
}
