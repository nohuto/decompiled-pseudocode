/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180089AB0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1802E9654 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1802EA5BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1802EA7F8 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1802EAA20 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18002B664 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006A280 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180106914 (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180134260 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x180143D34 (--$GetAppPosition@VCImmersiveAppFinderByHwnd@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersiv.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // ebx
  HWND v10; // r15
  bool v11; // bl
  int v12; // eax
  unsigned __int8 v13; // si
  _QWORD *AddressOf; // r12
  __int64 v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rax
  IUnknown *v18; // rax
  __int64 v19; // r8
  void *v20; // rcx
  bool v21; // bl
  __int64 v22; // r8
  int v23; // eax
  char v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  int SingleMonitorObjectArray; // esi
  unsigned __int64 i; // rbx
  void *v29; // rcx
  unsigned __int64 j; // rbx
  __int64 v31; // rbx
  __int64 v32; // r12
  PSRWLOCK v33; // rsi
  IUnknown *Ptr; // r13
  _QWORD *v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  void (__fastcall *v38)(__int64, GUID *, IUnknown **); // rbx
  HRESULT v39; // ebx
  IUnknown *v40; // rcx
  IUnknown *v41; // r11
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  IUnknown *v45; // rcx
  void *v46; // rcx
  __int64 v47; // rsi
  int (__fastcall *v48)(__int64, HWND, GUID *, GUID *, IUnknown **); // rbx
  IUnknown *v49; // rbx
  unsigned __int64 v50; // rcx
  __int64 *v51; // rdx
  __int64 v52; // r8
  int (__fastcall ***v53)(_QWORD, GUID *, IUnknown **); // rcx
  IUnknown *v54; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rsi
  __int64 v56; // rax
  IUnknown *v57; // rbx
  unsigned __int64 v58; // rcx
  __int64 *v59; // rdx
  int cchValue; // [rsp+20h] [rbp-E0h]
  IUnknown *v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+48h] [rbp-B8h]
  IUnknown *punk; // [rsp+50h] [rbp-B0h] BYREF
  void *ppv; // [rsp+58h] [rbp-A8h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v66; // [rsp+68h] [rbp-98h]
  IUnknown *v67; // [rsp+70h] [rbp-90h] BYREF
  int v68; // [rsp+78h] [rbp-88h]
  IUnknown *v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+88h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h] BYREF
  struct IObjectArray *v76; // [rsp+B8h] [rbp-48h] BYREF
  int v77; // [rsp+C0h] [rbp-40h]
  unsigned int v78; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v79; // [rsp+C8h] [rbp-38h] BYREF
  int v80; // [rsp+CCh] [rbp-34h] BYREF
  int v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v83; // [rsp+E0h] [rbp-20h]
  PVOID v84; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v85[2]; // [rsp+F0h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h] BYREF
  __int64 v88[2]; // [rsp+110h] [rbp+10h] BYREF
  HWND v89; // [rsp+120h] [rbp+20h] BYREF
  int v90; // [rsp+128h] [rbp+28h]
  __int64 v91; // [rsp+130h] [rbp+30h]
  int v92; // [rsp+138h] [rbp+38h]
  WCHAR Filename[264]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  v3 = a3;
  v62 = a3;
  v70 = 0;
  if ( a1 )
    v6 = a1 + 392;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v91 = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_157;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_150;
      }
LABEL_157:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_150:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v78);
    v68 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v78 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v68 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_9;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
  v68 = ApartmentId;
LABEL_9:
  v92 = ApartmentId;
  v10 = *(HWND *)(a2 + 8);
  v11 = 1;
  v12 = *(_DWORD *)(a2 + 16);
  if ( v12 == 1 )
  {
    v82 = 0LL;
    if ( *(_BYTE *)(a2 + 20) || *(_BYTE *)(a2 + 21) )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      AddressOf = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v82);
      *AddressOf = 0LL;
      if ( GetShellWindow() != v10
        && !(unsigned int)GetPropW(v10, L"MultimonitorActivationException")
        && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) != v10 )
      {
        (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, _QWORD *))(**(_QWORD **)(a1 + 560) + 88LL))(
          *(_QWORD *)(a1 + 560),
          v10,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          AddressOf);
      }
      v3 = v62;
    }
    if ( v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752))
      && v10 != (HWND)1
      && (*(int (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), v10, v13) >= 0
      && (!v82
       || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536), v10)) )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 560) + 32LL))(*(_QWORD *)(a1 + 560), &v79);
      if ( v79 > 1 && *(_DWORD *)(a2 + 24) == 1 )
        v11 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v82);
    v12 = *(_DWORD *)(a2 + 16);
  }
  ppv = 0LL;
  v61 = 0LL;
  v15 = 0LL;
  if ( v12 == 2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v61);
    v89 = v10;
    v90 = 2;
    v61 = 0LL;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>(
                a1 + 624,
                &v89,
                v52,
                &v87) < 0
      || (v15 = v87,
          v53 = *(int (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v87),
          (**v53)(v53, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v61) < 0) )
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
      IUnknown_GetSite(v61, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
  }
  v16 = *(__int64 **)(a1 + 592);
  v17 = *v16;
  if ( *(_DWORD *)(a2 + 16) == 3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(v17 + 40))(v16, *(_QWORD *)(a2 + 8));
  else
    (*(void (**)(void))(v17 + 48))();
  *(_QWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 504) = v3;
  v18 = v61;
  if ( v61 )
  {
    Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=((__int64 *)(a1 + 512), (__int64)v61);
    v18 = v61;
  }
  if ( *(_DWORD *)(a2 + 16) != 2 || v18 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 40LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 528) + 88LL))(
      *(_QWORD *)(a1 + 528),
      *(unsigned int *)(a2 + 24),
      v11);
    v19 = *(unsigned int *)(a2 + 16);
  }
  else
  {
    v19 = 2LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(
    *(_QWORD *)(a1 + 520),
    *(unsigned int *)(a2 + 24),
    v19,
    *(unsigned __int8 *)(a2 + 28));
  v20 = ppv;
  if ( ppv && v61 )
  {
    if ( (*(int (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
           ppv,
           v61,
           v10,
           0LL,
           2,
           0LL) >= 0
      && v15 )
    {
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
        a1 + 624,
        (__int64)&v61,
        v15);
    }
    v20 = ppv;
  }
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    if ( !v61 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v20 + 40LL))(v20, 4LL);
  }
  else
  {
    v21 = !v11;
    if ( v20 )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, void **))(**(_QWORD **)(a1 + 576) + 32LL))(
           *(_QWORD *)(a1 + 576),
           0LL,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &ppv) >= 0 )
    {
      if ( v21 )
        v22 = 0LL;
      else
        v22 = *(unsigned int *)(a2 + 24);
      (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppv + 40LL))(ppv, 4LL, v22);
    }
  }
  v76 = 0LL;
  v75 = 0LL;
  v77 = 0xFFFF;
  LOBYTE(v15) = 1;
  v66 = v15;
  if ( GetShellWindow() == v10
    || (unsigned int)GetPropW(v10, L"MultimonitorActivationException")
    || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752)) == v10 )
  {
    v66 = v10 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 752) + 24LL))(*(_QWORD *)(a1 + 752));
    goto LABEL_61;
  }
  pv = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( v61 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v75);
    ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v61->lpVtbl->QueryInterface)(
      v61,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      &v75);
    punk = 0LL;
    v54 = v61;
    AddRef = v61->lpVtbl[19].AddRef;
    v56 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&punk);
    ((void (__fastcall *)(IUnknown *, __int64))AddRef)(v54, v56);
    v57 = punk;
    v67 = punk;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v67);
    v58 = v72;
    if ( v72 == v74 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v72 + 1) < 0 )
      {
LABEL_138:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
        goto LABEL_44;
      }
      v58 = v72;
    }
    v72 = v58 + 1;
    v59 = (__int64 *)((char *)pv + 8 * v58);
    if ( v59 )
    {
      *v59 = 0LL;
      if ( v59 != (__int64 *)&v67 )
      {
        *v59 = (__int64)v57;
        v67 = 0LL;
      }
    }
    goto LABEL_138;
  }
  v23 = *(_DWORD *)(a2 + 16);
  if ( v23 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, HWND, LPVOID *))(**(_QWORD **)(a1 + 536) + 48LL))(*(_QWORD *)(a1 + 536), v10, &pv);
    goto LABEL_44;
  }
  if ( v23 == 2 )
    goto LABEL_164;
  if ( *(_DWORD *)(a2 + 24) != 1 && *(_DWORD *)(a2 + 24) != 8 )
  {
    punk = 0LL;
    v47 = *(_QWORD *)(a1 + 560);
    v48 = *(int (__fastcall **)(__int64, HWND, GUID *, GUID *, IUnknown **))(*(_QWORD *)v47 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
    if ( v48(v47, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &punk) < 0 )
    {
LABEL_117:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 568) + 64LL))(
             *(_QWORD *)(a1 + 568),
             v10) )
      {
        v77 = 65534;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      goto LABEL_44;
    }
    v49 = punk;
    v67 = punk;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v67);
    v50 = v72;
    if ( v72 == v74 )
    {
      if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                  &pv,
                  v72 + 1) < 0 )
      {
LABEL_116:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
        goto LABEL_117;
      }
      v50 = v72;
    }
    v72 = v50 + 1;
    v51 = (__int64 *)((char *)pv + 8 * v50);
    if ( v51 )
    {
      *v51 = 0LL;
      if ( v51 != (__int64 *)&v67 )
      {
        *v51 = (__int64)v49;
        v67 = 0LL;
      }
    }
    goto LABEL_116;
  }
LABEL_44:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
  v24 = 0;
  v76 = 0LL;
  ppvOut = 0LL;
  v25 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v25;
  v83 = v25;
  if ( v25 )
  {
    *v25 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v25[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v25[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v25 + 6) = 1;
    *(_QWORD *)((char *)v25 + 28) = 4LL;
    v25[5] = 0LL;
    v25[6] = 0LL;
    v25[7] = 0LL;
    v25[8] = 0LL;
    SingleMonitorObjectArray = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v25)(
                                 v25,
                                 &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
                                 &ppvOut);
    (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
    if ( SingleMonitorObjectArray >= 0 )
    {
      for ( i = 0LL; i < v72; ++i )
      {
        (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + i) + 48LL))(*((_QWORD *)pv + i), &v80);
        if ( v80 )
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(ppvOut, *((_QWORD *)pv + i));
      }
      (*(void (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v81);
      if ( v81 )
      {
        SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))ppvOut)(
                                     ppvOut,
                                     &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                     &v76);
      }
      else
      {
        v24 = 1;
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                     (CApplicationManager *)a1,
                                     0LL,
                                     &v76);
      }
    }
  }
  else
  {
    SingleMonitorObjectArray = -2147024882;
  }
  v29 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( SingleMonitorObjectArray >= 0 )
  {
    if ( v24 && v61 )
      v62 = 8;
    goto LABEL_56;
  }
LABEL_164:
  LOBYTE(v66) = 0;
LABEL_56:
  if ( pv )
  {
    for ( j = 0LL; j < v72; ++j )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pv + j);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v72 = 0LL;
  v74 = 0LL;
LABEL_61:
  v31 = (__int64)v10;
  v83 = v10;
  v32 = v75;
  if ( !v75 && v10 )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 536) + 112LL))(*(_QWORD *)(a1 + 536), v10);
    v83 = (_QWORD *)v31;
    v32 = v75;
  }
  v88[0] = v32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v88);
  v88[1] = v31;
  v33 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v84 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    ((void (__fastcall *)(IUnknown *))Ptr->lpVtbl->AddRef)(Ptr);
    v85[0] = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v85);
    v85[1] = v31;
    LODWORD(v69) = v33[15].Ptr;
    v35 = 0LL;
    v36 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v37 = v36;
    if ( v36 )
    {
      *((_DWORD *)v36 + 3) = 1;
      *v36 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v37[2] = 0LL;
      if ( v37 + 2 == &v84 )
      {
        Ptr = 0LL;
      }
      else
      {
        v37[2] = Ptr;
        Ptr = 0LL;
        v84 = 0LL;
      }
      v37[3] = 0LL;
      if ( v37 + 3 != v85 )
      {
        v37[3] = v32;
        v85[0] = 0LL;
      }
      v37[4] = v83;
      *v37 = off_18061F688;
      v35 = v37;
    }
    else
    {
      Ptr = 0LL;
    }
    SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)v69, 0LL, v35, 0LL);
    if ( v35 )
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v85);
    if ( v84 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v84 + 16LL))(v84);
  }
  if ( v66 )
  {
    v69 = Ptr;
    ppvOut = Ptr;
    punk = Ptr;
    v70 = 2;
    v38 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    v38(a1 + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v39 = IUnknown_QueryService(punk, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    if ( v39 < 0 )
    {
      v41 = v69;
      v40 = (IUnknown *)ppvOut;
    }
    else
    {
      v40 = (IUnknown *)ppvOut;
      if ( ppvOut )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
        v40 = (IUnknown *)ppvOut;
      }
      v41 = v40;
      v69 = v40;
      v39 = (int)Ptr;
    }
    if ( v40 )
    {
      ppvOut = Ptr;
      ((void (__fastcall *)(IUnknown *))v40->lpVtbl->Release)(v40);
      v41 = v69;
    }
    if ( v39 >= 0 )
    {
      ((void (__fastcall *)(IUnknown *, struct IObjectArray *, __int64, __int64, _DWORD, int, int))v41->lpVtbl[1].QueryInterface)(
        v41,
        v76,
        a1 + 248,
        v75,
        *(_DWORD *)(a2 + 24),
        v62,
        v77);
      v41 = v69;
    }
    if ( v41 )
    {
      v69 = Ptr;
      ((void (__fastcall *)(IUnknown *))v41->lpVtbl->Release)(v41);
    }
  }
  if ( *(_BYTE *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 48LL))(*(_QWORD *)(a1 + 552));
  v42 = *(_QWORD *)(a1 + 512);
  if ( v42 )
  {
    *(_QWORD *)(a1 + 512) = Ptr;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  *(_DWORD *)(a1 + 504) = (_DWORD)Ptr;
  v43 = *(_QWORD *)(a1 + 488);
  if ( v43 != 1 )
    *(_QWORD *)(a1 + 496) = v43;
  *(_QWORD *)(a1 + 488) = Ptr;
  *(_BYTE *)(a1 + 480) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 528) + 48LL))(
    *(_QWORD *)(a1 + 528),
    *(unsigned int *)(a2 + 24));
  *(_QWORD *)(a1 + 768) = v10;
  v70 = (int)Ptr;
  v44 = RtlPublishWnfStateData(WNF_SHEL_WINDOW_ACTIVATED, 0LL, &v70, 4LL) | 0x10000000;
  if ( v44 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x352,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v44,
      (int)Ptr);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v88);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v75);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
  v45 = v61;
  if ( v61 )
  {
    v61 = Ptr;
    ((void (__fastcall *)(IUnknown *))v45->lpVtbl->Release)(v45);
  }
  v46 = ppv;
  if ( ppv )
  {
    ppv = Ptr;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v46 + 16LL))(v46);
  }
  if ( v68 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
