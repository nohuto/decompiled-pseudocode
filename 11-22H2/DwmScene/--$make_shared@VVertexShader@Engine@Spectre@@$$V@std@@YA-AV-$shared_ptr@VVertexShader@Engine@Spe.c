/*
 * XREFs of ??$make_shared@VVertexShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VVertexShader@Engine@Spectre@@@0@XZ @ 0x18004E544
 * Callers:
 *     ??$CreateResource@VVertexShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D3B8 (--$CreateResource@VVertexShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VVertex.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z @ 0x18008A82C (--0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::VertexShader,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::VertexShader>::`vftable';
    Spectre::Engine::Shader::Shader(v2 + 4, 1LL);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::VertexShader::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  if ( v3 != (_DWORD *)-16LL )
  {
    v4 = *((_QWORD *)v3 + 15);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement(v3 + 2);
      v5 = (volatile signed __int32 *)a1[1];
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 )
      {
        v6 = v3 + 4;
        v7 = a1[1];
        _InterlockedIncrement(v5 + 3);
      }
      *((_QWORD *)v3 + 14) = v6;
      v8 = (std::_Ref_count_base *)*((_QWORD *)v3 + 15);
      *((_QWORD *)v3 + 15) = v7;
      if ( v8 )
        std::_Ref_count_base::_Decwref(v8);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
