/*
 * XREFs of ?Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x18003183C
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ??0CBlurRenderingGraph@@AEAA@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800317BC (--0CBlurRenderingGraph@@AEAA@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800357A4 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x180053B78 (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBlurRenderingGraph::Create(
        enum D3D_FEATURE_LEVEL a1,
        const struct D2D_VECTOR_2F *a2,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3,
        struct CBlurRenderingGraph **a4)
{
  CBlurRenderingGraph *v8; // rax
  unsigned int v9; // ecx
  struct CBlurRenderingGraph *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  struct CBlurRenderingGraph *v15; // [rsp+30h] [rbp-28h] BYREF
  struct CBlurRenderingGraph *v16; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v8 = (CBlurRenderingGraph *)DefaultHeap::Alloc(0x630uLL);
  if ( v8 )
    v8 = CBlurRenderingGraph::CBlurRenderingGraph(v8, a2, a3);
  wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
    &v15,
    v8);
  v10 = v15;
  if ( v15 )
  {
    v17 = 0;
    v16 = v15;
    v11 = CBlurRenderingGraphBuilder::Build((CBlurRenderingGraphBuilder *)&v16, a1);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x73u, 0LL);
    }
    else
    {
      v15 = 0LL;
      *a4 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x6Fu, 0LL);
  }
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v15);
  return v13;
}
