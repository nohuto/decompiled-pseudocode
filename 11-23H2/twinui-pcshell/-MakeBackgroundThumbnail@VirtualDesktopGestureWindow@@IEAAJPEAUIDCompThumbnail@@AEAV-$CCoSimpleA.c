/*
 * XREFs of ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18060FC40
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180619924 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     EnumWindowsHelpers::ForEachWindow__lambda_e99dd074b1c39f544766be5cae5c8ed4___ @ 0x180216534 (EnumWindowsHelpers--ForEachWindow__lambda_e99dd074b1c39f544766be5cae5c8ed4___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18056C140 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnail(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, unsigned __int64, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  __int64 *v19; // rax
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+48h]

  *a4 = 0LL;
  v23 = 0LL;
  if ( !*(_BYTE *)(a1 + 224) )
  {
    if ( *(_DWORD *)(a1 + 228) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        (__int64)a4);
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 120LL);
      v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v23);
      v24 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
      v11 = v15(v14, a2, v24, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v16);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 733LL;
        goto LABEL_9;
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 56);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 120LL);
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v23);
      v24 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
      v11 = v18(v17, *(_QWORD *)(a1 + 160), v24, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v19);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 737LL;
        goto LABEL_9;
      }
    }
LABEL_10:
    v21[0] = a1;
    v21[1] = &v23;
    v21[2] = a3;
    EnumWindowsHelpers::ForEachWindow__lambda_e99dd074b1c39f544766be5cae5c8ed4___((LPARAM)v21);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
    *a4 = v23;
    v12 = 0;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 120LL);
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v23);
  v24 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
  v11 = v9(v8, *(_QWORD *)(a1 + 160), v24, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v10);
  v12 = v11;
  if ( v11 >= 0 )
    goto LABEL_10;
  v13 = 727LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v11);
LABEL_11:
  Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v23);
  return v12;
}
