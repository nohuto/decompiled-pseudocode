/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x180013558 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18001CB7C (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18001CDE8 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E494 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180068E10 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x1800EEA6C (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801B84D8 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(__int64 *a1)
{
  COverlayContext **v1; // rbx
  unsigned int v3; // r14d
  COverlayContext **v4; // rsi
  const struct COverlayContext::OverlayPlaneInfo **v5; // rcx
  __int64 v6; // r8
  char v8; // r15
  unsigned int v9; // ebx
  char i; // al
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  COverlayContext **v13; // rbx
  __int64 v14; // rax
  COverlayContext **v15; // rsi
  COverlayContext **v16; // rdi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19[4]; // [rsp+30h] [rbp-79h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v20; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *v21; // [rsp+48h] [rbp-61h]
  __int64 *v22; // [rsp+50h] [rbp-59h]
  _BYTE v23[128]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+2Fh] BYREF

  v1 = (COverlayContext **)a1[1];
  v3 = 0;
  v4 = &v1[*a1];
  while ( v1 != v4 )
  {
    if ( COverlayContext::HaveOverlayCandidatesChanged(*v1) )
    {
      v20 = (const struct COverlayContext::OverlayPlaneInfo **)v23;
      v8 = 0;
      v21 = v23;
      v9 = 0;
      v22 = &v24;
      for ( i = COverlayContext::InitCheckCandidatesList(a1, (detail::liberal_expansion_policy *)&v20);
            i && v9 <= 8;
            i = COverlayContext::TrimCheckCandidatesList(a1, &v20) )
      {
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
          (gsl::details *)v19,
          (__int64 *)&v20);
        if ( COverlayContext::CheckMultiPlaneOverlaySupport((unsigned __int64)a1, v19) )
        {
          v8 = 1;
          break;
        }
        ++v9;
      }
      v11 = (__int64 *)a1[1];
      v12 = &v11[*a1];
      if ( v11 != v12 )
      {
        if ( v8 )
        {
          do
            COverlayContext::PushCandidates(*v11++, &v20);
          while ( v11 != v12 );
        }
        else
        {
          do
            COverlayContext::PushCandidates(*v11++, 0LL);
          while ( v11 != v12 );
        }
      }
      v13 = (COverlayContext **)a1[1];
      v14 = *a1;
      v15 = &v13[*a1];
      if ( v13 != v15 )
      {
        do
          COverlayContext::ReleaseObsoletePlaneAssignments(*v13++);
        while ( v13 != v15 );
        v13 = (COverlayContext **)a1[1];
        v14 = *a1;
      }
      v16 = &v13[v14];
      while ( v13 != v16 )
      {
        v17 = COverlayContext::TransferCandidatesToPlaneAssignments(*v13);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x789u, 0LL);
          break;
        }
        ++v13;
      }
      v5 = v20;
      v6 = (v21 - (_BYTE *)v20) >> 3;
      if ( v6 )
      {
        detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v20,
          0LL,
          v6);
        v5 = v20;
      }
      v20 = 0LL;
      if ( v5 == (const struct COverlayContext::OverlayPlaneInfo **)v23 )
        v5 = 0LL;
      DefaultHeap::Free(v5);
      return v3;
    }
    ++v1;
  }
  return v3;
}
