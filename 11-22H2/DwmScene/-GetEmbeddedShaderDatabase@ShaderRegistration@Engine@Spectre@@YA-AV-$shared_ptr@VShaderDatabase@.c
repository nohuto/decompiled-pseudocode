/*
 * XREFs of ?GetEmbeddedShaderDatabase@ShaderRegistration@Engine@Spectre@@YA?AV?$shared_ptr@VShaderDatabase@Engine@Spectre@@@std@@W4EShaderPlatform@23@@Z @ 0x18007C14C
 * Callers:
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--GetOrCreate.c)
 */

_QWORD *__fastcall Spectre::Engine::ShaderRegistration::GetEmbeddedShaderDatabase(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rcx
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  v2 = (__int64 *)Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate(v7);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  v5 = v8;
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
