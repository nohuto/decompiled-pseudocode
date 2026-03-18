/*
 * XREFs of ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800BCEF8
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x1800F100C (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 * Callees:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800B8094 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800BD0DC (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800BD39C (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800BD4BC (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800BD518 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800EAE6C (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800F0BE0 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??1?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x180282978 (--1-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  _DWORD *i; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int ShaderBodies; // eax
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+30h] [rbp-29h]
  _QWORD v19[7]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4,
      v17);
    return v5;
  }
  v6 = *(_QWORD *)this;
  v18 = 0LL;
  v17 = 0LL;
  CGaussianKernel::GenerateTaps(&v17, 0LL);
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v17, 0LL);
  v7 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
  v19[0] = off_1802CE1C0;
  v20 = v19;
  v8 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
         v6 + 512,
         v7 >> 6);
  *(_QWORD *)(v8 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v8, v19);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v19);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 1576) - *(float *)(v6 + 1580)) & _xmm) > 0.0000011920929 )
  {
    LOBYTE(v9) = 1;
    *((_QWORD *)&v17 + 1) = v17;
    CGaussianKernel::GenerateTaps(&v17, v9);
  }
  else
  {
    for ( i = (_DWORD *)v17; i != *((_DWORD **)&v17 + 1); i += 3 )
    {
      v12 = i[1];
      i[1] = *i;
      *i = v12;
    }
  }
  LOBYTE(v10) = 1;
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v17, v10);
  v13 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
  v19[0] = off_1802CE1F0;
  v20 = v19;
  v14 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v6 + 512,
          v13 >> 6);
  *(_QWORD *)(v14 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v14, v19);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v19);
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v5 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)ShaderBodies,
      v17);
    std::vector<KernelTap>::~vector<KernelTap>(&v17);
    return v5;
  }
  if ( (_QWORD)v17 )
    std::_Deallocate<16,0>(v17, 4 * ((v18 - (__int64)v17) >> 2));
  return 0LL;
}
