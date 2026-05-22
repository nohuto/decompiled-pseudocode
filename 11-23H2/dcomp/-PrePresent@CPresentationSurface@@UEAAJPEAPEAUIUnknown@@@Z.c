/*
 * XREFs of ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ?CheckForDestinationChanges@CPresentationSurface@@IEAAXXZ @ 0x1800A7B9C (-CheckForDestinationChanges@CPresentationSurface@@IEAAXXZ.c)
 *     ??1CPropertyIndex@@QEAA@XZ @ 0x1801AD040 (--1CPropertyIndex@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@$$QEAI@Z @ 0x1801AF7A4 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@-$vector@UCFlipPrope.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@$$QEAI@Z @ 0x1801AF8A0 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@-$vector@UCFlipP.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@$$QEAI@Z @ 0x1801AF99C (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@-$vector@UCFlipPropertyIt.c)
 *     ??B?$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1801AFDBC (--B-$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationSurface::PrePresent(CPresentationSurface *this, struct IUnknown **a2)
{
  _BYTE *v2; // rbx
  unsigned int v3; // esi
  GUID *v6; // rbx
  int v7; // ecx
  char *v8; // rax
  GUID v9; // xmm0
  GUID *v10; // rbx
  char *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  char *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF
  char *v25; // [rsp+88h] [rbp+38h] BYREF

  v2 = (char *)this + 80;
  LODWORD(v24) = 76;
  v3 = 0;
  v25 = (char *)this + 80;
  *a2 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,PresentedContentUpdateInfo const * &,unsigned int>(
    (char **)&v22,
    0LL,
    (__int128 *)&GUID_002058ee_e3d4_4092_afe3_bd372f300335,
    &v25,
    (int *)&v24);
  if ( (*v2 & 1) == 0 )
    goto LABEL_11;
  if ( *((_DWORD *)this + 34) == 1 )
  {
    v6 = (GUID *)*((_QWORD *)&v22 + 1);
    v7 = 28;
    v8 = (char *)*((_QWORD *)this + 20);
    v25 = v8;
    LODWORD(v24) = 28;
    if ( *((_QWORD *)&v22 + 1) != v23 )
    {
      v9 = GUID_99c5ac9c_5b20_46b4_b0d4_71a068e75be4;
      goto LABEL_6;
    }
    std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,PresentedContentUpdateHDR10Info const * &,unsigned int>(
      (char **)&v22,
      *((char **)&v22 + 1),
      (__int128 *)&GUID_99c5ac9c_5b20_46b4_b0d4_71a068e75be4,
      &v25,
      (int *)&v24);
LABEL_11:
    v10 = (GUID *)*((_QWORD *)&v22 + 1);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 34) != 2 )
    goto LABEL_11;
  v6 = (GUID *)*((_QWORD *)&v22 + 1);
  v7 = 72;
  v8 = (char *)*((_QWORD *)this + 20);
  v25 = v8;
  LODWORD(v24) = 72;
  if ( *((_QWORD *)&v22 + 1) == v23 )
  {
    std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,PresentedContentUpdateHDR10PlusInfo const * &,unsigned int>(
      (char **)&v22,
      *((char **)&v22 + 1),
      (__int128 *)&GUID_1d0e8a4a_294d_4ac7_b278_b3c3a09c30ad,
      &v25,
      (int *)&v24);
    goto LABEL_11;
  }
  v9 = GUID_1d0e8a4a_294d_4ac7_b278_b3c3a09c30ad;
LABEL_6:
  *v6 = v9;
  v6[1].Data1 = v7;
  *(_QWORD *)v6[1].Data4 = v8;
  v10 = v6 + 2;
  *((_QWORD *)&v22 + 1) = v10;
LABEL_12:
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 57) )
  {
    if ( !*((_BYTE *)this + 58) )
      goto LABEL_31;
    v11 = (char *)this + 48;
    if ( wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator bool((_QWORD *)this + 6) )
      v12 = *(_QWORD *)(*(_QWORD *)v11 + 32LL);
    else
      v12 = 0LL;
    v13 = *((_QWORD *)this + 1);
    v24 = v12;
    v14 = NtFlipObjectSetContent(
            *(_QWORD *)(v13 + 104),
            (char *)this + 24,
            &v24,
            (unsigned int)((__int64)((__int64)v10 - v22) >> 5),
            v22);
    v15 = HRESULTFromNTSTATUS(v14);
    v3 = v15;
    if ( v15 >= 0 )
    {
      if ( wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator bool((_QWORD *)this + 6) )
        *a2 = *(struct IUnknown **)(*(_QWORD *)v11 + 40LL);
      *((_BYTE *)this + 58) = 0;
      goto LABEL_31;
    }
    v16 = 171;
LABEL_30:
    DoStackCaptureDirect(v15, v16);
    goto LABEL_31;
  }
  CPresentationSurface::CheckForDestinationChanges((CPresentationSurface *)((char *)this - 16));
  v17 = (char *)this + 48;
  if ( wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator bool((_QWORD *)this + 6) )
    v18 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
  else
    v18 = 0LL;
  v19 = *((_QWORD *)this + 1);
  v24 = v18;
  v20 = NtFlipObjectSetContent(
          *(_QWORD *)(v19 + 104),
          (char *)this + 24,
          &v24,
          (unsigned int)((__int64)((__int64)v10 - v22) >> 5),
          v22);
  v15 = HRESULTFromNTSTATUS(v20);
  v3 = v15;
  if ( v15 < 0 )
  {
    v16 = 190;
    goto LABEL_30;
  }
  if ( wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator bool((_QWORD *)this + 6) )
    *a2 = *(struct IUnknown **)(*(_QWORD *)v17 + 40LL);
LABEL_31:
  CPropertyIndex::~CPropertyIndex((CPropertyIndex *)&v22);
  return v3;
}
