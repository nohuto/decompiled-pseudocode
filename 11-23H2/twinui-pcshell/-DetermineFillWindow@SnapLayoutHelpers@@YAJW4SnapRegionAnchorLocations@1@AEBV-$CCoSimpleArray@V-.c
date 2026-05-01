/*
 * XREFs of ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x180670EA8
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z @ 0x1806705A4 (--0-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z.c)
 *     ?GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W4SnapRegion@@@Z @ 0x180671538 (-GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W4SnapRegion@.c)
 *     ?GetBorderAnchors@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W421@@Z @ 0x1806715DC (-GetBorderAnchors@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W421@@Z.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x180673BAC (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z.c)
 *     ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z @ 0x180673C3C (-IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z.c)
 *     ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x180674348 (-WithRule@FillCandidate@SnapLayoutHelpers@@QEAA-AU12@W4FillRule@2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SnapLayoutHelpers::DetermineFillWindow(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(_QWORD),
        unsigned __int8 (__fastcall *a4)(_QWORD, _QWORD, char *),
        __int64 *a5,
        int a6,
        __int64 *a7)
{
  unsigned int v8; // edi
  int v9; // r14d
  __int64 *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 *v13; // r13
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int AnchorLocationsFromRegion; // r12d
  bool v17; // zf
  int BorderAnchors; // eax
  char v19; // cl
  char v20; // cl
  int v21; // edx
  SnapLayoutHelpers *v22; // rax
  const struct SnapLayoutHelpers::FillCandidate *v23; // r8
  const enum SnapLayoutHelpers::FillRule *v24; // r9
  bool v25; // al
  char v26; // bl
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  SnapLayoutHelpers *v31; // rax
  const struct SnapLayoutHelpers::FillCandidate *v32; // r8
  const enum SnapLayoutHelpers::FillRule *v33; // r9
  bool v34; // al
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rcx
  SnapLayoutHelpers *v38; // rax
  const struct SnapLayoutHelpers::FillCandidate *v39; // r8
  const enum SnapLayoutHelpers::FillRule *v40; // r9
  bool IsBetterFillCandidate; // al
  char v42; // bl
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // r15
  __int64 v46; // rbx
  __int64 v48; // [rsp+28h] [rbp-81h] BYREF
  __int64 v49; // [rsp+30h] [rbp-79h]
  __int64 v50; // [rsp+38h] [rbp-71h] BYREF
  __int64 v51; // [rsp+40h] [rbp-69h] BYREF
  __int64 v52[2]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v53[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v54[2]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v55[16]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v56[2]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v57[80]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v59; // [rsp+100h] [rbp+57h] BYREF
  unsigned __int8 (__fastcall *v60)(_QWORD); // [rsp+108h] [rbp+5Fh]
  unsigned __int8 (__fastcall *v61)(_QWORD, _QWORD, char *); // [rsp+110h] [rbp+67h]

  v61 = a4;
  v60 = a3;
  v8 = 0;
  v9 = 0;
  a6 = 0;
  v51 = 0LL;
  v50 = 0LL;
  v10 = a7;
  v11 = *a7;
  *a7 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v10[1] = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
  v12 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v13 = *(__int64 **)a2;
  a5 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8));
  if ( v13 == a5 )
    goto LABEL_49;
  do
  {
    v14 = *v13;
    v59 = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
    AnchorLocationsFromRegion = SnapLayoutHelpers::GetAnchorLocationsFromRegion(v15);
    wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>(
      &v50,
      v14);
    v51 = 0LL;
    if ( a1 == AnchorLocationsFromRegion )
    {
      if ( !a1 )
        goto LABEL_33;
      v17 = ((a1 - 1LL) & a1) == 0;
LABEL_12:
      if ( !v17 )
      {
LABEL_33:
        if ( !v61(a1, AnchorLocationsFromRegion, (char *)&v51 + 4)
          || !v60(HIDWORD(v51))
          || (v38 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v56, 3LL),
              v9 |= 4u,
              a6 = v9,
              IsBetterFillCandidate = SnapLayoutHelpers::IsBetterFillCandidate(
                                        v38,
                                        (const struct SnapLayoutHelpers::FillCandidate *)&v48,
                                        v39,
                                        v40,
                                        v48),
              v12 = v48,
              v42 = 1,
              !IsBetterFillCandidate) )
        {
          v42 = 0;
        }
        if ( (v9 & 4) != 0 )
        {
          v9 &= ~4u;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v56);
        }
        if ( v42 )
        {
          v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v57, 3LL);
          v43 = *v27;
          *v27 = 0LL;
          v44 = v12;
          v12 = v43;
          v48 = v43;
          if ( v44 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
          v30 = (__int64 *)v57;
          goto LABEL_43;
        }
        goto LABEL_44;
      }
      goto LABEL_13;
    }
    SnapLayoutHelpers::GetBorderAnchors(a1);
    BorderAnchors = SnapLayoutHelpers::GetBorderAnchors(AnchorLocationsFromRegion);
    v20 = a1 & v19;
    if ( (v21 & BorderAnchors) == 0 )
      goto LABEL_33;
    if ( (v20 & 5) != 0 )
    {
      v17 = (v20 & 0xA) == 0;
      goto LABEL_12;
    }
LABEL_13:
    if ( !v61(a1, AnchorLocationsFromRegion, (char *)&v51 + 4)
      || !v60(HIDWORD(v51))
      || (v22 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v52, 1LL),
          v9 |= 1u,
          a6 = v9,
          v25 = SnapLayoutHelpers::IsBetterFillCandidate(
                  v22,
                  (const struct SnapLayoutHelpers::FillCandidate *)&v48,
                  v23,
                  v24,
                  v48),
          v12 = v48,
          v26 = 1,
          !v25) )
    {
      v26 = 0;
    }
    if ( (v9 & 1) != 0 )
    {
      v9 &= ~1u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v52);
    }
    if ( v26 )
    {
      v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v53, 1LL);
      v28 = *v27;
      *v27 = 0LL;
      v29 = v12;
      v12 = v28;
      v48 = v28;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = (__int64 *)v53;
LABEL_43:
      v49 = v27[1];
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v30);
      goto LABEL_44;
    }
    if ( !(unsigned __int8)SnapLayoutHelpers::HasNonComplementaryEdge(a1, AnchorLocationsFromRegion, (char *)&v51 + 4)
      || !v60(HIDWORD(v51))
      || (v31 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v54, 2LL),
          v9 |= 2u,
          a6 = v9,
          v34 = SnapLayoutHelpers::IsBetterFillCandidate(
                  v31,
                  (const struct SnapLayoutHelpers::FillCandidate *)&v48,
                  v32,
                  v33,
                  v48),
          v12 = v48,
          v35 = 1,
          !v34) )
    {
      v35 = 0;
    }
    if ( (v9 & 2) != 0 )
    {
      v9 &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v54);
    }
    if ( v35 )
    {
      v27 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v50, v55, 2LL);
      v36 = *v27;
      *v27 = 0LL;
      v37 = v12;
      v12 = v36;
      v48 = v36;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      v30 = (__int64 *)v55;
      goto LABEL_43;
    }
LABEL_44:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
    ++v13;
  }
  while ( v13 != a5 );
  v45 = a7;
  if ( !v12 )
  {
LABEL_49:
    v8 = -2147467259;
    goto LABEL_50;
  }
  v46 = *a7;
  *a7 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  v45[1] = v49;
LABEL_50:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
  return v8;
}
