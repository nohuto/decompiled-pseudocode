/*
 * XREFs of ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180052360
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800525BC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x180040458 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1800522FC (-XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XSTest1@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FB50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XSTest1@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XSTest0@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18049AC78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XSTest0@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1805FDBE4 (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806045D8 (-XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18060C924 (-XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PE.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMultitaskingViewManager::_CreateXamlMTVHost(
        _QWORD *a1,
        int a2,
        void *a3,
        const char *a4,
        _QWORD *a5)
{
  void *v6; // r15
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  int v14; // r14d
  int v15; // r14d
  const struct _GUID *v16; // rdx
  int Instance; // eax
  unsigned int v18; // ebx
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // rbx
  __int64 (__fastcall *v23)(_QWORD, GUID *, __int64 *); // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v27)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD **); // rdi
  __int64 (__fastcall *v29)(_QWORD, GUID *, _QWORD **); // rbx
  int v30; // r14d
  int v31; // r14d
  const struct _GUID *v32; // rdx
  __int64 v33; // rdx
  const struct _GUID *v34; // rdx
  const struct _GUID *v35; // rdx
  void *v36[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v37[2]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-81h] BYREF
  void *v39; // [rsp+58h] [rbp-71h]
  __int64 v40; // [rsp+60h] [rbp-69h]
  __int64 v41; // [rsp+68h] [rbp-61h]
  __int64 v42; // [rsp+70h] [rbp-59h]
  __int64 v43; // [rsp+78h] [rbp-51h]
  __int64 v44; // [rsp+80h] [rbp-49h]
  __int64 v45; // [rsp+88h] [rbp-41h]
  __int64 v46; // [rsp+90h] [rbp-39h]
  __int64 v47; // [rsp+98h] [rbp-31h]
  __int64 v48; // [rsp+A0h] [rbp-29h]
  __int64 v49; // [rsp+A8h] [rbp-21h]
  __int64 v50; // [rsp+B0h] [rbp-19h]
  __int64 v51; // [rsp+B8h] [rbp-11h]
  __int64 v52; // [rsp+C0h] [rbp-9h]
  _QWORD *v53; // [rsp+C8h] [rbp-1h]
  __int64 v54; // [rsp+D0h] [rbp+7h]
  __int64 v55; // [rsp+D8h] [rbp+Fh]
  __int64 v56; // [rsp+E0h] [rbp+17h]
  __int64 v57; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+57h]
  __int64 v59; // [rsp+128h] [rbp+5Fh] BYREF

  v6 = a3;
  v9 = a5;
  *a5 = 0LL;
  v10 = 0LL;
  v37[0] = 0LL;
  v11 = 0LL;
  v59 = 0LL;
  v12 = 0LL;
  a5 = 0LL;
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[31];
  if ( !v13 || !a1[32] || !a1[33] )
    goto LABEL_2;
  v23 = **v13;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
  v24 = v23(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v37);
  v18 = v24;
  if ( v24 >= 0 )
  {
    v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[32];
    v27 = **v26;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v59);
    v24 = v27(v26, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v59);
    v18 = v24;
    if ( v24 < 0 )
    {
      v25 = 819LL;
      goto LABEL_21;
    }
    v28 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))a1[33];
    v29 = **v28;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
    v24 = v29(v28, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &a5);
    v18 = v24;
    if ( v24 < 0 )
    {
      v25 = 820LL;
      goto LABEL_21;
    }
    v10 = v37[0];
    v11 = v59;
    v12 = a5;
LABEL_2:
    v38[0] = a1;
    v38[1] = a1[11];
    if ( v6 )
      v39 = v6;
    else
      v39 = (void *)a1[12];
    v40 = a1[14];
    v41 = a1[19];
    v42 = a1[30];
    v43 = a1[20];
    v44 = a1[29];
    v45 = a1[26];
    v46 = a1[25];
    v47 = a1[27];
    v48 = a1[28];
    v49 = a1[15];
    v50 = a1[18];
    v51 = v10;
    v52 = v11;
    v53 = v12;
    v54 = a1[34];
    v55 = a1[22];
    v56 = a1[21];
    v57 = a1[35];
    *(_OWORD *)v36 = 0LL;
    v14 = a2 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        LOBYTE(a3) = 3;
        LOBYTE(v12) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
          v12,
          a3);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
        Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v38, v16, v36);
        v18 = Instance;
        if ( Instance >= 0 )
          goto LABEL_7;
        v33 = 862LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)Instance,
          (int)v36[0]);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
        goto LABEL_38;
      }
      v30 = v15 - 2;
      if ( v30 )
      {
        v31 = v30 - 4;
        if ( !v31 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x36E,
            (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            a4);
        if ( v31 != 8 )
          goto LABEL_7;
        LOBYTE(v12) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
          v12);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
        Instance = XamlVirtualDesktopSwitcherHost_CreateInstance(
                     (const struct XamlViewHostInitializeArgs *)v38,
                     v32,
                     v36);
        v18 = Instance;
        if ( Instance >= 0 )
          goto LABEL_7;
        v33 = 883LL;
        goto LABEL_37;
      }
      LOBYTE(a3) = 3;
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XSTest1>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XSTest1>::GetImpl'::`2'::impl,
        v12,
        a3);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      Instance = XamlSnapAssistViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v38, v34, v36);
      v18 = Instance;
      if ( Instance < 0 )
      {
        v33 = 874LL;
        goto LABEL_37;
      }
    }
    else
    {
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XSTest0>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XSTest0>::GetImpl'::`2'::impl,
        v12);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      Instance = XamlAltTabViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v38, v35, v36);
      v18 = Instance;
      if ( Instance < 0 )
      {
        v33 = 854LL;
        goto LABEL_37;
      }
    }
LABEL_7:
    v19 = a1 + 36;
    v20 = v19[1];
    if ( v20 != v19[3]
      || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
                (__int64)v19,
                v20 + 1,
                a3) >= 0 )
    {
      v21 = (__int64 *)(*v19 + 16 * v19[1]++);
      if ( v21 )
      {
        *v21 = (__int64)v36[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
        v21[1] = (__int64)v36[1];
        if ( v36[1] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v36[1] + 8LL))(v36[1]);
      }
    }
    Instance = (**(__int64 (__fastcall ***)(void **, const char *, _QWORD *))v36[0])((void **)v36[0], a4, v9);
    v18 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v59);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
      return 0LL;
    }
    v33 = 889LL;
    goto LABEL_37;
  }
  v25 = 818LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    (const char *)(unsigned int)v24,
    (int)v36[0]);
LABEL_38:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v59);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
  return v18;
}
