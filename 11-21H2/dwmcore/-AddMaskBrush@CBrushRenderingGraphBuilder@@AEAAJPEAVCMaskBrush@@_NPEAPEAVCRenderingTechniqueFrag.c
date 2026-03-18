/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800EE838
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800366EC (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800367A8 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800367E0 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EE9C4 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r15
  CRenderingTechniqueFragment **v5; // r14
  __int64 *v6; // rbx
  __int64 v9; // rcx
  int v10; // edi
  CRenderingTechniqueFragment *v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  struct CRenderingTechniqueFragment *v14; // r8
  CRenderingTechniqueFragment ***v15; // rdx
  __int64 *v16; // rax
  CRenderingTechniqueFragment *v17; // rsi
  __int64 v19; // rcx
  CRenderingTechniqueFragment *v20; // rsi
  struct CRenderingTechniqueFragment *v21; // r8
  CRenderingTechniqueFragment ***v22; // rdx
  CRenderingTechniqueFragment *v23; // rdi
  CRenderingTechniqueFragment *v24; // rsi
  CRenderingTechniqueFragment *v25; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v26; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v27; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+48h] [rbp-8h]
  CRenderingTechniqueFragment *v29; // [rsp+98h] [rbp+48h] BYREF
  struct CRenderingTechniqueFragment **v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v4 = (struct CBrush *)*((_QWORD *)a2 + 12);
  v5 = (CRenderingTechniqueFragment **)*((_QWORD *)a2 + 11);
  v6 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  if ( !*((_BYTE *)v4 + 80) )
    goto LABEL_6;
  v27 = 0LL;
  v26 = &v25;
  LOBYTE(v28) = 1;
  v10 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v27);
  if ( (_BYTE)v28 )
  {
    v11 = *v26;
    *v26 = v27;
    if ( v11 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
      operator delete(v11, 0x80uLL);
    }
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v10, 0x15Cu);
  }
  else
  {
LABEL_6:
    if ( !v5 )
    {
      std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
        &v29,
        &v25);
      v6 = (__int64 *)v29;
      goto LABEL_14;
    }
    v12 = (__int64 *)DefaultHeap::Alloc(0x80uLL);
    if ( v12 )
    {
      *v12 = 0LL;
      v12[2] = 0LL;
      v12[3] = 0LL;
      v6 = v12;
      v12[4] = 0LL;
      v12[5] = 0LL;
      v12[6] = 0LL;
      v12[1] = 0LL;
      v12[7] = 0LL;
      v12[8] = 0LL;
      v12[9] = 0LL;
      v12[10] = 0LL;
      v12[14] = 0LL;
      *((_BYTE *)v12 + 120) = a3;
      v14 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        v15 = (CRenderingTechniqueFragment ***)v12[5];
        v27 = v14;
        if ( v15 == (CRenderingTechniqueFragment ***)v12[6] )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            v12 + 4,
            (__int64)v15,
            &v26);
        }
        else
        {
          *v15 = v26;
          v15[1] = (CRenderingTechniqueFragment **)v14;
          v12[5] += 16LL;
          v27 = 0LL;
        }
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v27);
      }
      else
      {
        v26 = (CRenderingTechniqueFragment **)v4;
        v27 = 0LL;
        v28 = 0;
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          this,
          (struct CRenderingTechniqueFragment *)v12,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v26);
      }
      v27 = 0LL;
      if ( !*((_BYTE *)v5 + 80) )
      {
        v26 = v5;
        v28 = 0;
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          this,
          (struct CRenderingTechniqueFragment *)v6,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v26);
LABEL_14:
        v16 = v6;
        v6 = 0LL;
        v10 = 0;
        *v30 = (struct CRenderingTechniqueFragment *)v16;
        goto LABEL_15;
      }
      v29 = 0LL;
      v26 = &v29;
      LOBYTE(v28) = 1;
      v10 = CBrushRenderingGraphBuilder::AddBrush(this, (struct CBrush *)v5, a3, &v27);
      if ( (_BYTE)v28 )
      {
        v20 = *v26;
        *v26 = v27;
        if ( v20 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v20);
          operator delete(v20, 0x80uLL);
        }
      }
      if ( v10 >= 0 )
      {
        v21 = v29;
        v29 = 0LL;
        v22 = (CRenderingTechniqueFragment ***)v6[5];
        v27 = v21;
        if ( v22 == (CRenderingTechniqueFragment ***)v6[6] )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            v6 + 4,
            (__int64)v22,
            &v26);
        }
        else
        {
          *v22 = v26;
          v22[1] = (CRenderingTechniqueFragment **)v21;
          v6[5] += 16LL;
          v27 = 0LL;
        }
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v27);
        v23 = v29;
        if ( v29 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v29);
          operator delete(v23, 0x80uLL);
        }
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v10, 0x176u);
      v24 = v29;
      if ( v29 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v29);
        operator delete(v24, 0x80uLL);
      }
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x162u);
    }
  }
LABEL_15:
  v17 = v25;
  if ( v25 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v25);
    operator delete(v17, 0x80uLL);
  }
  if ( v6 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment((CRenderingTechniqueFragment *)v6);
    operator delete(v6, 0x80uLL);
  }
  return (unsigned int)v10;
}
