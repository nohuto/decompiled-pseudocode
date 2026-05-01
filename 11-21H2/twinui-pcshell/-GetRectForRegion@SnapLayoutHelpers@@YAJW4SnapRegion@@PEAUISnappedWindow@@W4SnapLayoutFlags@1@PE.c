/*
 * XREFs of ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ @ 0x180591894 (--0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ.c)
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1805A26E0 (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@PEAPEAUISnappedWindow@@PEAW4FillRule@1@4@Z @ 0x1805A2EC0 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV-$CCoSimpleArray@V-$ComPtr@UISnappe.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A6A20 (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z.c)
 *     ?RepositionToHorizontalTarget@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapRegion@@W4Edge@1@PEAUISnappedWindow@@PEAU23@@Z @ 0x1805A7280 (-RepositionToHorizontalTarget@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapRegion@@W4Edge@1@P.c)
 *     ?RepositionToVerticalTarget@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapRegion@@W4Edge@1@PEAUISnappedWindow@@PEAU23@@Z @ 0x1805A739C (-RepositionToVerticalTarget@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapRegion@@W4Edge@1@PEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapLayoutHelpers::GetRectForRegion(
        unsigned int a1,
        __int64 a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        char a6,
        LPRECT lprc,
        LPRECT a8,
        RECT *a9)
{
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  RECT *v17; // rax
  int v18; // r12d
  int v19; // eax
  int v20; // r13d
  unsigned int v21; // eax
  unsigned int v22; // eax
  RECT v23; // xmm6
  LONG v24; // r14d
  int v25; // eax
  __int64 v26; // rdx
  LONG v27; // r15d
  __int64 v28; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v29; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v30; // [rsp+58h] [rbp-99h] BYREF
  _QWORD v31[3]; // [rsp+60h] [rbp-91h] BYREF
  LPRECT lprcDst; // [rsp+78h] [rbp-79h]
  LPRECT v33; // [rsp+80h] [rbp-71h]
  RECT rcSrc; // [rsp+88h] [rbp-69h] BYREF
  __int128 v35; // [rsp+98h] [rbp-59h] BYREF
  RECT v36; // [rsp+A8h] [rbp-49h] BYREF
  _BYTE v37[4]; // [rsp+B8h] [rbp-39h] BYREF
  char v38; // [rsp+BCh] [rbp-35h] BYREF
  char v39; // [rsp+CCh] [rbp-25h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+3Fh]

  lprcDst = lprc;
  v33 = a8;
  SetRectEmpty(lprc);
  SetRectEmpty(a8);
  v35 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*a4 + 88))(a4, &v35);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52C,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  rcSrc = 0LL;
  v36 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_35;
  rcSrc = *(RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)&v31[1], a1, (int *)&v35);
  SnapLayoutHelpers::SNAP_TARGET_DATA::SNAP_TARGET_DATA((SnapLayoutHelpers::SNAP_TARGET_DATA *)v37);
  if ( (int)SnapLayoutHelpers::ComputeSnapTargetDataForRegion(
              a1,
              v16,
              a4,
              a6,
              (SnapLayoutHelpers::SNAP_TARGET_DATA *)v37) >= 0 )
  {
    v17 = (RECT *)&v39;
    if ( (a3 & 2) != 0 )
      v17 = (RECT *)&v38;
    v36 = *v17;
  }
  if ( (a3 & 1) != 0 )
    goto LABEL_35;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  v18 = v29;
  if ( (int)SnapLayoutHelpers::DetermineFillWindow(
              a1,
              a5,
              (unsigned __int8 (__fastcall *)(_QWORD))&SnapLayoutHelpers::IsVerticalEdge,
              (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, unsigned int *))SnapLayoutHelpers::HasComplementaryVerticalEdge) < 0 )
    v18 = 4;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  v19 = SnapLayoutHelpers::DetermineFillWindow(
          a1,
          a5,
          (unsigned __int8 (__fastcall *)(_QWORD))&SnapLayoutHelpers::IsHorizontalEdge,
          (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, unsigned int *))&SnapLayoutHelpers::HasComplementaryHorizontalEdge);
  v20 = HIDWORD(v31[0]);
  if ( v19 < 0 )
    v20 = 4;
  if ( v20 == 1 && v18 == 1 )
  {
    if ( ((((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL))(v28) - 1) & 0xFFFFFFF9) != 0
       || (((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30) - 1) & 0xFFFFFFF9) != 0)
      && (((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL))(v28) - 1) & 0xFFFFFFF9) != 0 )
    {
      if ( (((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30) - 1) & 0xFFFFFFF9) == 0 )
      {
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30);
        SnapLayoutHelpers::HasNonComplementaryEdge(a1, v22, &v29);
        Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(&v28, &v30);
        goto LABEL_23;
      }
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL))(v28);
      SnapLayoutHelpers::HasNonComplementaryEdge(a1, v21, v31);
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(&v30, &v28);
    }
    *(RECT *)&v31[1] = rcSrc;
LABEL_24:
    v24 = v29;
    v25 = SnapLayoutHelpers::RepositionToVerticalTarget(&v31[1], a1, (unsigned int)v29, v28, &rcSrc);
    v14 = v25;
    if ( v25 < 0 )
    {
      v26 = 1404LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      return v14;
    }
    v23 = *(RECT *)&v31[1];
    goto LABEL_28;
  }
LABEL_23:
  v23 = rcSrc;
  *(RECT *)&v31[1] = rcSrc;
  if ( v20 != 4 )
    goto LABEL_24;
  v24 = v29;
LABEL_28:
  v27 = v31[0];
  if ( v18 != 4 )
  {
    v25 = SnapLayoutHelpers::RepositionToHorizontalTarget(&rcSrc, a1, LODWORD(v31[0]), v30, &rcSrc);
    v14 = v25;
    if ( v25 < 0 )
    {
      v26 = 1409LL;
      goto LABEL_31;
    }
  }
  if ( a9 )
  {
    a9->left = v18;
    a9->top = v20;
    a9->right = v27;
    a9->bottom = v24;
    a9[1] = v23;
    a9[2] = rcSrc;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
LABEL_35:
  CopyRect(lprcDst, &rcSrc);
  CopyRect(v33, &v36);
  return 0LL;
}
