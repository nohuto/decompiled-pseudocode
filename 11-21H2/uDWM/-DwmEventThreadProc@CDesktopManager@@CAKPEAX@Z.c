/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18000B9A0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180015174 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800158DC (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001C5CC (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800519FC (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180051A88 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180052008 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x1800520A8 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180056510 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A5BA0 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AFC88 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x1800AFCBC (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B06E4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800B1818 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B5790 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800BED74 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  HANDLE v2; // r14
  LARGE_INTEGER v3; // rbx
  bool v4; // r15
  bool v5; // r13
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  HRESULT v9; // eax
  int v10; // edi
  int Instance; // eax
  signed int v12; // r12d
  const unsigned __int16 *v13; // rdx
  char v14; // di
  DWORD v15; // r14d
  CDesktopManager *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r8
  char v19; // cl
  DWORD v20; // r8d
  DWORD v21; // eax
  int v22; // esi
  __int64 v23; // r8
  double v24; // xmm6_8
  CDesktopManager *v25; // r15
  unsigned int v26; // r12d
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rbx
  CWindowList *v30; // rsi
  CDesktopManager *v31; // rdi
  int updated; // eax
  unsigned int v33; // edx
  wil::details **v34; // rdi
  int v35; // eax
  void *v36; // rdx
  int v37; // eax
  int v38; // eax
  signed int v39; // eax
  CAnimationEngine *v40; // rax
  CAnimationEngine *v41; // rdi
  CDesktopManager *v42; // rcx
  CDesktopManager *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  signed int v46; // eax
  signed int LastError; // eax
  bool v49[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v51[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v52; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMSG Frequency_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE pHandles[3]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v58; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C8h] [rbp-40h]
  __int64 v61; // [rsp+CCh] [rbp-3Ch]
  _BYTE v62[80]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v63[12]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v64[16]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v65[16]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v2 = 0LL;
  hObject = 0LL;
  v3.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v4 = 0;
  v5 = 0;
  *(_WORD *)&v49[4] = 0;
  v63[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 146) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x93Cu);
    goto LABEL_139;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v49[4]);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x93Eu);
LABEL_139:
    CWaitForService::Cleanup((CWaitForService *)v63);
    goto LABEL_140;
  }
  v9 = CoInitializeEx(0LL, 4u);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x945u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x946u);
    CWaitForService::Cleanup((CWaitForService *)v63);
    goto LABEL_140;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 21);
  v12 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x948u);
LABEL_131:
    CWaitForService::Cleanup((CWaitForService *)v63);
    goto LABEL_132;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v63, v13);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v46 = GetLastError();
    v12 = v46;
    if ( v46 > 0 )
      v12 = (unsigned __int16)v46 | 0x80070000;
    if ( v12 >= 0 )
      v12 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x954u);
    goto LABEL_131;
  }
  v51[0] = 0;
  while ( 1 )
  {
    if ( !v2 && (int)MilCompositionEngine_GetComposedEventId(v51) >= 0 )
    {
      OpenComposedEvent(v51[0], v33, &hObject);
      v2 = hObject;
    }
    memset(&Frequency_8, 0, sizeof(Frequency_8));
    pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 56LL);
    pHandles[1] = v2;
    v14 = 0;
    v15 = 2;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( *(_DWORD *)(v17 + 64) && *(_BYTE *)(v17 + 120) )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
      else
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !CDesktopManager::s_fTimelineDirty && !*((_DWORD *)v16 + 132) || *((_BYTE *)v16 + 19) )
        {
          v14 = 0;
          goto LABEL_16;
        }
      }
      v14 = 1;
LABEL_16:
      *((_BYTE *)v16 + 18) = v14;
      v5 = hObject && (unsigned __int8)v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23);
      if ( (unsigned __int8)EtwEventEnabled(
                              Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                              &UdwmAllAnimationFinished_Info) )
      {
        if ( v14 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              Microsoft_Windows_Dwm_Udwm_Provider_Context,
              (__int64)&UdwmAllAnimationFinished_Info,
              v18,
              1,
              (__int64)v64);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v5 && v4 )
    {
      v19 = 1;
LABEL_71:
      v15 = 1;
      v4 = 0;
      goto LABEL_23;
    }
    v19 = 0;
    if ( !v5 )
      goto LABEL_71;
    if ( !v4 )
    {
      v3.QuadPart = -1LL;
      v4 = 1;
      v49[0] = 1;
      v20 = 0;
      goto LABEL_26;
    }
LABEL_23:
    if ( v19 )
      goto LABEL_49;
    v49[0] = v4;
    v20 = 64;
    if ( !v4 )
    {
      v20 = -1;
      v49[0] = 0;
    }
LABEL_26:
    v21 = MsgWaitForMultipleObjectsEx(v15, pHandles, v20, 0x1CFFu, 6u);
    if ( v21 == v15 )
      break;
    if ( !v21 )
    {
      v52 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v34 = (wil::details **)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      v35 = CGraphicsDeviceManager::CheckDXGIAdapter((CGraphicsDeviceManager *)v34, &v49[2]);
      v12 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B,
          (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)v35);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x9D0u);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
        goto LABEL_110;
      }
      wil::details::ResetEvent(v34[7], v36);
      v12 = 0;
      v14 = !v49[2];
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
      goto LABEL_49;
    }
    v14 = 0;
    if ( !v4 || v21 != 1 && v21 != 258 )
      goto LABEL_49;
    v53 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v22 = 0;
    v12 = 0;
    v14 = 0;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( QueryPerformanceCounter(&PerformanceCount) )
      {
        if ( v3.QuadPart == -1 )
          v3 = PerformanceCount;
        v24 = (double)(PerformanceCount.LowPart - v3.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmAnimation_Info,
            v23,
            1,
            (__int64)v65);
        v25 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v24, v23);
        v26 = *((_DWORD *)v25 + 132);
        if ( v26 )
        {
          v58 = v62;
          v59 = v62;
          v60 = 10;
          v61 = 10LL;
          v14 = 1;
          if ( v26 > 0xA )
          {
            v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v58, 8u, v26, *((_QWORD *)v25 + 63));
            v12 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0xC0u);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x84Cu);
              DynArrayImpl<0>::~DynArrayImpl<0>(&v58);
              v22 = v12;
LABEL_97:
              v4 = v49[0];
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x867u);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x891u);
              goto LABEL_48;
            }
            v22 = v37;
            v26 = HIDWORD(v61);
          }
          else
          {
            memcpy_0(v62, *((const void **)v25 + 63), 8LL * v26);
            HIDWORD(v61) = v26;
          }
          v27 = 0LL;
          if ( v26 )
          {
            while ( 1 )
            {
              v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v58[8 * v27] + 144LL))(*(_QWORD *)&v58[8 * v27]);
              v22 = v28;
              v12 = v28;
              if ( v28 < 0 )
                break;
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= HIDWORD(v61) )
                goto LABEL_42;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x850u);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v58);
            goto LABEL_97;
          }
LABEL_42:
          if ( v58 != v59 )
          {
            (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v58 = 0LL;
          }
        }
        if ( *((_BYTE *)v25 + 23) )
        {
          v38 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 28));
          v22 = v38;
          v12 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x856u);
            goto LABEL_97;
          }
        }
        v12 = v22;
        v29 = *((_QWORD *)v25 + 21);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( *(_DWORD *)(v29 + 64) && *(_BYTE *)(v29 + 120) )
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          v49[1] = 0;
          CAnimationEngine::OnTick(
            *((CAnimationEngine **)v25 + 21),
            *((double *)CDesktopManager::s_pDesktopManagerInstance + 31),
            &v49[1]);
          v14 |= v49[1];
        }
        else
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        }
        v4 = v49[0];
        v3 = PerformanceCount;
      }
      else
      {
        v39 = GetLastError();
        v12 = v39;
        if ( v39 > 0 )
          v12 = (unsigned __int16)v39 | 0x80070000;
        if ( v12 >= 0 )
          v12 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x887u);
      }
    }
LABEL_48:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x9D8u);
      goto LABEL_110;
    }
LABEL_49:
    if ( Frequency_8.message == 18 )
      goto LABEL_110;
    if ( v14 )
    {
      v53 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        v30 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
        if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
        {
          v52 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v31 = CDesktopManager::s_pDesktopManagerInstance;
          if ( GetCurrentThreadId() != *((_DWORD *)v31 + 146)
            && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 22)) > 0 )
          {
            v40 = CDesktopManager::AcquireAnimationEngine();
            v41 = v40;
            if ( v40 )
            {
              if ( CAnimationEngine::IsIdle(v40) )
              {
                CAnimationEngine::Release(v41);
                goto LABEL_55;
              }
              CAnimationEngine::Release(v41);
            }
          }
          updated = CWindowList::ForceUpdateScene(v30);
          v12 = updated;
          if ( updated < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A45,
              (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)updated);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x9EAu);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v53);
            goto LABEL_110;
          }
LABEL_55:
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        }
        v12 = 0;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    v2 = hObject;
  }
  if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
  {
LABEL_66:
    v14 = 0;
    goto LABEL_49;
  }
  while ( Frequency_8.message != 18 )
  {
    DispatchMessageW(&Frequency_8);
    if ( !Frequency_8.hwnd )
      CDesktopManager::HandleThreadMessage(Frequency_8.message, (HWND)Frequency_8.wParam, Frequency_8.lParam);
    if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
      goto LABEL_66;
  }
LABEL_110:
  if ( hObject )
    CloseHandle(hObject);
  CWaitForService::Cleanup((CWaitForService *)v63);
  v53 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    if ( *(_WORD *)&v49[4] )
      UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v49[4], g_hInstance);
    CDesktopManager::AbandonActiveAnimations(v42);
    v43 = CDesktopManager::s_pDesktopManagerInstance;
    v44 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
    if ( v44 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 32));
      v43 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) = 0LL;
    }
    v45 = *((_QWORD *)v43 + 33);
    if ( v45 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 16LL))(*((_QWORD *)v43 + 33));
      v43 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
    }
    if ( *((_QWORD *)v43 + 21) )
    {
      CAnimationEngine::Cleanup(*((CAnimationEngine **)v43 + 21));
      v43 = CDesktopManager::s_pDesktopManagerInstance;
    }
    if ( *((_QWORD *)v43 + 21) )
    {
      CAnimationEngine::Release(*((CAnimationEngine **)v43 + 21));
      v43 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21) = 0LL;
    }
    CDisplayBroker::Shutdown(*((CDisplayBroker **)v43 + 27));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v53);
LABEL_132:
  CoUninitialize();
  if ( v12 >= 0 )
    return (unsigned int)v12;
LABEL_140:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003302654, 0xA1Fu);
  return 2291664642LL;
}
