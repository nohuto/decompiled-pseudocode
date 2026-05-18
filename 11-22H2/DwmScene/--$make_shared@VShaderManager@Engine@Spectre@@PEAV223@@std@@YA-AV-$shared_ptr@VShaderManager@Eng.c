/*
 * XREFs of ??$make_shared@VShaderManager@Engine@Spectre@@PEAV223@@std@@YA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@$$QEAPEAVEngine@2Spectre@@@Z @ 0x18003056C
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z @ 0x18004E6B8 (--0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ShaderManager,Spectre::Engine::Engine *>(
        _QWORD *a1,
        struct Spectre::Engine::Engine **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx

  v4 = operator new(0x4918uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderManager>::`vftable';
    Spectre::Engine::ShaderManager::ShaderManager((Spectre::Engine::ShaderManager *)(v4 + 4), *a2);
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
