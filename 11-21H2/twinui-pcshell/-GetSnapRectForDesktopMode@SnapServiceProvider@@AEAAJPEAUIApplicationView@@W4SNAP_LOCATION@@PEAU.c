/*
 * XREFs of ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C
 * Callers:
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18059F7E0 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1805A26E0 (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805AB918 (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapServiceProvider::GetSnapRectForDesktopMode(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _QWORD *a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // edi
  int Instance; // eax
  int v15; // eax
  const struct _GUID *v16; // r8
  int RectForRegion; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-69h]
  struct IImmersiveMonitor *v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  void *v25; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v26[4]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v27[16]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v28; // [rsp+78h] [rbp-11h] BYREF
  int v29[4]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a4 = 0LL;
  a4[1] = 0LL;
  v23 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v23);
  v10 = v8(a2, AddressOf);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 == 2 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)v23 + 88LL))(v23, a4);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 233LL;
        goto LABEL_6;
      }
LABEL_21:
      v11 = 0;
      goto LABEL_22;
    }
    v13 = a3 != 0 ? 0xFFFFFFFC : 0;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    Instance = CSnappedWindowModel_CreateInstance(
                 (__int64)a2,
                 *(_QWORD *)(a1 + 24),
                 *(_QWORD *)(a1 + 32),
                 1,
                 v22,
                 (CSnappedWindowModel *)&v24);
    v11 = Instance;
    if ( Instance >= 0 )
    {
      memset(v26, 0, sizeof(v26));
      v15 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(
              v24,
              v23,
              1LL,
              v26);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        RectForRegion = CSnappedWindow::s_CreateInstance(v23, a2, v16, &v25);
        v11 = RectForRegion;
        if ( RectForRegion >= 0 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
            1u,
            v18,
            v19);
          v28 = 0LL;
          RectForRegion = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v23 + 88LL))(
                            v23,
                            &v28);
          v11 = RectForRegion;
          if ( RectForRegion >= 0 )
          {
            SnapLayoutHelpers::DetermineDefaultSnapRegionRect(v27, v13 + 8, &v28);
            RectForRegion = SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion(v27, 0LL, v23, v26, v29, 0LL);
            v11 = RectForRegion;
            if ( RectForRegion >= 0 )
            {
              *(_OWORD *)a4 = *(_OWORD *)v29;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
              CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v26);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
              goto LABEL_21;
            }
            v20 = 261LL;
          }
          else
          {
            v20 = 258LL;
          }
        }
        else
        {
          v20 = 251LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)RectForRegion);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF8,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)v15);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)Instance);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    goto LABEL_22;
  }
  v12 = 229LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v10);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return v11;
}
