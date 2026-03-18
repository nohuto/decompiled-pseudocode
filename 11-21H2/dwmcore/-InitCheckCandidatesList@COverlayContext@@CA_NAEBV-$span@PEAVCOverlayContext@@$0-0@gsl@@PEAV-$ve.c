/*
 * XREFs of ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18001208C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1800120E0 (-reserve_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlay.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180016D18 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E494 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003E884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003ED4C (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801B8030 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

char __fastcall COverlayContext::InitCheckCandidatesList(__int64 *a1, detail::liberal_expansion_policy *a2)
{
  __int64 *v2; // r14
  char v3; // di
  __int64 v4; // rax
  __int64 *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // r15d
  char v9; // al
  __int64 v10; // rdx
  __int64 *v11; // r13
  COverlayContext **v12; // rsi
  __int64 v13; // rax
  char v14; // r13
  COverlayContext **v15; // r15
  COverlayContext *v16; // r14
  _BYTE *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  void *v20; // rcx
  bool v21; // zf
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // r14d
  int v26; // esi
  unsigned int v27; // r15d
  __int64 v28; // r14
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __int64 *v31; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v36; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r10
  __int64 v41; // r9
  _BYTE *v42; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v43; // [rsp+30h] [rbp-D0h]
  _QWORD v44[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h]
  char v47; // [rsp+54h] [rbp-ACh]
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __m128i v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v52; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE *v53; // [rsp+A8h] [rbp-58h]
  _BYTE **v54; // [rsp+B0h] [rbp-50h]
  _BYTE v55[128]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v56; // [rsp+138h] [rbp+38h] BYREF
  _BYTE *v57; // [rsp+140h] [rbp+40h]
  __int64 *v58; // [rsp+148h] [rbp+48h]
  _BYTE v59[128]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v60; // [rsp+1D0h] [rbp+D0h] BYREF

  v2 = (__int64 *)a1[1];
  v52 = v55;
  v43 = a1;
  v53 = v55;
  v54 = &v56;
  v3 = 1;
  v4 = *a1;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  if ( v2 != &v2[v4] )
  {
    v6 = &v2[v4];
    do
    {
      v7 = *v2;
      v8 = 0;
      v9 = *(_BYTE *)(*v2 + 11306);
      *(_QWORD *)(v7 + 11316) = 0LL;
      *(_BYTE *)(v7 + 11328) = v9;
      *(_DWORD *)(v7 + 11324) = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 88);
        if ( v8 >= -1227133513 * (unsigned int)((*(_QWORD *)(v7 + 96) - v10) >> 5) )
          break;
        v23 = 224LL * v8;
        *(_DWORD *)(v23 + v10 + 212) = v8;
        v24 = v23 + *(_QWORD *)(v7 + 88);
        ++v8;
        *(_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     (detail::liberal_expansion_policy *)&v52,
                     (v53 - v52) >> 3) = v24;
      }
      ++v2;
    }
    while ( v2 != v6 );
  }
  v11 = v43;
  while ( ((v53 - v52) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
      (gsl::details *)v44,
      (__int64 *)&v52);
    v25 = v44[0];
    v26 = -1;
    if ( v44[0] )
    {
      v26 = 0;
      v27 = 1;
      if ( LODWORD(v44[0]) > 1 )
      {
        do
        {
          v36 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                      (gsl::details *)v44,
                                                                      v26);
          v37 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                     (gsl::details *)v44,
                                                                     v27);
          if ( COverlayContext::IsHigherProprity(*v37, v36) )
            v26 = v27;
          ++v27;
        }
        while ( v27 < v25 );
      }
    }
    v28 = v26;
    v29 = *(__int64 **)&v52[8 * v26];
    v30 = *v29;
    v50 = *(__m128i *)(*v29 + 44);
    if ( (_mm_srli_si128(v50, 8).m128i_i32[1] & 0x2000) != 0 )
      v31 = &v45;
    else
      v31 = (__int64 *)(v30 + 11316);
    if ( *(_DWORD *)v31 < (unsigned int)(v50.m128i_i32[0] - 1)
      && (*((_BYTE *)v29 + 176)
        ? *((_DWORD *)v31 + 2) < v50.m128i_i32[2]
        : *((_DWORD *)v31 + 1) < (unsigned int)(v50.m128i_i32[1] - 1)) )
    {
      if ( (unsigned __int64)*v11 <= 1
        || (gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
              (gsl::details *)&v48,
              (__int64 *)a2),
            v38 = v49,
            v39 = v49 + 8 * v48,
            v49 == v39) )
      {
LABEL_36:
        v33 = 0LL;
        v34 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 3;
        if ( (_DWORD)v34 )
        {
          v40 = *(_QWORD *)&v52[8 * v28];
          do
          {
            v41 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v33);
            if ( *(_QWORD *)v40 == *(_QWORD *)v41 && *(_DWORD *)(v40 + 212) < *(_DWORD *)(v41 + 212) )
              break;
            v33 = (unsigned int)(v33 + 1);
          }
          while ( (_DWORD)v33 != (_DWORD)v34 );
        }
        v35 = (__int64)v52;
        *(_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     a2,
                     (8 * v33) >> 3) = *(_QWORD *)(v35 + 8 * v28);
        ++*(_DWORD *)v31;
        if ( *(_BYTE *)(*(_QWORD *)&v52[8 * v28] + 176LL) )
          ++*((_DWORD *)v31 + 2);
        else
          ++*((_DWORD *)v31 + 1);
      }
      else
      {
        while ( v29[2] != *(_QWORD *)(*(_QWORD *)v38 + 16LL) )
        {
          v38 += 8LL;
          if ( v38 == v39 )
            goto LABEL_36;
        }
      }
    }
    v42 = &v52[8 * v28];
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      &v52,
      &v51,
      &v42);
  }
  v12 = (COverlayContext **)v11[1];
  v13 = *v11;
  v14 = 0;
  v15 = &v12[v13];
  while ( v12 != v15 )
  {
    v16 = *v12;
    v56 = v59;
    v57 = v59;
    v58 = &v60;
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
      (gsl::details *)&v48,
      (__int64 *)a2);
    COverlayContext::GetContextCandidates(v16, &v48, &v56);
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
      (gsl::details *)v44,
      (__int64 *)&v56);
    COverlayContext::DeriveDesktopPlaneAttributes(v16);
    if ( *((_BYTE *)v16 + 11024) && *((_BYTE *)v16 + 11025) )
      v14 = 1;
    v17 = v56;
    v18 = (v57 - v56) >> 3;
    if ( v18 )
    {
      detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v56,
        0LL,
        v18);
      v17 = v56;
    }
    v56 = 0LL;
    if ( v17 == v59 )
      v17 = 0LL;
    DefaultHeap::Free(v17);
    ++v12;
  }
  if ( ((*((_QWORD *)a2 + 1) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8uLL) == 0 && !v14 )
    v3 = 0;
  v19 = (v53 - v52) >> 3;
  if ( v19 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v52,
      0LL,
      v19);
  v20 = v52;
  v21 = v52 == v55;
  v52 = 0LL;
  if ( v21 )
    v20 = 0LL;
  DefaultHeap::Free(v20);
  return v3;
}
