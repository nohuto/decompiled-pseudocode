/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180060F10 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800232B4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180023454 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180025A70 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180025A70.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18004394C (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18004FEF0 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180052918 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800529E0 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800C7770 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D2490 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18013DA18 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18016F690 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180173FF8 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleHide@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x1801966DC (-_HandleHide@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x1801D02BC (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1802CF870 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395CD0 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1803A23E4 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1803A25E4 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1803A293C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1803A34BC (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnShellHookMessage(
        CApplicationManager *this,
        unsigned __int64 a2,
        RTL_SRWLOCK *a3)
{
  PSRWLOCK v3; // r12
  CApplicationManager *v6; // r13
  char *v7; // rsi
  int v8; // edi
  int v9; // eax
  int ApartmentId; // r15d
  HWND v11; // rbx
  _DWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 i; // r12
  char v15; // bl
  volatile signed __int32 *v16; // rdx
  HWND v18; // rbx
  bool v19; // di
  __int64 *AddressOf; // r12
  __int64 *v21; // rcx
  __int64 v22; // rax
  char v23; // al
  int v24; // r8d
  unsigned int v25; // edx
  struct CDelayIAMOperations::COperation *v26; // r13
  WINBOOL v27; // eax
  __int64 v28; // rdx
  void *v29; // rbx
  void *v30; // rbx
  HANDLE ProcessHeap; // rax
  void *v32; // rbx
  HANDLE v33; // rax
  __int64 v34; // rdx
  void (*v35)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int cchValue; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  bool v39; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveMonitor *v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  HWND v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+70h] [rbp-90h]
  char v44; // [rsp+74h] [rbp-8Ch]
  char v45; // [rsp+75h] [rbp-8Bh]
  WINBOOL v46; // [rsp+78h] [rbp-88h]
  char v47; // [rsp+7Ch] [rbp-84h]
  LPVOID pv[2]; // [rsp+80h] [rbp-80h]
  struct IImmersiveApplication *v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+98h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp-60h] BYREF
  HWND v52; // [rsp+A8h] [rbp-58h] BYREF
  int v53; // [rsp+B0h] [rbp-50h]
  _DWORD *v54; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  char *v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+E0h] [rbp-20h]
  void **v60; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v61[24]; // [rsp+F8h] [rbp-8h] BYREF
  int v62; // [rsp+110h] [rbp+10h]
  _DWORD *v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+128h] [rbp+28h]
  _BYTE v65[48]; // [rsp+130h] [rbp+30h] BYREF
  LPVOID v66; // [rsp+160h] [rbp+60h]
  char v67; // [rsp+168h] [rbp+68h]
  LPVOID lpMem[3]; // [rsp+210h] [rbp+110h]
  void *v69; // [rsp+228h] [rbp+128h] BYREF
  WCHAR Filename[264]; // [rsp+230h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  v3 = a3;
  SRWLock = a3;
  v6 = (CApplicationManager *)((char *)this - 160);
  if ( this == (CApplicationManager *)160 )
    v7 = 0LL;
  else
    v7 = (char *)this + 232;
  v58 = v7;
  v8 = *((_DWORD *)v7 + 11);
  if ( v8 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_84;
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
        goto LABEL_78;
      }
LABEL_84:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_78:
  if ( *((_DWORD *)v7 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v50);
    if ( ApartmentId >= 0 && v50 != *((_DWORD *)v7 + 10) )
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
  v59 = ApartmentId;
  v41 = a2;
  v42 = (HWND)v3;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  *(_OWORD *)pv = 0LL;
  if ( a2 <= 0x22 )
  {
    if ( (_DWORD)a2 == 20 )
    {
LABEL_14:
      v44 = 0;
      goto LABEL_15;
    }
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
          goto LABEL_14;
        default:
          break;
      }
    }
  }
  v44 = 1;
LABEL_15:
  v49 = 0LL;
  IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>((IamTraceLogging::OnShellHookMessage *)&v60);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v41) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v41 <= 0x22 )
    {
      switch ( (_DWORD)v41 )
      {
        case 0x14:
          CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v41);
          break;
        case 0x18:
LABEL_44:
          Context = v42;
          v18 = v42;
          if ( pv[1] )
            v18 = (HWND)pv[1];
          fPending = v46;
          v19 = v41 == 21;
          v40 = 0LL;
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v40);
          *AddressOf = 0LL;
          if ( GetShellWindow() != v18
            && !(unsigned int)GetPropW(v18, L"MultimonitorActivationException")
            && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v18 )
          {
            (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)v6 + 70) + 88LL))(
              *((_QWORD *)v6 + 70),
              v18,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              AddressOf);
          }
          v21 = (__int64 *)*((_QWORD *)v6 + 67);
          v22 = *v21;
          if ( v19 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, _QWORD, struct IImmersiveMonitor *, _DWORD, _DWORD))(v22 + 24))(
                    v21,
                    Context,
                    (unsigned int)fPending,
                    0LL,
                    v40,
                    0,
                    0);
            v24 = 3;
          }
          else
          {
            v23 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, struct IImmersiveMonitor *))(v22 + 32))(
                    v21,
                    Context,
                    v40);
            v24 = 2;
          }
          if ( v23 && v40 )
            CApplicationManager::_TryPresentDesktopExperience(v6, (HWND)Context, v24, v40);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v40);
          v3 = SRWLock;
          break;
        case 0x12:
          v11 = v42;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 47) + 72LL))(
                  *((_QWORD *)this + 47),
                  v42) )
            (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54), v11);
          break;
        default:
          switch ( (int)v41 )
          {
            case 17:
              CApplicationManager::_HandleWindowCreation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v41);
              break;
            case 19:
            case 23:
              CApplicationManager::_HandleActivation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v41);
              break;
            case 21:
              if ( (unsigned int)(v43 - 2) > 1 )
                goto LABEL_44;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v41,
                (HWND)v3);
              break;
            case 22:
              CApplicationManager::_HandleHide(v6, v42);
              break;
            case 25:
            case 28:
              CApplicationManager::_HandleWindowBecameOwned(
                v6,
                (HWND)v3,
                (const struct CApplicationManager::HSHELL_DATA *const)&v41);
              break;
            case 26:
            case 29:
              CApplicationManager::_HandleWindowBecameUnowned(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v41);
              break;
            case 27:
            case 30:
              CApplicationManager::_HandleWindowChangedOwner(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v41,
                (HWND)v3);
              break;
            case 32:
              Context = 0LL;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Context);
              v52 = v42;
              v53 = 2;
              if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                          (__int64)v6,
                          (__int64)&v52,
                          &Context,
                          0LL) >= 0 )
              {
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
                (**(void (__fastcall ***)(LPVOID, GUID *, struct IImmersiveApplication **))Context)(
                  Context,
                  &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                  &v49);
              }
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Context);
              break;
            case 34:
              if ( v43 == 2 )
                CApplicationManager::_HandleApplicationRequestActivation(
                  v6,
                  (const struct CApplicationManager::HSHELL_DATA *const)&v41);
              break;
            default:
              goto LABEL_24;
          }
          break;
      }
    }
LABEL_24:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v41 >= 0x20 )
  {
    if ( v41 == 32 )
    {
      CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v41, v49);
    }
    else if ( v41 == 65534 || v41 == 0xFFFF )
    {
      v25 = 1026;
      if ( v41 == 0xFFFF )
        v25 = 1025;
      CApplicationManager::OnMessage((CApplicationManager *)((char *)this + 40), v25, 0LL, (__int64)v3, &v39);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v13 = *((_QWORD *)this + 102);
  if ( v13 )
  {
    v12 = (_DWORD *)*((_QWORD *)this + 101);
    v54 = v12;
    v56 = *((_QWORD *)this + 103);
    v55 = v13;
    v57 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v13; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v26 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), v12[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v26 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v26 + 8LL))(v26);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v26)(v26, 1LL);
    }
  }
  if ( v12 )
    CoTaskMemFree(v12);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v60, 0LL);
  v60 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v15 = 1;
  v16 = (volatile signed __int32 *)v69;
  if ( !v69 )
    goto LABEL_32;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v60,
    &SRWLock);
  v16 = (volatile signed __int32 *)v69;
  if ( !v69 || *(_DWORD *)v69 != 1 )
  {
    v15 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)&v69);
    v16 = (volatile signed __int32 *)v69;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v16 = (volatile signed __int32 *)v69;
  }
  if ( v15 )
  {
LABEL_32:
    if ( *v63 == 1 )
    {
      v27 = v63[22];
      fPending = v27;
      v28 = 2147942974LL;
      if ( v27 < 0 )
        v28 = (unsigned int)v27;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v63,
        v28,
        &fPending);
      ((void (__fastcall *)(void ***))v60[1])(&v60);
      v16 = (volatile signed __int32 *)v69;
    }
  }
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
    {
      v29 = v69;
      if ( v69 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v69 + 8);
        operator delete(v29, 0x108uLL);
      }
    }
    v69 = 0LL;
  }
  if ( lpMem[0] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem[0], 0xFFFFFFFF) == 1 )
    {
      v30 = lpMem[0];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v30);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v67 )
  {
    v32 = v66;
    v33 = GetProcessHeap();
    HeapFree(v33, 0, v32);
    v67 = 0;
  }
  v66 = 0LL;
  if ( v64 == 1 )
  {
    v64 = 2;
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v52 = (HWND)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v53 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v52, v34, v35);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v65);
  }
  v64 = 3;
  if ( v62 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v61);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
  CoTaskMemFree(pv[0]);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
