/*
 * XREFs of _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740
 * Callers:
 *     wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___ @ 0x1804FA638 (wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003AD20 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x18003E7F8 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180055D14 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180056600 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1800F12CC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1590 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3074 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1804FB640 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1804FCA40 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_c6623334da8ed11a0378a692878c9731_::operator()(__int64 a1)
{
  IUnknown *v2; // r15
  struct IApplicationView **v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  struct IApplicationViewPosition *v6; // rbx
  struct IAppLayout **v7; // r14
  CDesktopPositioner *v8; // rcx
  char v9; // di
  int v10; // ecx
  CDesktopPositioner *v11; // rcx
  __int64 **v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rax
  CDesktopPositioner *v15; // rcx
  int v16; // eax
  unsigned __int8 v18[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationView *v19; // [rsp+40h] [rbp-C8h] BYREF
  struct IApplicationViewPosition *v20; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v24[44]; // [rsp+60h] [rbp-A8h]
  struct tagRECT v25; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  _DWORD v29[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-28h]
  __m128i v31; // [rsp+F0h] [rbp-18h]
  struct tagRECT v32; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v33; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT v34; // [rsp+128h] [rbp+20h] BYREF

  v2 = *(IUnknown **)a1;
  v3 = *(struct IApplicationView ***)(a1 + 8);
  v19 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v21 = *(struct IApplicationViewPosition **)(*(_QWORD *)std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
                                                           &v2[43].lpVtbl,
                                                           (__int64)&v25)
                                            + 40LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  v6 = v21;
  if ( v21 )
  {
LABEL_4:
    v20 = 0LL;
    v7 = *(struct IAppLayout ***)(a1 + 16);
    if ( *v7 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      if ( (int)CDesktopPositioner::_FixPositionForLayout(v8, *v3, *v7, v21, &v20) >= 0 )
        goto LABEL_9;
      v6 = v21;
    }
    if ( v20 != v6 )
    {
      v19 = v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v19 = v20;
      v20 = v6;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
    }
LABEL_9:
    v9 = 0;
    v10 = **(_DWORD **)(a1 + 24);
    if ( v10 == 3 )
    {
      v19 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v20,
                  (__int64 *)&v19) >= 0
        && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v19 + 32LL))(v19, &v22) >= 0
        && v22 == 3
        && (*(int (__fastcall **)(struct IApplicationView *, struct tagRECT *))(*(_QWORD *)v19 + 56LL))(v19, &v32) >= 0 )
      {
        CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v11, &v32, &v33);
        v9 = 1;
        CDesktopPositioner::_FixRectForWorkArea((__int64)v2, 1, &v33.left, 0LL, &v34);
        v12 = *(__int64 ***)(a1 + 32);
        (*(void (__fastcall **)(__int64 *, __int64))(**v12 + 48))(*v12, 3LL);
        v13 = *v12;
        v14 = **v12;
        v25 = v34;
        (*(void (__fastcall **)(__int64 *, struct tagRECT *))(v14 + 56))(v13, &v25);
        (*(void (__fastcall **)(__int64 *, __int64))(**v12 + 72))(*v12, 1LL);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
      if ( v9 )
        goto LABEL_31;
    }
    else if ( v10 == 4 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      v18[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v15, **(struct IUnknown ***)(a1 + 40), v18) >= 0 && !v18[0] )
      {
        v19 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v20,
                    (__int64 *)&v19) >= 0
          && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v19 + 32LL))(v19, &v22) >= 0
          && v22 == 1
          && (*(int (__fastcall **)(struct IApplicationView *, _DWORD *))(*(_QWORD *)v19 + 72LL))(v19, v29) >= 0 )
        {
          *(_DWORD *)v24 = 44;
          *(_DWORD *)&v24[4] = v29[0];
          *(_DWORD *)&v24[8] = v29[1];
          *(_OWORD *)&v24[12] = v30;
          *(__m128i *)&v24[28] = v31;
          v26[0] = *(_OWORD *)v24;
          v26[1] = *(_OWORD *)&v24[16];
          v27 = *(__int64 *)((char *)v31.m128i_i64 + 4);
          v28 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12));
          DWORD2(v26[0]) = 1;
          if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v19 + 64LL))(v19, &v23) >= 0 )
          {
            v16 = 1;
            if ( v23 == 1 )
              v16 = 3;
            DWORD2(v26[0]) = v16;
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
          Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
            &v19,
            v26);
          Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(
            (__int64 *)&v20,
            (__int64 *)&v19);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 96LL))(**(_QWORD **)(a1 + 32), 1LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(***(_QWORD ***)(a1 + 32) + 80LL))(
      **(_QWORD **)(a1 + 32),
      v20);
LABEL_31:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  if ( (int)CDesktopPositioner::_GetRestorePosition(v2, *v3, 0LL, &v21) >= 0 )
  {
    v6 = v21;
    goto LABEL_4;
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
}
