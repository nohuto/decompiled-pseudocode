/*
 * XREFs of ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1805B9CC8
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1801077CC (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1805BD1A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x1805B88EC (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1805BC1E8 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModePositioner::CleanupBackgroundViews(__int64 a1, __int64 a2, char a3)
{
  HRESULT OperableViews; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct IApplicationView *v9; // rdx
  int inited; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  void *ppvOut; // [rsp+20h] [rbp-59h] BYREF
  struct IObjectArray *v15; // [rsp+28h] [rbp-51h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-39h]
  __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  __int64 v20; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-21h]
  unsigned int v22; // [rsp+60h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-11h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-9h]
  __int128 v25; // [rsp+80h] [rbp+7h] BYREF
  int v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+94h] [rbp+1Bh]
  __m128i si128; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v15 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)&v15, a2);
LABEL_9:
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v20,
      (__int64)v15);
    v16 = 0;
    v17 = 0LL;
    v18 = &v20;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v16);
    v22 = v21;
    v23 = 0LL;
    v24 = &v20;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
    while ( 1 )
    {
      if ( v16 == v22 && v18 == v24 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        v6 = 0;
        goto LABEL_23;
      }
      v8 = v17;
      v19 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 184LL))(
              *(_QWORD *)(a1 + 248),
              v8) )
        break;
LABEL_21:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
      ++v16;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v16);
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
               (TabletModePositioner *)a1,
               v9,
               (struct IApplicationViewOperation **)&ppvOut);
    v11 = retaddr;
    if ( inited >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 96LL))(ppvOut, 0LL);
      if ( (a3 & 1) != 0 )
      {
        v25 = 0LL;
        v26 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v29 = 0;
        v27 = 1;
        v30 = 1;
        (*(void (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 144LL))(ppvOut, &v25);
      }
      inited = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 320LL))(v8, ppvOut);
      v11 = retaddr;
      if ( inited >= 0 )
        goto LABEL_20;
      v12 = 1854LL;
    }
    else
    {
      v12 = 1841LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_20:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_21;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  OperableViews = IUnknown_QueryService(
                    *(IUnknown **)(a1 + 16),
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &ppvOut);
  v6 = OperableViews;
  if ( OperableViews >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v15);
    v6 = OperableViews;
    if ( OperableViews >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v7 = 1830LL;
  }
  else
  {
    v7 = 1829LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)OperableViews);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v6;
}
