/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1800524C4 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800140D8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??$invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x180014390 (--$invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180016C9C (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x180052570 (--0CWindowList@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18005271C (--0CContactManager@@QEAA@XZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180052820 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x1800528AC (--0CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x1800528F4 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18005295C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180052990 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18005379C (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x180053808 (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ??0CProjectionBorderManager@@QEAA@XZ @ 0x18005462C (--0CProjectionBorderManager@@QEAA@XZ.c)
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x1800546D0 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180054A38 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x180054A94 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x180054B3C (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x180054BE4 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x18005600C (-Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ??$out_param@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@Z @ 0x180062950 (--$out_param@V-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@std@@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180062968 (--1-$out_param_t@V-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@st.c)
 *     ?Create@CMicaEffectCache@@SAJPEAPEAV1@@Z @ 0x180062A14 (-Create@CMicaEffectCache@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180093FF0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B0DE8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopManager::Initialize(CDesktopManager *this, struct IUnknown *a2)
{
  HANDLE EventW; // r12
  int v4; // eax
  signed int v5; // ebx
  bool v6; // r15
  HKEY v7; // r14
  _QWORD *v8; // rbx
  CWindowList *v9; // rax
  CWindowList *v10; // rbx
  CWindowList *v11; // rax
  int v12; // r9d
  CContactManager *v13; // rax
  CContactManager *v14; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rax
  CTransitionVisualController *v16; // rax
  CTransitionVisualController *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  CAnimationClockCoordinator *v20; // rax
  CAnimationClockCoordinator *v21; // r8
  CDesktopManager *v22; // rax
  int v23; // eax
  CBaseObject *v24; // rcx
  int updated; // eax
  CBaseObject *v26; // rcx
  __int64 v27; // rax
  CTextCache *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  CProjectionBorderManager *v32; // rax
  CProjectionBorderManager *v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  signed int v36; // eax
  HANDLE Thread; // rax
  signed int v38; // eax
  signed int LastError; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-40h]
  unsigned int phkResulta; // [rsp+20h] [rbp-40h]
  __int64 v43; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  _DWORD pvParam[2]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handles; // [rsp+48h] [rbp-18h] BYREF
  HKEY v47; // [rsp+50h] [rbp-10h] BYREF
  char v48; // [rsp+58h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *cbData; // [rsp+A8h] [rbp+48h] BYREF
  __int64 Data; // [rsp+B0h] [rbp+50h] BYREF
  LSTATUS (__stdcall *Type)(HKEY); // [rsp+B8h] [rbp+58h] BYREF

  v43 = 0LL;
  EventW = 0LL;
  hKey = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_3ae5dff1_7681_484a_956a_6fd06c8e671e,
         &v43);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, v4, 0x14Au);
    goto LABEL_127;
  }
  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 24LL))(v43);
  Handles = &hKey;
  v47 = 0LL;
  v48 = 1;
  v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", 0, 0x20019u, &v47) == 0;
  if ( v48 )
  {
    v7 = v47;
    v8 = Handles;
    if ( *(_QWORD *)Handles )
    {
      Data = *(_QWORD *)Handles;
      LOBYTE(cbData) = 0;
      HIDWORD(cbData) = GetLastError();
      Type = RegCloseKey;
      wistd::invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&Type, &Data);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&cbData);
    }
    *v8 = v7;
  }
  if ( v6 )
  {
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"DDisplayTestMode", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, (LPDWORD)&cbData)
      && (unsigned int)Data < 3 )
    {
      *((_DWORD *)this + 192) = Data;
    }
    LODWORD(cbData) = 4;
    if ( !RegQueryValueExW(hKey, L"ForceEffectMode", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, (LPDWORD)&cbData)
      && (_DWORD)Data == 2 )
    {
      *((_BYTE *)this + 28) = 1;
    }
  }
  v9 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        712LL);
  v10 = v9;
  cbData = (struct _RTL_CRITICAL_SECTION *)v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x2C8uLL);
    v11 = CWindowList::CWindowList(v10);
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 52) = v11;
  if ( v11 )
  {
    v13 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               328LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v13;
    if ( v13 )
      v14 = CContactManager::CContactManager(v13);
    else
      v14 = 0LL;
    *((_QWORD *)this + 19) = v14;
    if ( !v14 )
    {
      phkResult = 421;
      goto LABEL_19;
    }
    v15 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            8LL);
    cbData = v15;
    if ( v15 )
      v15->DebugInfo = 0LL;
    else
      v15 = 0LL;
    *((_QWORD *)this + 27) = v15;
    if ( !v15 )
    {
      phkResult = 424;
      goto LABEL_19;
    }
    v16 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                           WPF::g_pProcessHeap,
                                           192LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v16;
    if ( v16 )
      v17 = CTransitionVisualController::CTransitionVisualController(v16);
    else
      v17 = 0LL;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) = v17;
    if ( !v17 )
    {
      phkResult = 427;
      goto LABEL_19;
    }
    v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            88LL);
    v19 = v18;
    cbData = (struct _RTL_CRITICAL_SECTION *)v18;
    if ( v18 )
    {
      *(_QWORD *)v18 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
      *(_QWORD *)(v18 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
      *(_QWORD *)(v18 + 16) = 0LL;
      *(_QWORD *)(v18 + 24) = 0LL;
      *(_QWORD *)(v18 + 32) = 0LL;
      *(_DWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 48) = 0LL;
      *(_QWORD *)(v18 + 56) = 0LL;
      *(_QWORD *)(v18 + 64) = 0LL;
      *(_DWORD *)(v18 + 72) = 0;
      *(_BYTE *)(v18 + 80) = 0;
    }
    else
    {
      v19 = 0LL;
    }
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = v19;
    if ( !v19 )
    {
      phkResult = 430;
      goto LABEL_19;
    }
    v20 = (CAnimationClockCoordinator *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                          WPF::g_pProcessHeap,
                                          88LL);
    cbData = (struct _RTL_CRITICAL_SECTION *)v20;
    if ( v20 )
      v21 = CAnimationClockCoordinator::CAnimationClockCoordinator(v20);
    else
      v21 = 0LL;
    v22 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) = v21;
    if ( !v21 )
    {
      phkResult = 433;
      goto LABEL_19;
    }
    v23 = CAnimationClockCoordinator::SetEventCallback(
            v21,
            (struct IAnimationClockEventListener *)((*((_QWORD *)v22 + 22) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v22 + 22) >> 64)));
    v5 = v23;
    if ( v23 < 0 )
    {
      phkResult = 436;
LABEL_49:
      v12 = v23;
      goto LABEL_20;
    }
    pvParam[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, pvParam, 0) )
      CDesktopManager::SetWindowAnimation(pvParam[1] != 0);
    v23 = DwmRedirectionManagerInitialize(
            *((struct IDwmRedirectionClient **)this + 52),
            (struct IDwmRedirectionManager **)this + 7);
    v5 = v23;
    if ( v23 < 0 )
    {
      phkResult = 450;
      goto LABEL_49;
    }
    v24 = (CBaseObject *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v24 )
      CBaseObject::Release(v24);
    updated = CCompositor::Create((struct CCompositor **)this + 5);
    v5 = updated;
    if ( updated >= 0 )
    {
      v26 = (CBaseObject *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      if ( v26 )
        CBaseObject::Release(v26);
      updated = CGraphicsDeviceManager::Create((struct CGraphicsDeviceManager **)this + 6);
      v5 = updated;
      if ( updated >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                128LL);
        v28 = (CTextCache *)v27;
        if ( v27 )
        {
          *(_DWORD *)(v27 + 100) = 0;
          *(_QWORD *)v27 = &CTextCache::`vftable';
          memset_0((void *)(v27 + 8), 0, 0x5CuLL);
          *((_QWORD *)v28 + 13) = 0LL;
          *((_QWORD *)v28 + 14) = 0LL;
          *((_QWORD *)v28 + 15) = 0LL;
        }
        else
        {
          v28 = 0LL;
        }
        *((_QWORD *)this + 25) = v28;
        if ( !v28 )
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, -2147024882, 0x1D1u);
          goto LABEL_123;
        }
        updated = CTextCache::Init(v28);
        v5 = updated;
        if ( updated >= 0 )
        {
          v29 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  112LL);
          cbData = (struct _RTL_CRITICAL_SECTION *)v29;
          if ( v29 )
          {
            *(_QWORD *)v29 = &CIconicBitmapRegistry::`vftable';
            *(_QWORD *)(v29 + 16) = 0LL;
            *(_QWORD *)(v29 + 24) = 0LL;
            *(_QWORD *)(v29 + 32) = 0LL;
            *(_DWORD *)(v29 + 40) = 0;
            *(_QWORD *)(v29 + 48) = 0LL;
            *(_QWORD *)(v29 + 56) = 0LL;
            *(_QWORD *)(v29 + 64) = 0LL;
            *(_DWORD *)(v29 + 72) = 0;
            *(_QWORD *)(v29 + 96) = 0LL;
          }
          else
          {
            v29 = 0LL;
          }
          *((_QWORD *)this + 28) = v29;
          if ( !v29 )
          {
            v5 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, -2147024882, 0x1D5u);
            goto LABEL_123;
          }
          updated = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v29);
          v5 = updated;
          if ( updated >= 0 )
          {
            v30 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    88LL);
            cbData = (struct _RTL_CRITICAL_SECTION *)v30;
            if ( v30 )
            {
              *(_QWORD *)v30 = &CImmersiveIconicBitmapRegistry::`vftable';
              *(_QWORD *)(v30 + 16) = 0LL;
              *(_QWORD *)(v30 + 24) = 0LL;
              *(_QWORD *)(v30 + 32) = 0LL;
              *(_DWORD *)(v30 + 40) = 0;
              *(_QWORD *)(v30 + 48) = 0LL;
              *(_QWORD *)(v30 + 56) = 0LL;
              *(_QWORD *)(v30 + 64) = 0LL;
              *(_DWORD *)(v30 + 72) = 0;
              *(_QWORD *)(v30 + 80) = 0LL;
            }
            else
            {
              v30 = 0LL;
            }
            *((_QWORD *)this + 29) = v30;
            if ( !v30 )
            {
              v5 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, -2147024882, 0x1D9u);
              goto LABEL_123;
            }
            updated = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v30);
            v5 = updated;
            if ( updated >= 0 )
            {
              CDesktopManager::SetupDPIValues(this);
              *((_DWORD *)this + 114) = -1;
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                McTemplateU0q_EtwEventWriteTransfer(v31, (int)&UdwmStartup_Info, 1);
              CDesktopManager::UpdateRemotingMode(this);
              updated = WICCreateImagingFactory_Proxy(567LL, (char *)this + 240);
              v5 = updated;
              if ( updated >= 0 )
              {
                updated = CDesktopManager::UpdateSettings(this, 13LL);
                v5 = updated;
                if ( updated >= 0 )
                {
                  updated = CLivePreview::Create((struct CLivePreview **)this + 55);
                  v5 = updated;
                  if ( updated >= 0 )
                  {
                    v32 = (CProjectionBorderManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                        WPF::g_pProcessHeap,
                                                        584LL);
                    cbData = (struct _RTL_CRITICAL_SECTION *)v32;
                    if ( v32 )
                      v33 = CProjectionBorderManager::CProjectionBorderManager(v32);
                    else
                      v33 = 0LL;
                    *((_QWORD *)this + 56) = v33;
                    if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56) )
                    {
                      v5 = -2147024882;
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, -2147024882, 0x1F7u);
                      goto LABEL_123;
                    }
                    v34 = wil::out_param<std::unique_ptr<CMicaEffectCache>>(&Handles, (char *)this + 208);
                    v5 = CMicaEffectCache::Create((struct CMicaEffectCache **)(v34 + 8));
                    wil::details::out_param_t<std::unique_ptr<CMicaEffectCache>>::~out_param_t<std::unique_ptr<CMicaEffectCache>>(&Handles);
                    if ( v5 >= 0 )
                    {
                      updated = CWindowList::Initialize(*((CWindowList **)this + 52));
                      v5 = updated;
                      if ( updated < 0 )
                      {
                        phkResulta = 507;
                        goto LABEL_121;
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
                                   (LPDWORD)this + 146);
                        *((_QWORD *)this + 74) = Thread;
                        if ( Thread )
                        {
                          SetThreadDescription(Thread, L"uDWM Event Thread");
                          Handles = EventW;
                          v47 = (HKEY)*((_QWORD *)this + 74);
                          SetLastError(0);
                          if ( !WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF) )
                          {
                            updated = CDesktopManager::_InitializeWnf(this);
                            v5 = updated;
                            if ( updated >= 0 )
                            {
                              CDesktopManager::ReadProductType(this);
                              *((_BYTE *)this + 24) = 1;
LABEL_126:
                              CloseHandle(EventW);
                              goto LABEL_127;
                            }
                            phkResulta = 546;
                            goto LABEL_121;
                          }
                          LastError = GetLastError();
                          v5 = LastError;
                          if ( LastError > 0 )
                            v5 = (unsigned __int16)LastError | 0x80070000;
                          if ( v5 >= 0 )
                            v5 = -2003304445;
                          phkResulta = 541;
                        }
                        else
                        {
                          v38 = GetLastError();
                          v5 = v38;
                          if ( v38 > 0 )
                            v5 = (unsigned __int16)v38 | 0x80070000;
                          if ( v5 >= 0 )
                            v5 = -2003304445;
                          phkResulta = 524;
                        }
                      }
                      else
                      {
                        v36 = GetLastError();
                        v5 = v36;
                        if ( v36 > 0 )
                          v5 = (unsigned __int16)v36 | 0x80070000;
                        if ( v5 >= 0 )
                          v5 = -2003304445;
                        phkResulta = 515;
                      }
                    }
                    else
                    {
                      phkResulta = 505;
                    }
                    v35 = v5;
LABEL_122:
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, v35, phkResulta);
LABEL_123:
                    CDesktopManager::NotifyRedirectionShutdown(this);
                    cbData = &CDesktopManager::s_csDwmInstance;
                    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
                    DwmRedirectionManagerShutdown();
                    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                    if ( !EventW )
                      goto LABEL_127;
                    goto LABEL_126;
                  }
                  phkResulta = 500;
                }
                else
                {
                  phkResulta = 498;
                }
              }
              else
              {
                phkResulta = 485;
              }
            }
            else
            {
              phkResulta = 474;
            }
          }
          else
          {
            phkResulta = 470;
          }
        }
        else
        {
          phkResulta = 466;
        }
      }
      else
      {
        phkResulta = 457;
      }
    }
    else
    {
      phkResulta = 454;
    }
LABEL_121:
    v35 = updated;
    goto LABEL_122;
  }
  phkResult = 418;
LABEL_19:
  v12 = -2147024882;
  v5 = -2147024882;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A2C4, 1LL, v12, phkResult);
LABEL_127:
  if ( v43 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    v43 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>();
  return (unsigned int)v5;
}
