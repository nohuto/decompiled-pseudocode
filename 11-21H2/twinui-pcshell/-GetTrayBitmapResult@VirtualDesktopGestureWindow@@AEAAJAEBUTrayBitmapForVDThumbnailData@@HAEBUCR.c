/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAUIDCompThumbnail@@@Z @ 0x180551E5C
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x180556BA0 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
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
  void *v9; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v19; // r9
  void *v20; // r8
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  __int128 v25; // [rsp+50h] [rbp-49h]
  _BYTE pv[4]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v27; // [rsp+64h] [rbp-35h]
  struct tagPOINT Points[2]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  *(_QWORD *)&v25 = a4;
  v9 = *(void **)(a2 + 16);
  if ( !v9 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  if ( GetObjectW(v9, 32, pv) )
  {
    v23 = 0LL;
    if ( *(_DWORD *)(a1 + 224) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v11);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 80LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
      v24 = v27;
      v15 = v14(v13, a6, v27, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v23);
      v12 = v15;
      if ( v15 < 0 )
      {
        v16 = 466LL;
        goto LABEL_20;
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 56);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 80LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
      v24 = v27;
      v15 = v18(v17, *(_QWORD *)(a1 + 160), v27, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v23);
      v12 = v15;
      if ( v15 < 0 )
      {
        v16 = 470LL;
        goto LABEL_20;
      }
    }
    v24 = a2;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), __int64 *))(*(_QWORD *)v23 + 88LL))(
      v23,
      LambdaCustomPaintProc<_lambda_a23a69face5139fd4d46e6de322de060_,HDC__ *>,
      &v24);
    *(_OWORD *)&Points[0].x = *(_OWORD *)v25;
    MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
    if ( *(_DWORD *)(a1 + 224) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v19);
      LODWORD(v25) = 0;
      DWORD1(v25) = Points[0].y;
      DWORD2(v25) = Points[1].x - Points[0].x;
      HIDWORD(v25) = Points[1].y;
      *(_OWORD *)&Points[0].x = v25;
    }
    else
    {
      Points[0].x += a3;
      Points[1].x += a3;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v23 + 24LL))(
            v23,
            Points,
            0LL,
            0LL);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v21 = a5[1];
      if ( v21 != a5[3]
        || (v15 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)a5,
                    v21 + 1,
                    v20),
            v12 = v15,
            v15 >= 0) )
      {
        v22 = (__int64 *)(*a5 + 8 * a5[1]++);
        if ( v22 )
        {
          *v22 = v23;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
        }
        v12 = 0;
        goto LABEL_24;
      }
      v16 = 494LL;
    }
    else
    {
      v16 = 493LL;
    }
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v15);
LABEL_24:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
    return v12;
  }
  v12 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CE,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x80004005LL);
  return v12;
}
