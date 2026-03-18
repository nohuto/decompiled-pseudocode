/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036214
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180034FA0 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180036148 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800366EC (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800367A8 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800367E0 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800369F8 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036AF0 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180037300 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E8974 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800ECD2C (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EE9C4 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        CBrushRenderingGraphBuilder *this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  CRenderingTechniqueFragment *v6; // rbx
  __int64 v7; // r14
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v10; // r12
  struct _TP_WORK *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r14
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // r13
  unsigned int v17; // r15d
  int v18; // edi
  int v19; // r12d
  bool v20; // si
  void *v21; // rax
  unsigned int v22; // ecx
  CRenderingTechniqueFragment *v23; // rsi
  CRenderingTechniqueFragment *v24; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rax
  struct CBrush *v31; // rdi
  struct CRenderingTechniqueFragment *v32; // rax
  int v33; // edi
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  _DWORD *v40; // rcx
  CRenderingTechniqueFragment *v41; // rbx
  bool v42; // r8
  unsigned int v43; // ecx
  CRenderingTechniqueFragment *v44; // r12
  CRenderingTechniqueFragment *v45; // r8
  _QWORD *v46; // rdx
  CRenderingTechniqueFragment *v47; // rdi
  __int64 v48; // r8
  _QWORD *v49; // rdx
  _DWORD *v50; // rcx
  CRenderingTechniqueFragment *v51; // rdi
  CRenderingTechniqueFragment *v52; // rsi
  int v53; // [rsp+30h] [rbp-B1h]
  bool v54; // [rsp+38h] [rbp-A9h]
  char v55; // [rsp+39h] [rbp-A8h] BYREF
  unsigned int v56; // [rsp+3Ch] [rbp-A5h]
  const struct Windows::UI::Composition::ICompiledEffect *v57; // [rsp+40h] [rbp-A1h]
  __int64 v58; // [rsp+48h] [rbp-99h]
  CRenderingTechniqueFragment *v59; // [rsp+50h] [rbp-91h] BYREF
  CRenderingTechniqueFragment *v60; // [rsp+58h] [rbp-89h] BYREF
  CRenderingTechniqueFragment **v61; // [rsp+60h] [rbp-81h] BYREF
  struct CRenderingTechniqueFragment *v62; // [rsp+68h] [rbp-79h] BYREF
  int v63; // [rsp+70h] [rbp-71h]
  unsigned int v64; // [rsp+78h] [rbp-69h]
  int v65; // [rsp+7Ch] [rbp-65h]
  int v66; // [rsp+80h] [rbp-61h] BYREF
  unsigned int v67; // [rsp+84h] [rbp-5Dh]
  struct CRenderingTechniqueFragment *v68; // [rsp+88h] [rbp-59h]
  __int64 v69; // [rsp+90h] [rbp-51h] BYREF
  __int64 v70; // [rsp+98h] [rbp-49h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-41h] BYREF
  CRenderingTechniqueFragment *v72; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-31h]
  __int64 v74; // [rsp+B8h] [rbp-29h]
  int v75; // [rsp+C0h] [rbp-21h]
  CRenderingTechniqueFragment *v76; // [rsp+C8h] [rbp-19h] BYREF
  int v77; // [rsp+D0h] [rbp-11h]
  CRenderingTechniqueFragment *v78; // [rsp+D8h] [rbp-9h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-1h] BYREF
  __int64 v80; // [rsp+F0h] [rbp+Fh]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 12);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)v4 + 10) + 48LL);
  v74 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 10);
  v10 = CompiledEffectNoRef;
  v57 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 56);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v73 = *(_QWORD *)(v9 + 72);
  v68 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 14);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v13 = 0LL;
  v14 = v12;
  v67 = v12;
  v79 = 0LL;
  v15 = v12 - 1;
  v80 = 0LL;
  LODWORD(v58) = v12 - 1;
  if ( v12 != 1 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v79, v12 - 1);
    v13 = v80;
  }
  v16 = v79;
  v17 = 0;
  if ( !v14 )
  {
LABEL_25:
    v32 = v6;
    v6 = 0LL;
    v33 = 0;
    *a4 = v32;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
            v10,
            v17);
    v19 = v18 & 8;
    v65 = v19;
    v20 = a3 && (v17 == v15 || (v18 & 8) != 0);
    v54 = v20;
    v21 = DefaultHeap::Alloc(0x80uLL);
    if ( v21 )
    {
      LOBYTE(v53) = v20;
      v23 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                             v21,
                                             v68,
                                             v73,
                                             v17,
                                             v18,
                                             v53);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = v6;
    v6 = v23;
    v60 = v23;
    if ( v24 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v24);
      operator delete(v24, 0x80uLL);
    }
    if ( !v23 )
    {
      v33 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0xE8u, 0LL);
      goto LABEL_26;
    }
    v25 = v57;
    v26 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v57 + 32LL))(
            v57,
            v17);
    v27 = 0;
    v64 = v26;
    v56 = 0;
    if ( v26 )
      break;
LABEL_23:
    if ( v17 != (_DWORD)v58 )
    {
      v36 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v23);
      v33 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x130u, 0LL);
        goto LABEL_26;
      }
      if ( v19 )
      {
        v50 = (_DWORD *)(v16 + 16LL * v17);
        v77 = -1;
        v6 = 0LL;
        v78 = v23;
        *v50 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v50 + 2,
          &v78);
        v51 = v78;
        if ( v78 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v78);
          operator delete(v51, 0x80uLL);
        }
      }
      else
      {
        v38 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v60, &v66);
        v33 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x135u, 0LL);
          v6 = v60;
          goto LABEL_26;
        }
        v76 = 0LL;
        v40 = (_DWORD *)(v16 + 16LL * v17);
        v75 = v66;
        *v40 = v66;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v40 + 2,
          &v76);
        v41 = v76;
        if ( v76 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v76);
          operator delete(v41, 0x80uLL);
        }
        v6 = v60;
      }
    }
    if ( ++v17 >= v67 )
      goto LABEL_25;
    v10 = v57;
    v15 = v58;
  }
  while ( 1 )
  {
    v28 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v25 + 48LL))(
            v25,
            v17,
            v27,
            &v55);
    v29 = v28;
    if ( v55 )
    {
      v35 = v16 + 16LL * v28;
      if ( *(_DWORD *)v35 == -1 )
      {
        v48 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 8) = 0LL;
        v49 = (_QWORD *)*((_QWORD *)v23 + 5);
        v70 = v48;
        if ( v49 == *((_QWORD **)v23 + 6) )
        {
          std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
            (char *)v23 + 32,
            v49,
            &v69);
        }
        else
        {
          v70 = 0LL;
          *v49 = v69;
          v49[1] = v48;
          *((_QWORD *)v23 + 5) += 16LL;
        }
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v70);
      }
      else
      {
        CRenderingTechniqueFragment::AddIntermediateInput(v23, *(_DWORD *)v35);
      }
      goto LABEL_21;
    }
    v30 = *((_QWORD *)a2 + 15);
    v31 = *(struct CBrush **)(v30 + 8 * v29);
    if ( v31 )
    {
      if ( *((_BYTE *)v31 + 80) )
        break;
    }
    v61 = *(CRenderingTechniqueFragment ***)(v30 + 8 * v29);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v74 + 48LL))(v74, (unsigned int)v29) )
    {
      v62 = v68;
      v63 = v29;
    }
    else
    {
      v62 = 0LL;
      v63 = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      this,
      v23,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v61);
LABEL_20:
    v25 = v57;
LABEL_21:
    v27 = v56 + 1;
    v56 = v27;
    if ( v27 >= v64 )
    {
      v19 = v65;
      goto LABEL_23;
    }
  }
  v42 = v54
     || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v57 + 56LL))(
          v57,
          v17,
          v56,
          0LL,
          0LL);
  v59 = 0LL;
  v62 = 0LL;
  v61 = &v59;
  LOBYTE(v63) = 1;
  v33 = CBrushRenderingGraphBuilder::AddBrush(this, v31, v42, &v62);
  if ( (_BYTE)v63 )
  {
    v44 = *v61;
    *v61 = v62;
    if ( v44 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v44);
      operator delete(v44, 0x80uLL);
    }
  }
  if ( v33 >= 0 )
  {
    v45 = v59;
    v59 = 0LL;
    v46 = (_QWORD *)*((_QWORD *)v23 + 5);
    v72 = v45;
    if ( v46 == *((_QWORD **)v23 + 6) )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v23 + 32,
        v46,
        &v71);
    }
    else
    {
      v72 = 0LL;
      *v46 = v71;
      v46[1] = v45;
      *((_QWORD *)v23 + 5) += 16LL;
    }
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v72);
    v47 = v59;
    if ( v59 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v59);
      operator delete(v47, 0x80uLL);
    }
    goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v33, 0x114u, 0LL);
  v52 = v59;
  if ( v59 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v59);
    operator delete(v52, 0x80uLL);
  }
LABEL_26:
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v16, *((_QWORD *)&v79 + 1));
    std::_Deallocate<16,0>(v16, (v13 - v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( v6 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v6);
    operator delete(v6, 0x80uLL);
  }
  return (unsigned int)v33;
}
