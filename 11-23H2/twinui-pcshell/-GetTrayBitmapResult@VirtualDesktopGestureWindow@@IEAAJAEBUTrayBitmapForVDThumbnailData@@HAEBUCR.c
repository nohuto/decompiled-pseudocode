/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@IEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAUIDCompThumbnail@@@Z @ 0x18060DB1C
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x180612E80 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ThumbnailCustomPaint__lambda_630a6a22fbdb797c79937bea35e7e306___ @ 0x180216AD4 (ThumbnailCustomPaint__lambda_630a6a22fbdb797c79937bea35e7e306___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18056C140 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::GetTrayBitmapResult(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  void *v8; // rcx
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v22; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // r9
  int v25; // eax
  void *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // [rsp+48h] [rbp-71h] BYREF
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  __int128 v32; // [rsp+60h] [rbp-59h]
  __int64 v33; // [rsp+70h] [rbp-49h]
  _BYTE pv[4]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v35; // [rsp+7Ch] [rbp-3Dh]
  struct tagPOINT Points[2]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v32 = a4;
  v31 = a2;
  v33 = a6;
  v8 = *(void **)(a2 + 16);
  if ( !v8 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  if ( GetObjectW(v8, 32, pv) )
  {
    v30 = 0LL;
    if ( *(_BYTE *)(a1 + 224) )
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 80LL);
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v30);
      v15 = v13(v12, *(_QWORD *)(a1 + 160), v35, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v14);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 375LL;
LABEL_15:
        v23 = (unsigned int)v15;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v23);
LABEL_30:
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v30);
        return (unsigned int)v11;
      }
    }
    else if ( *(_DWORD *)(a1 + 228) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v10);
      v17 = *(_QWORD *)(a1 + 56);
      v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 80LL);
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v30);
      v15 = v18(v17, v33, v35, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v19);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 381LL;
        goto LABEL_15;
      }
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 56);
      v21 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 80LL);
      v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v30);
      v15 = v21(v20, *(_QWORD *)(a1 + 160), v35, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v22);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 385LL;
        goto LABEL_15;
      }
    }
    ThumbnailCustomPaint__lambda_630a6a22fbdb797c79937bea35e7e306_(v30, (__int64)&v31);
    *(_OWORD *)&Points[0].x = *(_OWORD *)v32;
    MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
    if ( *(_BYTE *)(a1 + 224) || *(_DWORD *)(a1 + 228) != 2 )
    {
      Points[0].x += a3;
      Points[1].x += a3;
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v24);
      LODWORD(v32) = 0;
      DWORD1(v32) = Points[0].y;
      DWORD2(v32) = Points[1].x - Points[0].x;
      HIDWORD(v32) = Points[1].y;
      *(_OWORD *)&Points[0].x = v32;
    }
    v25 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v30 + 24LL))(
            v30,
            Points,
            0LL,
            0LL);
    v11 = v25;
    if ( v25 < 0 )
    {
      v23 = (unsigned int)v25;
      v16 = 417LL;
      goto LABEL_28;
    }
    v11 = 0;
    v27 = a5[1];
    if ( v27 != a5[3]
      || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)a5,
                  v27 + 1,
                  v26),
          v11 >= 0) )
    {
      v28 = a5[1];
      a5[1] = v28 + 1;
      v29 = (__int64 *)(*a5 + 8 * v28);
      if ( !v29 )
        goto LABEL_29;
      *v29 = v30;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
    }
    if ( v11 < 0 )
    {
      v23 = (unsigned int)v11;
      v16 = 418LL;
      goto LABEL_28;
    }
LABEL_29:
    v11 = 0;
    goto LABEL_30;
  }
  v11 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x173,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x80004005LL);
  return (unsigned int)v11;
}
