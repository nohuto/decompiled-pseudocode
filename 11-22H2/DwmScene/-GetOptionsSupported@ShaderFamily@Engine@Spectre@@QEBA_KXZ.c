/*
 * XREFs of ?GetOptionsSupported@ShaderFamily@Engine@Spectre@@QEBA_KXZ @ 0x180060A68
 * Callers:
 *     ?GetPipeline@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_KW4EShaderModel@23@@Z @ 0x180060A74 (-GetPipeline@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::ShaderFamily::GetOptionsSupported(Spectre::Engine::ShaderFamily *this)
{
  return *((_QWORD *)this + 8);
}
