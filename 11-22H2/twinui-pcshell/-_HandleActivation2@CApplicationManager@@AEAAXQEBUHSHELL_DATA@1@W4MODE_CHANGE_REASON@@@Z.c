/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870
 * Callers:
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18004394C (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180052918 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D2490 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1803A34BC (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800482C4 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x180052A30 (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1800D263C (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180163AB4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1801740DC (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x18017415C (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18039E58C (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 *     ?_ShouldAlwaysDismissImmersiveRealm@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x1803A4560 (-_ShouldAlwaysDismissImmersiveRealm@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rax
  HWND v7; // r15
  bool v8; // si
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  IUnknown *v13; // rax
  void *v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  unsigned __int64 i; // rbx
  __int64 v18; // rbx
  __int64 v19; // r12
  PSRWLOCK v20; // rsi
  IUnknown *Ptr; // r13
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  void (__fastcall *v25)(__int64, GUID *, IUnknown **); // rbx
  HRESULT v26; // ebx
  IUnknown *v27; // rcx
  IUnknown *v28; // r11
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  IUnknown *v32; // rcx
  void *v33; // rcx
  __int64 *AddressOf; // rax
  __int64 v35; // rsi
  int (__fastcall *v36)(__int64, HWND, GUID *, GUID *, IUnknown **); // rbx
  IUnknown *v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 *v39; // rdx
  IUnknown **p_punk; // rcx
  IUnknown *v41; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rsi
  __int64 *v43; // rax
  IUnknown *v44; // rbx
  unsigned __int64 v45; // rcx
  IUnknown **v46; // rdx
  int v47[2]; // [rsp+20h] [rbp-E0h]
  __int64 v48; // [rsp+28h] [rbp-D8h]
  IUnknown *v49; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  IUnknown *v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v60; // [rsp+94h] [rbp-6Ch]
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D0h] [rbp-30h]
  __int64 v69[2]; // [rsp+D8h] [rbp-28h] BYREF
  HWND v70; // [rsp+E8h] [rbp-18h] BYREF
  int v71; // [rsp+F0h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  void *ppvOut; // [rsp+160h] [rbp+60h] BYREF
  IUnknown *v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+170h] [rbp+70h] BYREF
  int v78; // [rsp+178h] [rbp+78h]

  v77 = a3;
  v61 = 0;
  if ( a1 )
    v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 392);
  else
    v6 = 0LL;
  lpCriticalSection = v6;
  v72 = v6;
  v62 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v73 = v62;
  v7 = *(HWND *)(a2 + 8);
  v8 = 1;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v63 = 0LL;
    v9 = 0;
    if ( !*(_BYTE *)(a2 + 20) && !*(_BYTE *)(a2 + 21) )
    {
      v9 = 1;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
      {
        if ( !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v7) )
          v9 = 3;
      }
      else
      {
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v63);
        CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v7, (struct IImmersiveMonitor **)AddressOf);
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
    {
      if ( CApplicationManager::_ShouldAlwaysDismissImmersiveRealm((CApplicationManager *)a1, v7)
        || (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v7, v9) < 0
        || !CApplicationManager::_IsMultimon((CApplicationManager *)a1)
        || *(_DWORD *)(a2 + 24) != 1 )
      {
        goto LABEL_12;
      }
    }
    else
    {
      if ( v7 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
        || v7 == (HWND)1
        || (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v7, v9) < 0
        || v63
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(
              *(_QWORD *)(a1 + 536),
              v7) )
      {
        goto LABEL_12;
      }
      (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 560) + 32LL))(*(_QWORD *)(a1 + 560), &v59);
      if ( v59 <= 1 || *(_DWORD *)(a2 + 24) != 1 )
        goto LABEL_12;
    }
    v8 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v7);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v63);
  }
  ppv = 0LL;
  v49 = 0LL;
  v10 = 0LL;
  v64 = 0LL;
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
    v70 = v7;
    v71 = 2;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(a1, (__int64)&v70, &v49, &v64) < 0 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
        *(_QWORD *)(a1 + 576),
        0LL,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
      IUnknown_GetSite(v49, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v10 = v64;
  }
  v11 = *(__int64 **)(a1 + 592);
  v12 = *v11;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v12 + 40))(v11, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v12 + 48))();
  *(_QWORD *)(a1 + 488) = v7;
  *(_DWORD *)(a1 + 504) = a3;
  v13 = v49;
  if ( v49 )
  {
    Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=((__int64 *)(a1 + 512), (__int64)v49);
    v13 = v49;
  }
  if ( *(_DWORD *)(a2 + 16) != 2 || v13 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24),
      v8);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(a2 + 24),
    *(unsigned int *)(a2 + 16),
    *(unsigned __int8 *)(a2 + 28));
  v14 = ppv;
  if ( ppv && v49 )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           v49,
           v7,
           0LL,
           2,
           0LL) >= 0
      && v10 )
    {
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
        a1 + 624,
        &v49,
        v10);
    }
    v14 = ppv;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    if ( !v49 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 40LL))(v14, 4LL);
  }
  else
  {
    if ( v14 )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
           *(_QWORD *)(a1 + 576),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &ppv) >= 0 )
    {
      if ( v8 )
        v15 = *(unsigned int *)(a2 + 24);
      else
        v15 = 0LL;
      (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppv + 40LL))(ppv, 4LL, v15);
    }
  }
  v58 = 0LL;
  v53 = 0LL;
  v78 = 0xFFFF;
  LOBYTE(v10) = 1;
  LODWORD(v76) = v10;
  if ( GetShellWindow() == v7
    || (unsigned int)GetPropW(v7, L"MultimonitorActivationException")
    || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) == v7 )
  {
    LODWORD(v76) = v7 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752));
    goto LABEL_41;
  }
  pv = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( v49 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v53);
    ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v49->lpVtbl->QueryInterface)(
      v49,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      &v53);
    v52 = 0LL;
    v41 = v49;
    AddRef = v49->lpVtbl[19].AddRef;
    v43 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v52);
    ((void (__fastcall *)(IUnknown *, __int64 *))AddRef)(v41, v43);
    v44 = v52;
    punk = v52;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&punk);
    v45 = v55;
    if ( v55 == v57 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v55 + 1) < 0 )
      {
LABEL_120:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
        p_punk = &v52;
LABEL_100:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)p_punk);
        goto LABEL_34;
      }
      v45 = v55;
    }
    v55 = v45 + 1;
    v46 = (IUnknown **)((char *)pv + 8 * v45);
    if ( v46 )
    {
      *v46 = 0LL;
      if ( v46 != &punk )
      {
        *v46 = v44;
        punk = 0LL;
      }
    }
    goto LABEL_120;
  }
  v16 = *(_DWORD *)(a2 + 16);
  if ( v16 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v7, &pv);
    goto LABEL_34;
  }
  if ( v16 == 2 )
    goto LABEL_136;
  if ( *(_DWORD *)(a2 + 24) != 1 && *(_DWORD *)(a2 + 24) != 8 )
  {
    punk = 0LL;
    v35 = *(_QWORD *)(a1 + 560);
    v36 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, IUnknown **))(*(_QWORD *)v35 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
    if ( v36(v35, v7, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &punk) < 0 )
    {
LABEL_97:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(*(_QWORD *)(a1 + 568), v7) )
        v78 = 65534;
      p_punk = &punk;
      goto LABEL_100;
    }
    v37 = punk;
    v52 = punk;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v52);
    v38 = v55;
    if ( v55 == v57 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v55 + 1) < 0 )
      {
LABEL_96:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
        goto LABEL_97;
      }
      v38 = v55;
    }
    v55 = v38 + 1;
    v39 = (__int64 *)((char *)pv + 8 * v38);
    if ( v39 )
    {
      *v39 = 0LL;
      if ( v39 != (__int64 *)&v52 )
      {
        *v39 = (__int64)v37;
        v52 = 0LL;
      }
    }
    goto LABEL_96;
  }
LABEL_34:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
  if ( (int)CApplicationManager::_GetMonitorObjectArray((CApplicationManager *)a1) >= 0 )
  {
    if ( (_BYTE)ppvOut && v49 )
      v77 = 8;
    goto LABEL_36;
  }
LABEL_136:
  LOBYTE(v76) = 0;
LABEL_36:
  if ( pv )
  {
    for ( i = 0LL; i < v55; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pv + i);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v55 = 0LL;
  v57 = 0LL;
LABEL_41:
  v18 = (__int64)v7;
  v67 = (__int64)v7;
  v19 = v53;
  if ( !v53 && v7 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v7);
    v67 = v18;
    v19 = v53;
  }
  v69[0] = v19;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v69);
  v69[1] = v18;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v65 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    ((void (__fastcall *)(IUnknown *))Ptr->lpVtbl->AddRef)(Ptr);
    v66[0] = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v66);
    v66[1] = v18;
    v60 = (unsigned int)v20[15].Ptr;
    v22 = 0LL;
    v23 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 3) = 1;
      *v23 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v24[2] = 0LL;
      if ( v24 + 2 == &v65 )
      {
        Ptr = 0LL;
      }
      else
      {
        v24[2] = Ptr;
        Ptr = 0LL;
        v65 = 0LL;
      }
      v24[3] = 0LL;
      if ( v24 + 3 != v66 )
      {
        v24[3] = v19;
        v66[0] = 0LL;
      }
      v24[4] = v67;
      *v24 = off_1807A1B20;
      v22 = v24;
    }
    else
    {
      Ptr = 0LL;
    }
    HIDWORD(v48) = 0;
    v47[1] = HIDWORD(v22);
    SHTaskPoolQueueTask(3LL, 2LL, v60);
    if ( v22 )
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v66);
    if ( v65 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v65 + 16LL))(v65);
  }
  if ( (_BYTE)v76 )
  {
    v76 = Ptr;
    ppvOut = Ptr;
    punk = Ptr;
    v61 = 2;
    v25 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    v25(a1 + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v26 = IUnknown_QueryService(punk, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    if ( v26 < 0 )
    {
      v28 = v76;
      v27 = (IUnknown *)ppvOut;
    }
    else
    {
      v27 = (IUnknown *)ppvOut;
      if ( ppvOut )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
        v27 = (IUnknown *)ppvOut;
      }
      v28 = v27;
      v76 = v27;
      v26 = (int)Ptr;
    }
    if ( v27 )
    {
      ppvOut = Ptr;
      ((void (__fastcall *)(IUnknown *))v27->lpVtbl->Release)(v27);
      v28 = v76;
    }
    if ( v26 >= 0 )
    {
      LODWORD(v48) = v77;
      v47[0] = *(_DWORD *)(a2 + 24);
      ((void (__fastcall *)(IUnknown *, __int64, __int64, __int64, int *, __int64, int))v28->lpVtbl[1].QueryInterface)(
        v28,
        v58,
        a1 + 248,
        v53,
        *(int **)v47,
        v48,
        v78);
      v28 = v76;
    }
    if ( v28 )
    {
      v76 = Ptr;
      ((void (__fastcall *)(IUnknown *))v28->lpVtbl->Release)(v28);
    }
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v29 = *(_QWORD *)(a1 + 512);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 512) = Ptr;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  *(_DWORD *)(a1 + 504) = (_DWORD)Ptr;
  v30 = *(_QWORD *)(a1 + 488);
  if ( v30 != 1 )
    *(_QWORD *)(a1 + 496) = v30;
  *(_QWORD *)(a1 + 488) = Ptr;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 768) = v7;
  v77 = (int)Ptr;
  v31 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v77, 4LL) | 0x10000000;
  if ( v31 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v31,
      (int)Ptr);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v69);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v53);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
  v32 = v49;
  if ( v49 )
  {
    v49 = Ptr;
    ((void (__fastcall *)(IUnknown *))v32->lpVtbl->Release)(v32);
  }
  v33 = ppv;
  if ( ppv )
  {
    ppv = Ptr;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  if ( v62 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
