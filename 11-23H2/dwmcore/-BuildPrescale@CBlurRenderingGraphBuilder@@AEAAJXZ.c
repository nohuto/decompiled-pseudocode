/*
 * XREFs of ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800F0BE0
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800BCEF8 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800B444C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800B8AC4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B8BBC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x1800B94FC (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800BA588 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800BD39C (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800BD4BC (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800BD518 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800F0D78 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800F573C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C1888 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale(CBlurRenderingGraphBuilder *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  CRenderingTechniqueFragment *v5; // rax
  CPassthroughEffect *v6; // rcx
  __int64 v7; // rdi
  struct CShaderCache *ShaderCache; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rdx
  CRenderingTechniqueFragment *v17; // rdi
  int v19; // [rsp+38h] [rbp-19h] BYREF
  CRenderingTechniqueFragment *v20; // [rsp+40h] [rbp-11h] BYREF
  __int128 v21; // [rsp+48h] [rbp-9h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+58h] [rbp+7h] BYREF
  __int128 v23; // [rsp+60h] [rbp+Fh]
  __int64 (__fastcall ***v24)(); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  *(_QWORD *)&v21 = 0LL;
  v2 = DefaultHeap::Alloc(0x18uLL);
  v4 = (__int64)v2;
  if ( !v2 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x11u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  v2[3] = 0;
  v2[2] = 0;
  *(_QWORD *)v2 = &CPassthroughEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  *((_QWORD *)v2 + 2) = &CPassthroughEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
  *(_QWORD *)&v21 = v4;
  v5 = (CRenderingTechniqueFragment *)operator new(0x80uLL);
  v7 = (__int64)v5;
  if ( v5 )
  {
    ShaderCache = CPassthroughEffect::GetShaderCache(v6);
    v5 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                          v7,
                                          v4,
                                          (__int64)ShaderCache,
                                          0,
                                          0,
                                          0);
  }
  v20 = v5;
  CRenderingTechniqueFragment::AddIntermediateInput(v5, -1);
  v9 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v20, &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v9);
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v20);
LABEL_12:
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(&v21);
    return v10;
  }
  v11 = *(_QWORD *)this;
  *(_QWORD *)&v21 = *(_QWORD *)this + 1588LL;
  v12 = *(_QWORD *)(v11 + 520);
  v13 = dword_18033C488[5 * *(int *)(v11 + 1584)] == 3;
  v11 += 512LL;
  v14 = (v12 - *(_QWORD *)v11) >> 6;
  BYTE8(v21) = v13 + 1;
  HIDWORD(v21) = v19;
  v22 = off_1802CE4C8;
  v24 = &v22;
  v23 = v21;
  v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          (detail::liberal_expansion_policy *)v11,
          v14);
  *((_QWORD *)v15 + 7) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move((__int64)v15, (__int64)&v22);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy((__int64)&v22, v16);
  v17 = v20;
  if ( v20 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v20);
    operator delete(v17, 0x80uLL);
  }
  if ( v4 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v4);
  return 0LL;
}
