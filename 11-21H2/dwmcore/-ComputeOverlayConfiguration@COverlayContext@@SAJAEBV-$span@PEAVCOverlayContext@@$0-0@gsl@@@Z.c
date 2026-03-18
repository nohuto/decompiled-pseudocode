/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18000CE28 (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18001208C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x1800797C8 (--$insert@V-$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@-$vector_facade@PEAVCOverlayCont.c)
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18008E754 (-clear@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_polic.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800CB6E8 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v3; // esi
  COverlayContext **v4; // rdi
  COverlayContext **v5; // r15
  gsl::details *v6; // rcx
  bool v7; // zf
  _BYTE *v8; // rcx
  __int64 v9; // r8
  COverlayContext *v11; // r14
  const struct COverlayContext::OverlayPlaneInfo *v12; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v13; // r12
  _BYTE *v14; // rax
  char v15; // si
  _QWORD *v16; // rax
  _BYTE *v17; // rbx
  _BYTE *v18; // rdi
  _QWORD **v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  COverlayContext **v25; // rbx
  COverlayContext **v26; // r14
  _BYTE *v27; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  _QWORD **v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  gsl::details *v36; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v37; // [rsp+B0h] [rbp-50h]
  _BYTE **v38; // [rsp+B8h] [rbp-48h]
  _BYTE v39[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v40; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v41; // [rsp+E8h] [rbp-18h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  _BYTE v43[128]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v44; // [rsp+178h] [rbp+78h] BYREF

  v1 = *a1;
  *(_QWORD *)&v28 = a1[1];
  v32 = v28;
  v3 = 0;
  *((_QWORD *)&v28 + 1) = v28 + 8 * v1;
  v40 = v43;
  v41 = v43;
  v42 = &v44;
  v31 = v28;
  v33 = v28;
  v27 = v43;
  v34 = *((_QWORD *)&v28 + 1);
  v29 = v28;
  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<COverlayContext *>,void>(
    &v40,
    &v30,
    &v27,
    (__int64)&v28,
    (gsl::details **)&v33);
  v36 = (gsl::details *)v39;
  v37 = v39;
  v38 = &v40;
  while ( ((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v14 = (_BYTE *)*((_QWORD *)v41 - 1);
    v15 = v14[11297];
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v14 + 96LL))(*(_QWORD *)v14, &v33);
    v17 = v41;
    v18 = (_BYTE *)*v16;
    v27 = (_BYTE *)*v16;
    *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v36,
                 (v37 - (_BYTE *)v36) >> 3) = *((_QWORD *)v17 - 1);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v40,
      (v41 - 8 - v40) >> 3,
      1LL);
    if ( !v15 )
    {
      v19 = (_QWORD **)v40;
      while ( v19 != (_QWORD **)v41 )
      {
        if ( *((_BYTE *)*v19 + 11297)
          || (v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)**v19 + 96LL))(**v19, &v33),
              *v23 != __PAIR64__(HIDWORD(v27), (unsigned int)v18)) )
        {
          ++v19;
        }
        else
        {
          v24 = (_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                            &v36,
                            (v37 - (_BYTE *)v36) >> 3);
          v30 = v19;
          *v24 = *v19;
          v19 = (_QWORD **)*detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                              &v40,
                              &v35,
                              &v30);
        }
      }
    }
    v20 = (v37 - (_BYTE *)v36) >> 3;
    *(_QWORD *)&v28 = v20;
    if ( v20 == -1 || (*((_QWORD *)&v28 + 1) = v36) == 0LL && v20 )
    {
      gsl::details::terminate(v36);
      JUMPOUT(0x18008EA5ELL);
    }
    v21 = COverlayContext::ComputeOverlayConfigurationForAdapter((__int64 *)&v28);
    v3 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xD1u);
      v25 = (COverlayContext **)a1[1];
      v26 = &v25[*a1];
      while ( v25 != v26 )
        COverlayContext::Reset(*v25++);
      goto LABEL_6;
    }
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(&v36);
  }
  if ( *a1 )
  {
    v4 = (COverlayContext **)a1[1];
    v5 = &v4[*a1];
LABEL_5:
    if ( v4 != v5 )
    {
      v11 = *v4;
      v12 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)*v4 + 913);
      v13 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)*v4 + 914);
      while ( 1 )
      {
        if ( v12 == v13 )
        {
          ++v4;
          goto LABEL_5;
        }
        if ( COverlayContext::IsRevokable(v11, v12) )
          break;
        v12 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v12 + 224);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)g_pComposition + 82) + 120LL))(
        *((_QWORD *)g_pComposition + 82),
        1000LL,
        0x10000LL);
    }
  }
LABEL_6:
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(&v36);
  v6 = v36;
  v7 = v36 == (gsl::details *)v39;
  v36 = 0LL;
  if ( v7 )
    v6 = 0LL;
  DefaultHeap::Free(v6);
  v8 = v40;
  v9 = (v41 - v40) >> 3;
  if ( v9 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v40,
      0LL,
      v9);
    v8 = v40;
  }
  v40 = 0LL;
  if ( v8 == v43 )
    v8 = 0LL;
  DefaultHeap::Free(v8);
  return v3;
}
