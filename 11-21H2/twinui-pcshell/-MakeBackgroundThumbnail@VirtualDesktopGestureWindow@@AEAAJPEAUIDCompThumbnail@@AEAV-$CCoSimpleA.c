/*
 * XREFs of ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x180553ADC
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnail(LPARAM a1, __int64 a2, LPARAM a3, _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, unsigned __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  LPARAM lParam[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h]

  *a4 = 0LL;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 224) != 2 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 120LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
    v19 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
    v10 = v14(v13, *(_QWORD *)(a1 + 160), v19, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v18);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 802LL;
      goto LABEL_6;
    }
LABEL_7:
    lParam[0] = a1;
    lParam[1] = (LPARAM)&v18;
    lParam[2] = a3;
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_a425b2bf6a9082128a2a793a97fde569_>,
      (LPARAM)lParam);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    *a4 = v18;
    v11 = 0;
    goto LABEL_8;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)a4);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  v19 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
  v10 = v9(v8, a2, v19, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v18);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_7;
  v12 = 798LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_8:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  return v11;
}
