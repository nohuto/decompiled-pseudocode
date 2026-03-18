/*
 * XREFs of ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180040550
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800401D4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800DF7F0 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     ?CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEAAXXZ @ 0x180040104 (-CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEAAXXZ.c)
 *     ?GetBounds@CVisualTree@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180040D58 (-GetBounds@CVisualTree@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x1800410F0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005B960 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006E43C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800726C0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D089C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800E1F90 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B5FC8 (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COcclusionContext::Compute(COcclusionContext *this, __int64 a2, _QWORD *a3, float a4, _OWORD *a5)
{
  float v8; // xmm6_4
  bool v9; // r12
  char v10; // dl
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  gsl::details *v13; // rcx
  __int64 Bounds; // rax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r9
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 Count; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  HANDLE ProcessHeap; // rax
  char *v31; // rax
  CVisualTreePath *v32; // rbx
  char *v33; // rax
  unsigned int v34; // edx
  CVisualTreePath **v35; // rax
  CVisualTreePath *v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  struct CComposition *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // esi
  __int64 v42; // rcx
  char **v43; // rbx
  char *v44; // rsi
  __int64 v45; // rax
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  HANDLE v51; // rax
  __int128 v52; // [rsp+30h] [rbp-68h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CThreadContext *v54; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0.0;
  v9 = COERCE_FLOAT(LODWORD(a4) & _xmm) < 0.0000011920929;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_DWORD *)this + 118) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 448, 36LL);
  *((_DWORD *)this + 357) = 0;
  if ( *((_BYTE *)this + 1204) )
    *((_BYTE *)this + 1204) = 0;
  CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1208));
  CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1276));
  if ( v10 )
  {
    for ( i = 0; i < *((_DWORD *)this + 118); ++i )
      CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 56) + 36LL * i), 0LL);
  }
  *((_QWORD *)this + 128) = 0LL;
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)a3 )
  {
    v13 = 0LL;
    do
    {
      if ( (unsigned __int64)v12 >= *a3 )
      {
        gsl::details::terminate(v13);
        JUMPOUT(0x180040ABALL);
      }
      *(_OWORD *)((char *)this + 16 * (_QWORD)v13 + 1032) = *(_OWORD *)(a3[1] + 16LL * v12);
      Bounds = CVisualTree::GetBounds(a2, 2LL * *((_QWORD *)this + 128));
      if ( *(float *)Bounds > *((float *)this + 2 * v15 + 258) )
        *((_DWORD *)this + 2 * v15 + 258) = *(_DWORD *)Bounds;
      v18 = *(float *)(Bounds + 4);
      v19 = *((float *)this + 2 * v15 + 259);
      if ( v18 > v19 )
      {
        *((float *)this + 2 * v15 + 259) = v18;
        v19 = v18;
      }
      v20 = *(float *)(Bounds + 8);
      v21 = *((float *)this + 2 * v15 + 260);
      if ( v21 > v20 )
      {
        *((float *)this + 2 * v15 + 260) = v20;
        v21 = v20;
      }
      v22 = *(float *)(Bounds + 12);
      v23 = *((float *)this + 2 * v15 + 261);
      if ( v23 > v22 )
      {
        *((float *)this + 2 * v15 + 261) = v22;
        v23 = v22;
      }
      if ( v21 <= *((float *)this + 2 * v15 + 258) || v23 <= v19 )
      {
        *((_QWORD *)this + v15 + 130) = 0LL;
        *((_QWORD *)this + v15 + 129) = 0LL;
      }
      v13 = (gsl::details *)*((_QWORD *)this + 128);
      if ( *((float *)this + 4 * (_QWORD)v13 + 260) > *((float *)this + 4 * (_QWORD)v13 + 258)
        && *((float *)this + 4 * *((_QWORD *)this + 128) + 261) > *((float *)this + 4 * *((_QWORD *)this + 128) + 259) )
      {
        if ( !v9 )
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((char *)this + v17 + 1032);
        *((float *)this + *((_QWORD *)this + 128) + 290) = (float)(*((float *)this + 4 * *((_QWORD *)this + 128) + 261)
                                                                 - *((float *)this + 4 * *((_QWORD *)this + 128) + 259))
                                                         * (float)(*((float *)this + 4 * *((_QWORD *)this + 128) + 260)
                                                                 - *((float *)this + 4 * *((_QWORD *)this + 128) + 258));
        v24 = *((_QWORD *)this + 128);
        v8 = v8 + *((float *)this + v24 + 290);
        v13 = (gsl::details *)(v24 + 1);
        *((_QWORD *)this + 128) = v24 + 1;
      }
      v12 = v16 + 1;
    }
    while ( v12 < *(_DWORD *)a3 );
  }
  **((_DWORD **)this + 168) = 0;
  if ( (!*((_QWORD *)this + 128) || COERCE_FLOAT(LODWORD(v8) & _xmm) < 0.0000011920929)
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 96LL) & 0x8000) == 0 )
  {
    goto LABEL_36;
  }
  v25 = *((_QWORD *)this + 177);
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 1784);
  else
    v26 = *(_QWORD *)(a2 + 64);
  if ( (int)CThreadContext::GetCurrent(&v54) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v54 + 24));
    v29 = 0LL;
    if ( Count )
    {
      while ( v26 != CPtrArrayBase::operator[](v28 + 24, v29) )
      {
        v29 = v48 + 1;
        if ( v29 >= v49 )
          goto LABEL_31;
      }
      v11 = -2147467260;
      goto LABEL_36;
    }
  }
LABEL_31:
  *((_OWORD *)this + 96) = *a5;
  COcclusionContext::CheckOverlayCandidateCollectionEnabled(this);
  *((_BYTE *)this + 1424) = 0;
  ProcessHeap = GetProcessHeap();
  v31 = (char *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v32 = (CVisualTreePath *)v31;
  if ( !v31 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v33 = v31 + 24;
  *(_QWORD *)&v52 = 0LL;
  *(_QWORD *)v32 = v33;
  *((_QWORD *)v32 + 1) = v33;
  *((_QWORD *)&v52 + 1) = a2;
  *((_QWORD *)v32 + 2) = (char *)v32 + 56;
  *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
               v32,
               0LL,
               1LL) = v52;
  v35 = (CVisualTreePath **)((char *)this + 16);
  if ( (struct CThreadContext **)((char *)this + 16) == &v54 )
  {
    v36 = v32;
    goto LABEL_68;
  }
  v36 = *v35;
  *v35 = v32;
  if ( v36 )
LABEL_68:
    CVisualTreePath::`scalar deleting destructor'(v36, v34);
  *((_QWORD *)this + 16) = a2;
  v37 = CVisualTreeIterator::WalkSubtree<COcclusionContext>((char *)this + 64, *(_QWORD *)(a2 + 64), v26, this);
  v11 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xBCu, 0LL);
    goto LABEL_39;
  }
  if ( *((_QWORD *)this + 177) && !*((_BYTE *)this + 1424) )
  {
    v11 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147418113, 0xC4u, 0LL);
    goto LABEL_39;
  }
LABEL_36:
  v39 = g_pComposition;
  v40 = 0LL;
  if ( g_pComposition )
    v40 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)this + 3) = v40;
LABEL_39:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v39, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, a2, 0LL);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  v41 = 0;
  for ( *((_DWORD *)this + 44) = 0; v41 < *((_DWORD *)this + 58); ++v41 )
  {
    v50 = *(_QWORD *)(*((_QWORD *)this + 26) + 16LL * v41);
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 16LL);
  v42 = *((_QWORD *)this + 39);
  if ( v42 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
    *((_QWORD *)this + 39) = 0LL;
  }
  *((_DWORD *)this + 104) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 392, 8LL);
  **((_DWORD **)this + 168) = 0;
  v43 = (char **)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v43 )
  {
    v44 = *v43;
    v45 = (v43[1] - *v43) >> 4;
    if ( v45 )
      v43[1] -= 16 * v45;
    *v43 = 0LL;
    if ( v44 == (char *)(v43 + 3) )
      v44 = 0LL;
    if ( v44 )
    {
      v51 = GetProcessHeap();
      HeapFree(v51, 0, v44);
    }
    operator delete(v43, 0x38uLL);
  }
  result = v11;
  *((_OWORD *)this + 96) = 0u;
  return result;
}
