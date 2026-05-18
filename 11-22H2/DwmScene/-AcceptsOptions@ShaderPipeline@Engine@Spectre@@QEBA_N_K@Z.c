/*
 * XREFs of ?AcceptsOptions@ShaderPipeline@Engine@Spectre@@QEBA_N_K@Z @ 0x180086A0C
 * Callers:
 *     ?GetPipeline@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_KW4EShaderModel@23@@Z @ 0x180060A74 (-GetPipeline@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@s.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Engine::ShaderPipeline::AcceptsOptions(Spectre::Engine::ShaderPipeline *this, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 == v3 )
    return 1;
  while ( v2 != v3 )
  {
    if ( (a2 & *v2) == *v2 && (a2 & v2[1]) == 0 )
      return 1;
    v2 += 2;
  }
  return 0;
}
