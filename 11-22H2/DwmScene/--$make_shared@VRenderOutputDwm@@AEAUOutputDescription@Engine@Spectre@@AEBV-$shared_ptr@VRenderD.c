/*
 * XREFs of ??$make_shared@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YA?AV?$shared_ptr@VRenderOutputDwm@@@0@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK33AEBM@Z @ 0x180017354
 * Callers:
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Construct_in_place@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YAXAEAVRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK44AEBM@Z @ 0x180016CC8 (--$_Construct_in_place@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV-$shared_ptr@.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<RenderOutputDwm,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
        _QWORD *a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  std::_Ref_count_base *v18; // rcx

  v11 = operator new(0x6C8uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_OWORD *)v11 = 0LL;
    v11[2] = 1;
    v11[3] = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj2<RenderOutputDwm>::`vftable';
    std::_Construct_in_place<RenderOutputDwm,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
      (__int64)(v11 + 4),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12 + 4;
  *a1 = v12 + 4;
  a1[1] = v12;
  if ( v12 != (_DWORD *)-16LL )
  {
    v14 = *((_QWORD *)v12 + 11);
    if ( !v14 || !*(_DWORD *)(v14 + 8) )
    {
      if ( v12 )
        _InterlockedIncrement(v12 + 2);
      v15 = (volatile signed __int32 *)a1[1];
      v16 = 0LL;
      v17 = 0LL;
      if ( v15 )
      {
        v16 = v13;
        v17 = a1[1];
        _InterlockedIncrement(v15 + 3);
      }
      *((_QWORD *)v13 + 8) = v16;
      v18 = (std::_Ref_count_base *)*((_QWORD *)v13 + 9);
      *((_QWORD *)v13 + 9) = v17;
      if ( v18 )
        std::_Ref_count_base::_Decwref(v18);
      if ( v15 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
    }
  }
  return a1;
}
