/*
 * XREFs of ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18066E8EC
 * Callers:
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18066EBC8 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180667060 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x180670BEC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180686FD8 (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapServiceProvider::GetSnapRectForDesktopMode(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        __int64 a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  const struct _GUID *v16; // r8
  int RectForRegion; // eax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  struct IImmersiveMonitor *v23; // [rsp+30h] [rbp-49h] BYREF
  __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  void *v25; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v26[4]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v27[16]; // [rsp+68h] [rbp-11h] BYREF
  int v28[4]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v29; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v23 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v23);
  v10 = v8(a2, AddressOf);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 == 2 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)v23 + 88LL))(v23, a4);
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
    v14 = CSnappedWindowModel_CreateInstance(
            (__int64)a2,
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32),
            1,
            (__int64)&GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06,
            &v24);
    v11 = v14;
    if ( v14 >= 0 )
    {
      memset(v26, 0, sizeof(v26));
      v15 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)v24 + 24LL))(
              v24,
              v23,
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
          v29 = 0LL;
          RectForRegion = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v23 + 88LL))(
                            v23,
                            &v29);
          v11 = RectForRegion;
          if ( RectForRegion >= 0 )
          {
            SnapLayoutHelpers::DetermineDefaultSnapRegionRect(v27, v13 + 8, &v29);
            RectForRegion = SnapLayoutHelpers::GetRectForRegion(v27, 0LL, v23, v26, v28, 0LL);
            v11 = RectForRegion;
            if ( RectForRegion >= 0 )
            {
              v19 = v28[1];
              v20 = v28[2];
              v21 = v28[3];
              *(_DWORD *)a4 = v28[0];
              *(_DWORD *)(a4 + 4) = v19;
              *(_DWORD *)(a4 + 8) = v20;
              *(_DWORD *)(a4 + 12) = v21;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
              CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v26);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
              goto LABEL_21;
            }
            v18 = 259LL;
          }
          else
          {
            v18 = 256LL;
          }
        }
        else
        {
          v18 = 251LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)RectForRegion);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF8,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)v15);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    goto LABEL_22;
  }
  v12 = 229LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v10);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return v11;
}
