/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DEF30 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x18017BDB0 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18004240C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180055A84 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180086710 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180086DB0 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180089AB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800EBD40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1800EC9EC (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180106540 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x180143D34 (--$GetAppPosition@VCImmersiveAppFinderByHwnd@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersiv.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x18018FA48 (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18022A4D4 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802DF564 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1802DF564.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802E9720 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E9920 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1802E9C78 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1802EA5BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1802EA7F8 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1802EAA20 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CApplicationManager *v6; // r13
  char *v7; // rdi
  int v8; // esi
  int v9; // eax
  int ApartmentId; // r15d
  HWND v11; // rbx
  bool v12; // si
  __int64 *v13; // rcx
  __int64 v14; // rax
  char v15; // al
  int v16; // r8d
  _DWORD *v17; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 i; // r12
  union _RTL_RUN_ONCE *v21; // rbx
  char v22; // al
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v24; // edx
  __int64 v25; // r8
  int (__fastcall ***v26)(_QWORD, GUID *, _QWORD); // rcx
  void *v27; // rbx
  HANDLE ProcessHeap; // rax
  struct CDelayIAMOperations::COperation *v29; // r13
  WINBOOL v30; // eax
  __int64 v31; // rdx
  void *v32; // rbx
  void *v33; // rbx
  HANDLE v34; // rax
  __int64 v35; // rdx
  void (*v36)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int cchValue; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  bool v40; // [rsp+40h] [rbp-C0h] BYREF
  int (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  union _RTL_RUN_ONCE *v43; // [rsp+58h] [rbp-A8h]
  unsigned int v44; // [rsp+60h] [rbp-A0h]
  char v45; // [rsp+64h] [rbp-9Ch]
  char v46; // [rsp+65h] [rbp-9Bh]
  WINBOOL v47; // [rsp+68h] [rbp-98h]
  char v48; // [rsp+6Ch] [rbp-94h]
  HWND hWnd[2]; // [rsp+70h] [rbp-90h]
  struct IImmersiveMonitor *v50; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveApplication *v51; // [rsp+88h] [rbp-78h] BYREF
  LPINIT_ONCE v52; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+98h] [rbp-68h]
  unsigned int v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 AddressOf; // [rsp+A8h] [rbp-58h] BYREF
  RTL_SRWLOCK *v56; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v57; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  char *v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+E0h] [rbp-20h]
  void **v63; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v64[24]; // [rsp+F8h] [rbp-8h] BYREF
  int v65; // [rsp+110h] [rbp+10h]
  _DWORD *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  _BYTE v68[48]; // [rsp+130h] [rbp+30h] BYREF
  LPVOID v69; // [rsp+160h] [rbp+60h]
  char v70; // [rsp+168h] [rbp+68h]
  LPVOID lpMem[3]; // [rsp+210h] [rbp+110h]
  void *v72; // [rsp+228h] [rbp+128h] BYREF
  WCHAR Filename[264]; // [rsp+230h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  v6 = (CApplicationManager *)((char *)this - 160);
  if ( this == (CApplicationManager *)160 )
    v7 = 0LL;
  else
    v7 = (char *)this + 232;
  v61 = v7;
  v8 = *((_DWORD *)v7 + 11);
  if ( v8 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_92;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v8 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v9 != 1 )
          goto LABEL_6;
        goto LABEL_86;
      }
LABEL_92:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_86:
  if ( *((_DWORD *)v7 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v54);
    if ( ApartmentId >= 0 && v54 != *((_DWORD *)v7 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v7) )
    ApartmentId = 0;
LABEL_8:
  v62 = ApartmentId;
  v42 = a2;
  v43 = (union _RTL_RUN_ONCE *)a3;
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  *(_OWORD *)hWnd = 0LL;
  if ( a2 > 0x22 )
  {
LABEL_50:
    v45 = 1;
    goto LABEL_13;
  }
  if ( (_DWORD)a2 != 20 )
  {
    if ( (unsigned int)a2 < 0x15 || (unsigned int)a2 >= 0x1A )
    {
      switch ( (int)a2 )
      {
        case 17:
        case 18:
        case 19:
        case 26:
        case 29:
        case 32:
        case 34:
          goto LABEL_12;
        default:
          goto LABEL_50;
      }
    }
    goto LABEL_50;
  }
LABEL_12:
  v45 = 0;
LABEL_13:
  v51 = 0LL;
  IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>((IamTraceLogging::OnShellHookMessage *)&v63);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v42) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v42 <= 0x22 )
    {
      switch ( (_DWORD)v42 )
      {
        case 0x14:
          CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v42);
          break;
        case 0x12:
          v21 = v43;
          v22 = (*(__int64 (__fastcall **)(_QWORD, union _RTL_RUN_ONCE *))(**((_QWORD **)this + 47) + 72LL))(
                  *((_QWORD *)this + 47),
                  v43);
LABEL_52:
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD, union _RTL_RUN_ONCE *))(**((_QWORD **)this + 54) + 32LL))(
              *((_QWORD *)this + 54),
              v21);
          break;
        case 0x18:
LABEL_19:
          Context = v43;
          v11 = (HWND)v43;
          if ( hWnd[1] )
            v11 = hWnd[1];
          fPending = v47;
          v12 = v42 == 21;
          v50 = 0LL;
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v50);
          *(_QWORD *)AddressOf = 0LL;
          if ( GetShellWindow() != v11
            && !(unsigned int)GetPropW(v11, L"MultimonitorActivationException")
            && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v11 )
          {
            (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64))(**((_QWORD **)v6 + 70) + 88LL))(
              *((_QWORD *)v6 + 70),
              v11,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              AddressOf);
          }
          v13 = (__int64 *)*((_QWORD *)v6 + 67);
          v14 = *v13;
          if ( v12 )
          {
            v15 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, _QWORD, struct IImmersiveMonitor *))(v14 + 24))(
                    v13,
                    Context,
                    (unsigned int)fPending,
                    0LL,
                    v50);
            v16 = 3;
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, struct IImmersiveMonitor *))(v14 + 32))(
                    v13,
                    Context,
                    v50);
            v16 = 2;
          }
          if ( v15 && v50 )
            CApplicationManager::_TryPresentDesktopExperience(v6, (HWND)Context, v16, v50);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
          break;
        default:
          switch ( (int)v42 )
          {
            case 17:
              CApplicationManager::_HandleWindowCreation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v42);
              break;
            case 19:
            case 23:
              v41 = 0LL;
              if ( v44 == 2 )
              {
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
                v52 = v43;
                v53 = 2;
                v41 = 0LL;
                if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>(
                            (char *)v6 + 624,
                            &v52,
                            v25,
                            &AddressOf) >= 0 )
                {
                  v26 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)v6 + 79) + 8 * AddressOf);
                  if ( (**v26)(v26, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v41) >= 0 )
                    CApplicationManager::_UpdatePerApplicationDataIfNeeded((__int64)v6, v41, (HWND)v43, 0);
                }
              }
              (*(void (__fastcall **)(_QWORD, union _RTL_RUN_ONCE *, _QWORD, int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)v6 + 68) + 24LL))(
                *((_QWORD *)v6 + 68),
                v43,
                v44,
                v41);
              CApplicationManager::_HandleActivation2(v6, &v42, 1LL);
              v23 = v41;
              if ( v41 )
              {
                v41 = 0LL;
                ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v23)[2])(v23);
              }
              break;
            case 21:
              if ( v44 - 2 > 1 )
                goto LABEL_19;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v42,
                a3);
              break;
            case 22:
              v21 = v43;
              v22 = (*(__int64 (__fastcall **)(_QWORD, union _RTL_RUN_ONCE *))(**((_QWORD **)this + 47) + 64LL))(
                      *((_QWORD *)this + 47),
                      v43);
              goto LABEL_52;
            case 25:
            case 28:
              CApplicationManager::_HandleWindowBecameOwned(
                v6,
                a3,
                (const struct CApplicationManager::HSHELL_DATA *const)&v42);
              break;
            case 26:
            case 29:
              CApplicationManager::_HandleWindowBecameUnowned(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v42);
              break;
            case 27:
            case 30:
              CApplicationManager::_HandleWindowChangedOwner(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v42,
                a3);
              break;
            case 32:
              Context = 0LL;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Context);
              v52 = v43;
              v53 = 2;
              if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v52, &Context, 0LL) >= 0 )
              {
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                (**(void (__fastcall ***)(LPVOID, GUID *, struct IImmersiveApplication **))Context)(
                  Context,
                  &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                  &v51);
              }
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Context);
              break;
            case 34:
              if ( v44 == 2 )
                CApplicationManager::_HandleApplicationRequestActivation(
                  v6,
                  (const struct CApplicationManager::HSHELL_DATA *const)&v42);
              break;
            default:
              goto LABEL_30;
          }
          break;
      }
    }
LABEL_30:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v42 >= 0x20 )
  {
    if ( v42 != 32 )
    {
      if ( v42 == 65534 )
      {
        v24 = 1026;
      }
      else
      {
        if ( v42 != 0xFFFF )
          goto LABEL_32;
        v24 = 1025;
      }
      CApplicationManager::OnMessage((CApplicationManager *)((char *)this + 40), v24, 0LL, (__int64)a3, &v40);
      goto LABEL_32;
    }
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v42, v51);
  }
LABEL_32:
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v18 = *((_QWORD *)this + 102);
  if ( v18 )
  {
    v17 = (_DWORD *)*((_QWORD *)this + 101);
    v57 = v17;
    v59 = *((_QWORD *)this + 103);
    v58 = v18;
    v60 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v18; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v29 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), v17[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v29 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v29 + 8LL))(v29);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v29)(v29, 1LL);
    }
  }
  if ( v17 )
    CoTaskMemFree(v17);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v63, 0LL);
  v63 = &IamTraceLogging::OnShellHookMessage::`vftable';
  if ( v72 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v63,
      &v56);
    if ( !v72 || *(_DWORD *)v72 != 1 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)&v72);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v56);
      goto LABEL_39;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v56);
  }
  if ( *v66 == 1 )
  {
    v30 = v66[22];
    fPending = v30;
    v31 = 2147942974LL;
    if ( v30 < 0 )
      v31 = (unsigned int)v30;
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v66,
      v31,
      &fPending);
    ((void (__fastcall *)(void ***))v63[1])(&v63);
  }
LABEL_39:
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v72, 0xFFFFFFFF) == 1 )
    {
      v32 = v72;
      if ( v72 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v72 + 8);
        operator delete(v32, 0x108uLL);
      }
    }
    v72 = 0LL;
  }
  if ( lpMem[0] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem[0], 0xFFFFFFFF) == 1 )
    {
      v27 = lpMem[0];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v27);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v70 )
  {
    v33 = v69;
    v34 = GetProcessHeap();
    HeapFree(v34, 0, v33);
    v70 = 0;
  }
  v69 = 0LL;
  if ( v67 == 1 )
  {
    v67 = 2;
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v52 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v53 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v52, v35, v36);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v68);
  }
  v67 = 3;
  if ( v65 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v64);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
  CoTaskMemFree(hWnd[0]);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
