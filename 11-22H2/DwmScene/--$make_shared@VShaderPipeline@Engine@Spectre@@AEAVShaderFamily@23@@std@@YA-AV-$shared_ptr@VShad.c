/*
 * XREFs of ??$make_shared@VShaderPipeline@Engine@Spectre@@AEAVShaderFamily@23@@std@@YA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@AEAVShaderFamily@Engine@Spectre@@@Z @ 0x18005F690
 * Callers:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ShaderPipeline@Engine@Spectre@@QEAA@AEAVShaderFamily@12@@Z @ 0x18008662C (--0ShaderPipeline@Engine@Spectre@@QEAA@AEAVShaderFamily@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ShaderPipeline,Spectre::Engine::ShaderFamily &>(
        _QWORD *a1,
        struct Spectre::Engine::ShaderFamily *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx

  v4 = operator new(0x2A0uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPipeline>::`vftable';
    Spectre::Engine::ShaderPipeline::ShaderPipeline((Spectre::Engine::ShaderPipeline *)(v4 + 4), a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 4;
  *a1 = v5 + 4;
  a1[1] = v5;
  if ( v5 != (_DWORD *)-16LL )
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v5 )
        _InterlockedIncrement(v5 + 2);
      v8 = (volatile signed __int32 *)a1[1];
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 )
      {
        v9 = v6;
        v10 = a1[1];
        _InterlockedIncrement(v8 + 3);
      }
      *v6 = v9;
      v11 = (std::_Ref_count_base *)v6[1];
      v6[1] = v10;
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  return a1;
}
