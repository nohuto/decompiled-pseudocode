/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18002F0C0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18003A1C0 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18004418C (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180044864 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18004B6A8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18004CF0C (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004DD60 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800538D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180057800 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180057B3C (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800AAFEC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800B42D8 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x1800B430C (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B48B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800B5D6C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B8ED0 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800C3890 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  void *v2; // r15
  LARGE_INTEGER v3; // rbx
  bool v4; // r12
  __int64 (*v5)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v6; // rcx
  int v7; // eax
  HRESULT v8; // eax
  int v9; // edi
  int Instance; // eax
  signed int v11; // r13d
  const unsigned __int16 *v12; // rdx
  char v13; // di
  DWORD v14; // r14d
  CDesktopManager *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  char v18; // dl
  DWORD v19; // r8d
  DWORD v20; // eax
  int v21; // r14d
  __int64 v22; // r8
  bool v23; // r13
  double v24; // xmm6_8
  CDesktopManager *v25; // rsi
  unsigned int v26; // r15d
  int v27; // r12d
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rbx
  CWindowList *v31; // r14
  CDesktopManager *v32; // rdi
  int updated; // eax
  unsigned int v34; // edx
  wil::details **v35; // rdi
  int v36; // eax
  void *v37; // rdx
  int v38; // eax
  int v39; // eax
  signed int v40; // eax
  CAnimationEngine *v41; // rax
  CAnimationEngine *v42; // rdi
  CDesktopManager *v43; // rcx
  CDesktopManager *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  signed int v47; // eax
  signed int LastError; // eax
  int dwFlags; // [rsp+28h] [rbp-E0h]
  bool v51[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v52; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v53[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *v54; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v55; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMSG Frequency_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE pHandles[3]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v60; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C8h] [rbp-40h]
  __int64 v63; // [rsp+CCh] [rbp-3Ch]
  _BYTE v64[80]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v65[12]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v66[16]; // [rsp+188h] [rbp+80h] BYREF
  int v67[4]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v2 = 0LL;
  v54 = 0LL;
  v3.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v4 = 0;
  v51[1] = 0;
  *(_WORD *)&v51[4] = 0;
  v65[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 150) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x8C6u, 0LL);
    goto LABEL_140;
  }
  v7 = CDesktopManager::RegisterWindowClass(v6, v5, (unsigned __int16 *)&v51[4]);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8C8u, 0LL);
LABEL_140:
    CWaitForService::Cleanup((CWaitForService *)v65);
    goto LABEL_141;
  }
  v8 = CoInitializeEx(0LL, 4u);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8CFu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8D0u, 0LL);
    goto LABEL_140;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v11 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x8D2u, 0LL);
LABEL_132:
    CWaitForService::Cleanup((CWaitForService *)v65);
    goto LABEL_133;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v65, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v47 = GetLastError();
    v11 = v47;
    if ( v47 > 0 )
      v11 = (unsigned __int16)v47 | 0x80070000;
    if ( v11 >= 0 )
      v11 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x8DEu, 0LL);
    goto LABEL_132;
  }
  v53[0] = 0;
  while ( 1 )
  {
    if ( !v2 && (int)MilCompositionEngine_GetComposedEventId(v53) >= 0 )
    {
      OpenComposedEvent(v53[0], v34, &v54);
      v2 = v54;
    }
    memset(&Frequency_8, 0, sizeof(Frequency_8));
    pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 56LL);
    pHandles[1] = v2;
    v13 = 0;
    v14 = 2;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( *(_DWORD *)(v16 + 64) && *(_BYTE *)(v16 + 120) )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
      else
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !CDesktopManager::s_fTimelineDirty && !*((_DWORD *)v15 + 136) || *((_BYTE *)v15 + 19) )
        {
          v13 = 0;
          goto LABEL_16;
        }
      }
      v13 = 1;
LABEL_16:
      *((_BYTE *)v15 + 18) = v13;
      v51[1] = v2 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) | (unsigned __int8)v13;
      if ( (unsigned __int8)EtwEventEnabled(
                              Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                              &UdwmAllAnimationFinished_Info) )
      {
        if ( v13 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              Microsoft_Windows_Dwm_Udwm_Provider_Context,
              (__int64)&UdwmAllAnimationFinished_Info,
              v17,
              1LL,
              (__int64)v66);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v51[1] && v4 )
    {
      v18 = 1;
      v19 = 64;
LABEL_66:
      v14 = 1;
      v4 = 0;
      goto LABEL_25;
    }
    v18 = 0;
    v19 = 64;
    if ( !v51[1] )
      goto LABEL_66;
    if ( !v4 )
    {
      v3.QuadPart = -1LL;
      v4 = 1;
      v19 = 0;
      v13 = 0;
      goto LABEL_28;
    }
LABEL_25:
    if ( v18 )
      goto LABEL_54;
    v13 = 0;
    if ( !v4 )
      v19 = -1;
LABEL_28:
    v20 = MsgWaitForMultipleObjectsEx(v14, pHandles, v19, 0x1CFFu, 6u);
    if ( v20 == v14 )
      break;
    if ( v20 )
    {
      if ( v4 && (v20 == 1 || v20 == 258) )
      {
        v55 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v21 = 0;
        v11 = 0;
        if ( !CDesktopManager::s_pDesktopManagerInstance )
          goto LABEL_53;
        PerformanceCount.QuadPart = 0LL;
        SetLastError(0);
        if ( !QueryPerformanceCounter(&PerformanceCount) )
        {
          v40 = GetLastError();
          v11 = v40;
          if ( v40 > 0 )
            v11 = (unsigned __int16)v40 | 0x80070000;
          if ( v11 >= 0 )
            v11 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x811u, 0LL);
          goto LABEL_53;
        }
        v23 = v4;
        if ( v3.QuadPart == -1 )
          v3 = PerformanceCount;
        v24 = (double)(PerformanceCount.LowPart - v3.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmAnimation_Info,
            v22,
            1LL,
            (__int64)v67);
        v25 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v24);
        v26 = *((_DWORD *)v25 + 136);
        if ( v26 )
        {
          v60 = v64;
          v61 = v64;
          v62 = 10;
          v63 = 10LL;
          v13 = 1;
          v27 = 0;
          if ( v26 <= 0xA )
          {
            memcpy_0(v64, *((const void **)v25 + 65), 8LL * v26);
            HIDWORD(v63) = v26;
            goto LABEL_41;
          }
          v38 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v60, 8, v26, *((_QWORD *)v25 + 65));
          v27 = v38;
          LODWORD(v52) = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u, 0LL);
            v21 = v27;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x7D6u, 0LL);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v60);
            v4 = v23;
            v11 = v21;
            goto LABEL_98;
          }
          v26 = HIDWORD(v63);
LABEL_41:
          v21 = v27;
          v28 = 0LL;
          v51[0] = v23;
          if ( v26 )
          {
            v51[0] = v23;
            while ( 1 )
            {
              v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v60[8 * v28] + 152LL))(*(_QWORD *)&v60[8 * v28]);
              v21 = v29;
              v11 = v29;
              if ( v29 < 0 )
                break;
              v28 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v28 >= HIDWORD(v63) )
                goto LABEL_45;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x7DAu, 0LL);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v60);
            v4 = v51[0];
LABEL_98:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x7F1u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x81Bu, 0LL);
            v2 = v54;
            goto LABEL_53;
          }
LABEL_45:
          if ( v60 != v61 )
          {
            (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v60 = 0LL;
          }
          v4 = v51[0];
        }
        if ( *((_BYTE *)v25 + 23) )
        {
          v39 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 29));
          v21 = v39;
          v11 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x7E0u, 0LL);
            goto LABEL_98;
          }
        }
        v11 = v21;
        if ( v21 < 0 )
          goto LABEL_98;
        v30 = *((_QWORD *)v25 + 22);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( *(_DWORD *)(v30 + 64) && *(_BYTE *)(v30 + 120) )
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          v51[2] = 0;
          CAnimationEngine::OnTick(
            *((CAnimationEngine **)v25 + 22),
            *((double *)CDesktopManager::s_pDesktopManagerInstance + 33),
            &v51[2]);
          v13 |= v51[2];
        }
        else
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        }
        v3 = PerformanceCount;
        v2 = v54;
LABEL_53:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x962u, 0LL);
          goto LABEL_112;
        }
      }
    }
    else
    {
      v52 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v35 = (wil::details **)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
      v36 = CGraphicsDeviceManager::CheckDXGIAdapter((CGraphicsDeviceManager *)v35, &v51[3]);
      v11 = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)v36,
          dwFlags);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x95Au, 0LL);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
        goto LABEL_112;
      }
      wil::details::ResetEvent(v35[7], v37);
      v11 = 0;
      v13 = !v51[3];
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
    }
LABEL_54:
    if ( Frequency_8.message == 18 )
      goto LABEL_112;
    if ( v13 )
    {
      v55 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !CDesktopManager::s_pDesktopManagerInstance )
        goto LABEL_62;
      v31 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
      {
        v52 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v32 = CDesktopManager::s_pDesktopManagerInstance;
        if ( GetCurrentThreadId() != *((_DWORD *)v32 + 150)
          && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 23)) > 0 )
        {
          v41 = CDesktopManager::AcquireAnimationEngine();
          v42 = v41;
          if ( v41 )
          {
            if ( CAnimationEngine::IsIdle(v41) )
            {
              CAnimationEngine::Release(v42);
LABEL_60:
              LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
              goto LABEL_61;
            }
            CAnimationEngine::Release(v42);
          }
        }
        updated = CWindowList::ForceUpdateScene(v31);
        v11 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AA9,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)updated,
            dwFlags);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x974u, 0LL);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v55);
          goto LABEL_112;
        }
        goto LABEL_60;
      }
LABEL_61:
      v11 = 0;
LABEL_62:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
    goto LABEL_54;
  while ( Frequency_8.message != 18 )
  {
    DispatchMessageW(&Frequency_8);
    if ( !Frequency_8.hwnd )
      CDesktopManager::HandleThreadMessage(Frequency_8.message, Frequency_8.wParam, Frequency_8.lParam);
    if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
      goto LABEL_54;
  }
LABEL_112:
  if ( v2 )
    CloseHandle(v2);
  CWaitForService::Cleanup((CWaitForService *)v65);
  v55 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    if ( *(_WORD *)&v51[4] )
      UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v51[4], g_hInstance);
    CDesktopManager::AbandonActiveAnimations(v43);
    v44 = CDesktopManager::s_pDesktopManagerInstance;
    v45 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34);
    if ( v45 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 34));
      v44 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34) = 0LL;
    }
    v46 = *((_QWORD *)v44 + 35);
    if ( v46 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 16LL))(*((_QWORD *)v44 + 35));
      v44 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 35) = 0LL;
    }
    if ( *((_QWORD *)v44 + 22) )
    {
      CAnimationEngine::Cleanup(*((CAnimationEngine **)v44 + 22));
      v44 = CDesktopManager::s_pDesktopManagerInstance;
    }
    if ( *((_QWORD *)v44 + 22) )
    {
      CAnimationEngine::Release(*((CAnimationEngine **)v44 + 22));
      v44 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
    }
    CDisplayBroker::Shutdown(*((CDisplayBroker **)v44 + 28));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v55);
LABEL_133:
  CoUninitialize();
  if ( v11 >= 0 )
    return (unsigned int)v11;
LABEL_141:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x9A9u, 0LL);
  return 2291664642LL;
}
