/*
 * XREFs of ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8
 * Callers:
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z @ 0x1805A1944 (--0-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z.c)
 *     ?GetBorderAnchors@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@W4312@@Z @ 0x1805A39E8 (-GetBorderAnchors@AdvancedSmartFill@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@12@W4312@.c)
 *     ?GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@AEBUCRect@Geometry@@0H@Z @ 0x1805A64B0 (-GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocatio.c)
 *     ?HasNonComplementaryEdge@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@12@0PEAW4Edge@2@@Z @ 0x1805A69B4 (-HasNonComplementaryEdge@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@12.c)
 *     ?IsBetterFillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@YA_NAEBUFillCandidate@12@0PEBW4FillRule@2@I@Z @ 0x1805A6B78 (-IsBetterFillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@YA_NAEBUFillCandidate@12@0PEBW4FillR.c)
 *     ?WithRule@FillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AU123@W4FillRule@3@@Z @ 0x1805A7614 (-WithRule@FillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@QEAA-AU123@W4FillRule@3@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow(
        unsigned int a1,
        __int64 **a2,
        unsigned __int8 (__fastcall *a3)(_QWORD),
        unsigned __int8 (__fastcall *a4)(_QWORD, _QWORD, char *),
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned int v9; // edi
  int v10; // r14d
  __int64 v11; // rsi
  __int64 *v12; // rcx
  __int64 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int SnapRegionAnchorLocations; // r15d
  bool v17; // zf
  int BorderAnchors; // eax
  char v19; // cl
  int v20; // edx
  SnapLayoutHelpers::AdvancedSmartFill *v21; // rax
  const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *v22; // r8
  const enum SnapLayoutHelpers::FillRule *v23; // r9
  bool v24; // al
  char v25; // bl
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rcx
  SnapLayoutHelpers::AdvancedSmartFill *v30; // rax
  const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *v31; // r8
  const enum SnapLayoutHelpers::FillRule *v32; // r9
  bool v33; // al
  char v34; // bl
  __int64 v35; // rax
  __int64 v36; // rcx
  SnapLayoutHelpers::AdvancedSmartFill *v37; // rax
  const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *v38; // r8
  const enum SnapLayoutHelpers::FillRule *v39; // r9
  bool IsBetterFillCandidate; // al
  char v41; // bl
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // r12
  __int64 v45; // rbx
  unsigned int v47[2]; // [rsp+20h] [rbp-C1h] BYREF
  __int64 v48; // [rsp+28h] [rbp-B9h]
  int v49; // [rsp+30h] [rbp-B1h]
  __int64 v50; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v51; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v52; // [rsp+48h] [rbp-99h] BYREF
  unsigned __int8 (__fastcall *v53)(_QWORD); // [rsp+50h] [rbp-91h]
  unsigned __int8 (__fastcall *v54)(_QWORD, _QWORD, char *); // [rsp+58h] [rbp-89h]
  __int64 v55; // [rsp+60h] [rbp-81h]
  __int64 v56; // [rsp+68h] [rbp-79h]
  _QWORD *v57; // [rsp+70h] [rbp-71h]
  __int64 v58[2]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v59[16]; // [rsp+88h] [rbp-59h] BYREF
  __int64 v60[2]; // [rsp+98h] [rbp-49h] BYREF
  _BYTE v61[16]; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v62[2]; // [rsp+B8h] [rbp-29h] BYREF
  _BYTE v63[16]; // [rsp+C8h] [rbp-19h] BYREF
  _BYTE v64[16]; // [rsp+D8h] [rbp-9h] BYREF

  v54 = a4;
  v53 = a3;
  v7 = a1;
  v8 = a5;
  v56 = a5;
  v57 = a7;
  v9 = 0;
  v10 = 0;
  v49 = 0;
  v11 = 0LL;
  *(_QWORD *)v47 = 0LL;
  v48 = 0LL;
  v12 = *a2;
  v55 = (__int64)&(*a2)[(_QWORD)a2[1]];
  if ( v12 == (__int64 *)v55 )
    goto LABEL_46;
  v13 = v12;
  do
  {
    v52 = *v13;
    v14 = v52;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v52);
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 48LL))(v14, v64);
    SnapRegionAnchorLocations = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(v15, v8, a6);
    wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>(
      &v50,
      v14);
    v51 = 0LL;
    if ( (_DWORD)v7 == SnapRegionAnchorLocations )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_30;
      v17 = ((v7 - 1) & v7) == 0;
LABEL_9:
      if ( !v17 )
      {
LABEL_30:
        if ( !v54((unsigned int)v7, SnapRegionAnchorLocations, (char *)&v51 + 4)
          || !v53(HIDWORD(v51))
          || (v37 = (SnapLayoutHelpers::AdvancedSmartFill *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(
                                                              &v50,
                                                              v62,
                                                              3LL),
              v10 |= 4u,
              v49 = v10,
              IsBetterFillCandidate = SnapLayoutHelpers::AdvancedSmartFill::IsBetterFillCandidate(
                                        v37,
                                        (const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *)v47,
                                        v38,
                                        v39,
                                        v47[0]),
              v11 = *(_QWORD *)v47,
              v41 = 1,
              !IsBetterFillCandidate) )
        {
          v41 = 0;
        }
        if ( (v10 & 4) != 0 )
        {
          v10 &= ~4u;
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v62);
        }
        if ( v41 )
        {
          v26 = (__int64 *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(&v50, v63, 3LL);
          v42 = *v26;
          *v26 = 0LL;
          v43 = v11;
          v11 = v42;
          *(_QWORD *)v47 = v42;
          if ( v43 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          v29 = (__int64 *)v63;
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      goto LABEL_10;
    }
    SnapLayoutHelpers::AdvancedSmartFill::GetBorderAnchors((unsigned int)v7);
    BorderAnchors = SnapLayoutHelpers::AdvancedSmartFill::GetBorderAnchors(SnapRegionAnchorLocations);
    v19 = SnapRegionAnchorLocations & v7;
    if ( (v20 & BorderAnchors) == 0 )
      goto LABEL_30;
    if ( (v19 & 5) != 0 )
    {
      v17 = (v19 & 0xA) == 0;
      goto LABEL_9;
    }
LABEL_10:
    if ( !v54((unsigned int)v7, SnapRegionAnchorLocations, (char *)&v51 + 4)
      || !v53(HIDWORD(v51))
      || (v21 = (SnapLayoutHelpers::AdvancedSmartFill *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(
                                                          &v50,
                                                          v58,
                                                          1LL),
          v10 |= 1u,
          v49 = v10,
          v24 = SnapLayoutHelpers::AdvancedSmartFill::IsBetterFillCandidate(
                  v21,
                  (const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *)v47,
                  v22,
                  v23,
                  v47[0]),
          v11 = *(_QWORD *)v47,
          v25 = 1,
          !v24) )
    {
      v25 = 0;
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v58);
    }
    if ( v25 )
    {
      v26 = (__int64 *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(&v50, v59, 1LL);
      v27 = *v26;
      *v26 = 0LL;
      v28 = v11;
      v11 = v27;
      *(_QWORD *)v47 = v27;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = (__int64 *)v59;
LABEL_40:
      v48 = v26[1];
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v29);
      goto LABEL_41;
    }
    if ( !(unsigned __int8)SnapLayoutHelpers::AdvancedSmartFill::HasNonComplementaryEdge(
                             (unsigned int)v7,
                             SnapRegionAnchorLocations,
                             (char *)&v51 + 4)
      || !v53(HIDWORD(v51))
      || (v30 = (SnapLayoutHelpers::AdvancedSmartFill *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(
                                                          &v50,
                                                          v60,
                                                          2LL),
          v10 |= 2u,
          v49 = v10,
          v33 = SnapLayoutHelpers::AdvancedSmartFill::IsBetterFillCandidate(
                  v30,
                  (const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *)v47,
                  v31,
                  v32,
                  v47[0]),
          v11 = *(_QWORD *)v47,
          v34 = 1,
          !v33) )
    {
      v34 = 0;
    }
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v60);
    }
    if ( v34 )
    {
      v26 = (__int64 *)SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(&v50, v61, 2LL);
      v35 = *v26;
      *v26 = 0LL;
      v36 = v11;
      v11 = v35;
      *(_QWORD *)v47 = v35;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v29 = (__int64 *)v61;
      goto LABEL_40;
    }
LABEL_41:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
    ++v13;
    v8 = v56;
  }
  while ( v13 != (__int64 *)v55 );
  v44 = v57;
  if ( !v11 )
  {
LABEL_46:
    v9 = -2147467259;
    goto LABEL_47;
  }
  v45 = *v57;
  *v57 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v44[1] = v48;
LABEL_47:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v47);
  return v9;
}
