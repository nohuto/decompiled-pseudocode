/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8534
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B7E70 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800B444C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B79C4 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B7E70 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800B82AC (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800B8368 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800B8AC4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B8BBC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800B8FFC (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x1800B94FC (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800BA588 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E51E4 (--$_Resize@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$alloc.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EDF28 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA@XZ @ 0x18026D968 (--1-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrushRend.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        struct CBrushRenderingGraph **this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rbx
  struct CRenderingTechniqueFragment *v6; // r15
  __int64 v7; // rsi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *v10; // r12
  struct _TP_WORK *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // ebx
  int v17; // r14d
  bool v18; // r13
  LPVOID v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rdi
  CRenderingTechniqueFragment *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // r12d
  unsigned int v25; // eax
  const char *v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rax
  struct CBrush *v33; // r14
  char v34; // al
  bool v35; // r8
  __int64 v36; // rcx
  int v37; // ebx
  CRenderingTechniqueFragment *v38; // r14
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // eax
  _DWORD *v42; // rcx
  CRenderingTechniqueFragment *v43; // rbx
  _DWORD *v44; // rcx
  CRenderingTechniqueFragment *v45; // rbx
  int v46; // r9d
  unsigned int v48[2]; // [rsp+28h] [rbp-B9h]
  unsigned int v49; // [rsp+28h] [rbp-B9h]
  int v50; // [rsp+30h] [rbp-B1h]
  char v51; // [rsp+38h] [rbp-A9h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-A5h]
  __int64 v53; // [rsp+40h] [rbp-A1h] BYREF
  __int64 *v54; // [rsp+48h] [rbp-99h] BYREF
  CRenderingTechniqueFragment **v55; // [rsp+50h] [rbp-91h] BYREF
  struct CRenderingTechniqueFragment *v56; // [rsp+58h] [rbp-89h] BYREF
  int v57; // [rsp+60h] [rbp-81h]
  unsigned int v58; // [rsp+68h] [rbp-79h]
  int v59; // [rsp+6Ch] [rbp-75h]
  int v60; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v61; // [rsp+74h] [rbp-6Dh]
  const struct Windows::UI::Composition::ICompiledEffect *v62; // [rsp+78h] [rbp-69h]
  struct CRenderingTechniqueFragment *v63; // [rsp+80h] [rbp-61h]
  __int128 v64; // [rsp+88h] [rbp-59h] BYREF
  __int64 v65; // [rsp+98h] [rbp-49h]
  __int64 v66; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-21h]
  __int64 v71; // [rsp+C8h] [rbp-19h]
  int v72; // [rsp+D0h] [rbp-11h]
  CRenderingTechniqueFragment *v73; // [rsp+D8h] [rbp-9h] BYREF
  int v74; // [rsp+E0h] [rbp-1h]
  CRenderingTechniqueFragment *v75; // [rsp+E8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 12);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)v4 + 10) + 48LL);
  v71 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 10);
  v10 = CompiledEffectNoRef;
  v62 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 56);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  v70 = *(_QWORD *)(v9 + 72);
  v63 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 14);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v65 = 0LL;
  v61 = v12;
  v13 = v12;
  v14 = v12 - 1;
  v52 = v12 - 1;
  v64 = 0LL;
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize<std::_Value_init_tag>(&v64, v12 - 1);
  v15 = 0;
  if ( !v13 )
  {
LABEL_62:
    v54 = 0LL;
    v37 = 0;
    *a4 = v6;
    goto LABEL_63;
  }
  while ( 1 )
  {
    v16 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
            v10,
            v15);
    v17 = v16 & 8;
    v59 = v17;
    v18 = a3 && (v15 == v14 || (v16 & 8) != 0);
    v19 = DefaultHeap::Alloc(0x80uLL);
    if ( v19 )
    {
      LOBYTE(v50) = v18;
      v48[0] = v16;
      v21 = (__int64 *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(v19, v63, v70, v15, *(_QWORD *)v48, v50);
    }
    else
    {
      v21 = 0LL;
    }
    v22 = v6;
    v54 = v21;
    v6 = (struct CRenderingTechniqueFragment *)v21;
    if ( v22 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v22);
      operator delete(v22, 0x80uLL);
    }
    if ( !v21 )
    {
      v37 = -2147024882;
      v46 = -2147024882;
      v49 = 233;
      goto LABEL_61;
    }
    v23 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 32LL))(
            v10,
            v15);
    v24 = 0;
    v58 = v23;
    if ( v23 )
      break;
LABEL_45:
    if ( v15 != v52 )
    {
      v41 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, (struct CRenderingTechniqueFragment *)v21);
      v37 = v41;
      if ( v41 < 0 )
      {
        v49 = 311;
LABEL_59:
        v46 = v41;
LABEL_61:
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v46, v49, 0LL);
        goto LABEL_63;
      }
      if ( v17 )
      {
        v44 = (_DWORD *)(v64 + 16LL * v15);
        v6 = 0LL;
        v74 = -1;
        v75 = (CRenderingTechniqueFragment *)v21;
        *v44 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v44 + 2,
          &v75);
        v45 = v75;
        if ( v75 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v75);
          operator delete(v45, 0x80uLL);
        }
      }
      else
      {
        v41 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v54, &v60);
        v37 = v41;
        if ( v41 < 0 )
        {
          v49 = 316;
          goto LABEL_59;
        }
        v73 = 0LL;
        v42 = (_DWORD *)(v64 + 16LL * v15);
        v72 = v60;
        *v42 = v60;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
          v42 + 2,
          &v73);
        v43 = v73;
        if ( v73 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v73);
          operator delete(v43, 0x80uLL);
        }
        v6 = (struct CRenderingTechniqueFragment *)v54;
      }
    }
    if ( ++v15 >= v61 )
      goto LABEL_62;
    v10 = v62;
    v14 = v52;
  }
  while ( 1 )
  {
    v25 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v62 + 48LL))(
            v62,
            v15,
            v24,
            &v51);
    v27 = v25;
    if ( !v51 )
      break;
    if ( v25 >= (unsigned __int64)((__int64)(*((_QWORD *)&v64 + 1) - v64) >> 4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF7,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraphbuilder.cpp",
        (const char *)retaddr);
    v28 = v64 + 16LL * v25;
    if ( *(_DWORD *)v28 == -1 )
    {
      v29 = *(_QWORD *)(v28 + 8);
      *(_QWORD *)(v28 + 8) = 0LL;
      v30 = (_QWORD *)v21[5];
      v67 = v29;
      if ( v30 == (_QWORD *)v21[6] )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          v21 + 4,
          (__int64)v30,
          &v66);
      }
      else
      {
        *v30 = v66;
        v30[1] = v29;
        v21[5] += 16LL;
        v67 = 0LL;
      }
      v31 = &v67;
LABEL_38:
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v31);
      goto LABEL_43;
    }
    CRenderingTechniqueFragment::AddIntermediateInput((CRenderingTechniqueFragment *)v21, *(_DWORD *)v28);
LABEL_43:
    if ( ++v24 >= v58 )
    {
      v17 = v59;
      goto LABEL_45;
    }
  }
  if ( v25 >= *((_DWORD *)a2 + 36) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x213,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
      v26);
  v32 = *((_QWORD *)a2 + 15);
  v33 = *(struct CBrush **)(v32 + 8 * v27);
  if ( !v33 || !*((_BYTE *)v33 + 80) )
  {
    v55 = *(CRenderingTechniqueFragment ***)(v32 + 8 * v27);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v71 + 48LL))(v71, (unsigned int)v27) )
    {
      v56 = v63;
      v57 = v27;
    }
    else
    {
      v56 = 0LL;
      v57 = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      (CBrushRenderingGraphBuilder *)this,
      (struct CRenderingTechniqueFragment *)v21,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v55);
    goto LABEL_43;
  }
  if ( v18
    || (v34 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v62 + 56LL))(
                v62,
                v15,
                v24,
                0LL,
                0LL),
        v35 = 0,
        v34) )
  {
    v35 = 1;
  }
  v55 = (CRenderingTechniqueFragment **)&v53;
  v53 = 0LL;
  v56 = 0LL;
  LOBYTE(v57) = 1;
  v37 = CBrushRenderingGraphBuilder::AddBrush((CBrushRenderingGraphBuilder *)this, v33, v35, &v56);
  if ( (_BYTE)v57 )
  {
    v38 = *v55;
    *v55 = v56;
    if ( v38 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v38);
      operator delete(v38, 0x80uLL);
    }
  }
  if ( v37 >= 0 )
  {
    v39 = v53;
    v53 = 0LL;
    v40 = (_QWORD *)v21[5];
    v69 = v39;
    if ( v40 == (_QWORD *)v21[6] )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        v21 + 4,
        (__int64)v40,
        &v68);
    }
    else
    {
      v69 = 0LL;
      *v40 = v68;
      v40[1] = v39;
      v21[5] += 16LL;
    }
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v69);
    v31 = &v53;
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v37, 0x119u, 0LL);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v53);
LABEL_63:
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::~vector<CBrushRenderingGraphBuilder::SubgraphOutput>(&v64);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v54);
  return (unsigned int)v37;
}
