/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180049174 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000A44C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x18003C7B0 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003DAE4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180040C6C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180041098 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x180048DB0 (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800490C0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x180049F38 (--0CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180049F80 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ??0CProjectionBorderManager@@QEAA@XZ @ 0x18004A00C (--0CProjectionBorderManager@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18004A0B0 (--0CContactManager@@QEAA@XZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x18004A1B4 (--0CWindowList@@QEAA@XZ.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x18004A360 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x18004A3C0 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x18004A428 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x18004A4D0 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x18004A578 (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004A61C (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x18004A9E0 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x18004AAA8 (-Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18004ABCC (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004B694 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009AF70 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800AD404 (--1CCompositionEffectCache@@QEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B52E0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopManager::Initialize(CDesktopManager *this, struct IUnknown *a2)
{
  HANDLE EventW; // r13
  int v4; // eax
  signed int v5; // ebx
  bool v6; // r12
  HKEY v7; // r15
  _QWORD *v8; // rbx
  HKEY v9; // r14
  char v10; // al
  CWindowList *v11; // rax
  CWindowList *v12; // rbx
  CWindowList *v13; // rax
  int v14; // r9d
  CContactManager *v15; // rax
  CContactManager *v16; // rax
  struct _RTL_CRITICAL_SECTION *v17; // rax
  CTransitionVisualController *v18; // rax
  CTransitionVisualController *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  CAnimationClockCoordinator *v22; // rax
  CAnimationClockCoordinator *v23; // r8
  CDesktopManager *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  int Factory; // eax
  CBaseObject *v28; // rcx
  __int64 v29; // rax
  CTextCache *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  CProjectionBorderManager *v34; // rax
  CProjectionBorderManager *v35; // rax
  CCompositionEffectCache *v36; // r14
  WPF *v37; // rcx
  void *v38; // r8
  int v39; // r9d
  signed int v40; // eax
  HANDLE Thread; // rax
  signed int v42; // eax
  signed int LastError; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-40h]
  unsigned int phkResulta; // [rsp+20h] [rbp-40h]
  __int64 v47; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  _DWORD pvParam[2]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handles; // [rsp+48h] [rbp-18h] BYREF
  HKEY v51; // [rsp+50h] [rbp-10h] BYREF
  char v52; // [rsp+58h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *cbData; // [rsp+A8h] [rbp+48h] BYREF
  int Data; // [rsp+B0h] [rbp+50h] BYREF
  DWORD Type; // [rsp+B8h] [rbp+58h] BYREF

  v47 = 0LL;
  EventW = 0LL;
  hKey = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_3ae5dff1_7681_484a_956a_6fd06c8e671e,
         &v47);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, v4, 0x159u, 0LL);
    goto LABEL_133;
  }
  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 24LL))(v47);
  Handles = &hKey;
  v51 = 0LL;
  v52 = 1;
  v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", 0, 0x20019u, &v51) == 0;
  if ( v52 )
  {
    v7 = v51;
    v8 = Handles;
    v9 = *(HKEY *)Handles;
    if ( *(_QWORD *)Handles )
    {
      LOBYTE(cbData) = 0;
      HIDWORD(cbData) = GetLastError();
      RegCloseKey(v9);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&cbData);
    }
    *v8 = v7;
  }
  if ( v6 )
  {
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"ForceEffectMode", 0LL, &Type, (LPBYTE)&Data, (LPDWORD)&cbData) && Data == 2 )
      *((_BYTE *)this + 29) = 1;
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"ForceDisableModeChangeAnimation", 0LL, &Type, (LPBYTE)&Data, (LPDWORD)&cbData) )
    {
      v10 = CDesktopManager::s_forceDisableModeChangeAnimation;
      if ( Data )
        v10 = 1;
      CDesktopManager::s_forceDisableModeChangeAnimation = v10;
    }
  }
  v11 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         712LL);
  v12 = v11;
  cbData = (struct _RTL_CRITICAL_SECTION *)v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x2C8uLL);
    v13 = CWindowList::CWindowList(v12);
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 54) = v13;
  if ( v13 )
  {
    v15 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               328LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v15;
    if ( v15 )
      v16 = CContactManager::CContactManager(v15);
    else
      v16 = 0LL;
    *((_QWORD *)this + 20) = v16;
    if ( !v16 )
    {
      phkResult = 402;
      goto LABEL_20;
    }
    v17 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            8LL);
    cbData = v17;
    if ( v17 )
      v17->DebugInfo = 0LL;
    else
      v17 = 0LL;
    *((_QWORD *)this + 28) = v17;
    if ( !v17 )
    {
      phkResult = 405;
      goto LABEL_20;
    }
    v18 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                           WPF::g_pProcessHeap,
                                           192LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v18;
    if ( v18 )
      v19 = CTransitionVisualController::CTransitionVisualController(v18);
    else
      v19 = 0LL;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = v19;
    if ( !v19 )
    {
      phkResult = 408;
      goto LABEL_20;
    }
    v20 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            88LL);
    v21 = v20;
    cbData = (struct _RTL_CRITICAL_SECTION *)v20;
    if ( v20 )
    {
      *(_QWORD *)v20 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
      *(_QWORD *)(v20 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
      *(_QWORD *)(v20 + 16) = 0LL;
      *(_QWORD *)(v20 + 24) = 0LL;
      *(_QWORD *)(v20 + 32) = 0LL;
      *(_DWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0LL;
      *(_QWORD *)(v20 + 56) = 0LL;
      *(_QWORD *)(v20 + 64) = 0LL;
      *(_DWORD *)(v20 + 72) = 0;
      *(_BYTE *)(v20 + 80) = 0;
    }
    else
    {
      v21 = 0LL;
    }
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) = v21;
    if ( !v21 )
    {
      phkResult = 411;
      goto LABEL_20;
    }
    v22 = (CAnimationClockCoordinator *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                          WPF::g_pProcessHeap,
                                          88LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v22;
    if ( v22 )
      v23 = CAnimationClockCoordinator::CAnimationClockCoordinator(v22);
    else
      v23 = 0LL;
    v24 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21) = v23;
    if ( !v23 )
    {
      phkResult = 414;
      goto LABEL_20;
    }
    v25 = CAnimationClockCoordinator::SetEventCallback(
            v23,
            (struct IAnimationClockEventListener *)((*((_QWORD *)v24 + 23) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v24 + 23) >> 64)));
    v5 = v25;
    if ( v25 < 0 )
    {
      phkResult = 417;
LABEL_50:
      v14 = v25;
      goto LABEL_21;
    }
    pvParam[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, pvParam, 0) )
      CDesktopManager::SetWindowAnimation(pvParam[1] != 0);
    v25 = DwmRedirectionManagerInitialize(
            *((struct IDwmRedirectionClient **)this + 54),
            (struct IDwmRedirectionManager **)this + 8);
    v5 = v25;
    if ( v25 < 0 )
    {
      phkResult = 431;
      goto LABEL_50;
    }
    v26 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    Factory = CCompositor::Create((struct CCompositor **)this + 6);
    v5 = Factory;
    if ( Factory >= 0 )
    {
      v28 = (CBaseObject *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = 0LL;
      if ( v28 )
        CBaseObject::Release(v28);
      Factory = CGraphicsDeviceManager::Create((struct CGraphicsDeviceManager **)this + 7);
      v5 = Factory;
      if ( Factory >= 0 )
      {
        v29 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                128LL);
        v30 = (CTextCache *)v29;
        if ( v29 )
        {
          *(_DWORD *)(v29 + 100) = 0;
          *(_QWORD *)v29 = &CTextCache::`vftable';
          memset_0((void *)(v29 + 8), 0, 0x5CuLL);
          *((_QWORD *)v30 + 13) = 0LL;
          *((_QWORD *)v30 + 14) = 0LL;
          *((_QWORD *)v30 + 15) = 0LL;
        }
        else
        {
          v30 = 0LL;
        }
        *((_QWORD *)this + 26) = v30;
        if ( !v30 )
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, -2147024882, 0x1BEu, 0LL);
          goto LABEL_129;
        }
        Factory = CTextCache::Init(v30);
        v5 = Factory;
        if ( Factory >= 0 )
        {
          v31 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  112LL);
          cbData = (struct _RTL_CRITICAL_SECTION *)v31;
          if ( v31 )
          {
            *(_QWORD *)v31 = &CIconicBitmapRegistry::`vftable';
            *(_QWORD *)(v31 + 16) = 0LL;
            *(_QWORD *)(v31 + 24) = 0LL;
            *(_QWORD *)(v31 + 32) = 0LL;
            *(_DWORD *)(v31 + 40) = 0;
            *(_QWORD *)(v31 + 48) = 0LL;
            *(_QWORD *)(v31 + 56) = 0LL;
            *(_QWORD *)(v31 + 64) = 0LL;
            *(_DWORD *)(v31 + 72) = 0;
            *(_QWORD *)(v31 + 96) = 0LL;
          }
          else
          {
            v31 = 0LL;
          }
          *((_QWORD *)this + 29) = v31;
          if ( !v31 )
          {
            v5 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, -2147024882, 0x1C2u, 0LL);
            goto LABEL_129;
          }
          Factory = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v31);
          v5 = Factory;
          if ( Factory >= 0 )
          {
            v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    88LL);
            cbData = (struct _RTL_CRITICAL_SECTION *)v32;
            if ( v32 )
            {
              *(_QWORD *)v32 = &CImmersiveIconicBitmapRegistry::`vftable';
              *(_QWORD *)(v32 + 16) = 0LL;
              *(_QWORD *)(v32 + 24) = 0LL;
              *(_QWORD *)(v32 + 32) = 0LL;
              *(_DWORD *)(v32 + 40) = 0;
              *(_QWORD *)(v32 + 48) = 0LL;
              *(_QWORD *)(v32 + 56) = 0LL;
              *(_QWORD *)(v32 + 64) = 0LL;
              *(_DWORD *)(v32 + 72) = 0;
              *(_QWORD *)(v32 + 80) = 0LL;
            }
            else
            {
              v32 = 0LL;
            }
            *((_QWORD *)this + 30) = v32;
            if ( !v32 )
            {
              v5 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, -2147024882, 0x1C6u, 0LL);
              goto LABEL_129;
            }
            Factory = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v32);
            v5 = Factory;
            if ( Factory >= 0 )
            {
              CDesktopManager::SetupDPIValues(this);
              *((_DWORD *)this + 118) = -1;
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                McTemplateU0q_EtwEventWriteTransfer(v33, (int)&UdwmStartup_Info, 1);
              CDesktopManager::UpdateRemotingMode(this);
              Factory = WICCreateImagingFactory_Proxy(567LL, (char *)this + 248);
              v5 = Factory;
              if ( Factory >= 0 )
              {
                Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 256);
                v5 = Factory;
                if ( Factory >= 0 )
                {
                  LODWORD(cbData) = 13;
                  Factory = CDesktopManager::UpdateSettings(this, (unsigned int *)&cbData);
                  v5 = Factory;
                  if ( Factory >= 0 )
                  {
                    Factory = CLivePreview::Create((struct CLivePreview **)this + 57);
                    v5 = Factory;
                    if ( Factory >= 0 )
                    {
                      v34 = (CProjectionBorderManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                          WPF::g_pProcessHeap,
                                                          584LL);
                      cbData = (struct _RTL_CRITICAL_SECTION *)v34;
                      if ( v34 )
                        v35 = CProjectionBorderManager::CProjectionBorderManager(v34);
                      else
                        v35 = 0LL;
                      *((_QWORD *)this + 58) = v35;
                      if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58) )
                      {
                        v5 = -2147024882;
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, -2147024882, 0x1EDu, 0LL);
                        goto LABEL_129;
                      }
                      Handles = (char *)this + 216;
                      v51 = 0LL;
                      v52 = 1;
                      v5 = CCompositionEffectCache::Create((struct CCompositionEffectCache **)&v51);
                      if ( v52 )
                      {
                        v36 = *(CCompositionEffectCache **)Handles;
                        *(_QWORD *)Handles = v51;
                        if ( v36 )
                        {
                          CCompositionEffectCache::~CCompositionEffectCache(v36);
                          WPF::Free(v37, v36, v38);
                        }
                      }
                      if ( v5 >= 0 )
                      {
                        Factory = CWindowList::Initialize(*((CWindowList **)this + 54));
                        v5 = Factory;
                        if ( Factory < 0 )
                        {
                          phkResulta = 497;
                          goto LABEL_127;
                        }
                        SetLastError(0);
                        EventW = CreateEventW(0LL, 1, 0, 0LL);
                        if ( EventW )
                        {
                          SetLastError(0);
                          Thread = CreateThread(
                                     0LL,
                                     0LL,
                                     (LPTHREAD_START_ROUTINE)CDesktopManager::DwmEventThreadProc,
                                     EventW,
                                     0,
                                     (LPDWORD)this + 150);
                          *((_QWORD *)this + 76) = Thread;
                          if ( Thread )
                          {
                            SetThreadDescription(Thread, L"uDWM Event Thread");
                            Handles = EventW;
                            v51 = (HKEY)*((_QWORD *)this + 76);
                            SetLastError(0);
                            if ( !WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF) )
                            {
                              Factory = CDesktopManager::_InitializeWnf(this);
                              v5 = Factory;
                              if ( Factory >= 0 )
                              {
                                CDesktopManager::ReadProductType(this);
                                *((_BYTE *)this + 24) = 1;
LABEL_132:
                                CloseHandle(EventW);
                                goto LABEL_133;
                              }
                              phkResulta = 536;
                              goto LABEL_127;
                            }
                            LastError = GetLastError();
                            v5 = LastError;
                            if ( LastError > 0 )
                              v5 = (unsigned __int16)LastError | 0x80070000;
                            if ( v5 >= 0 )
                              v5 = -2003304445;
                            phkResulta = 531;
                          }
                          else
                          {
                            v42 = GetLastError();
                            v5 = v42;
                            if ( v42 > 0 )
                              v5 = (unsigned __int16)v42 | 0x80070000;
                            if ( v5 >= 0 )
                              v5 = -2003304445;
                            phkResulta = 514;
                          }
                        }
                        else
                        {
                          v40 = GetLastError();
                          v5 = v40;
                          if ( v40 > 0 )
                            v5 = (unsigned __int16)v40 | 0x80070000;
                          if ( v5 >= 0 )
                            v5 = -2003304445;
                          phkResulta = 505;
                        }
                      }
                      else
                      {
                        phkResulta = 495;
                      }
                      v39 = v5;
LABEL_128:
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, v39, phkResulta, 0LL);
LABEL_129:
                      CDesktopManager::NotifyRedirectionShutdown(this);
                      cbData = &CDesktopManager::s_csDwmInstance;
                      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
                      DwmRedirectionManagerShutdown();
                      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                      if ( !EventW )
                        goto LABEL_133;
                      goto LABEL_132;
                    }
                    phkResulta = 490;
                  }
                  else
                  {
                    phkResulta = 488;
                  }
                }
                else
                {
                  phkResulta = 473;
                }
              }
              else
              {
                phkResulta = 466;
              }
            }
            else
            {
              phkResulta = 455;
            }
          }
          else
          {
            phkResulta = 451;
          }
        }
        else
        {
          phkResulta = 447;
        }
      }
      else
      {
        phkResulta = 438;
      }
    }
    else
    {
      phkResulta = 435;
    }
LABEL_127:
    v39 = Factory;
    goto LABEL_128;
  }
  phkResult = 399;
LABEL_20:
  v14 = -2147024882;
  v5 = -2147024882;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, v14, phkResult, 0LL);
LABEL_133:
  if ( v47 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    v47 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return (unsigned int)v5;
}
