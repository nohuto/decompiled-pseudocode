/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18005783C (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x1800585A0 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180058608 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x18005868C (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x180058EE0 (-MME_ServiceStart@@YAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800E9CA0 (WPP_SF_D.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800F1030 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A6C (--1CPowerReferenceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  LSTATUS ValueW; // eax
  int v5; // ecx
  CPowerReferenceManager *v6; // rax
  CPowerReferenceManager *v7; // rbx
  CPowerReferenceManager *v8; // rax
  CPowerReferenceManager **v9; // rax
  CPowerReferenceManager *v10; // rcx
  CPowerReferenceManager *v11; // rbx
  CPowerReferenceManager *v12; // rbx
  HRESULT Instance; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 *v20; // rax
  _DWORD *v21; // rdi
  CPowerReferenceManager *ppv; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+70h] [rbp-90h] BYREF
  char v29[32]; // [rsp+C0h] [rbp-40h] BYREF
  CPowerReferenceManager **p_ppv; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  unsigned int *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]

  memset_0(&spc, 0, sizeof(spc));
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"UseNewStreamManagementCodePath",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v5 = g_UseNewStreamManagementCodePath;
  if ( !ValueW )
    v5 = pvData;
  g_UseNewStreamManagementCodePath = v5;
  if ( !a2 )
  {
    v6 = (CPowerReferenceManager *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    ppv = v6;
    if ( v6 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v6);
      *(_QWORD *)v7 = &CAudioServiceModule::`vftable';
      *((_BYTE *)v7 + 96) = 0;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 11) = v7;
    if ( !v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v8 = (CPowerReferenceManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppv = v8;
    if ( v8 )
    {
      g_ADGProcess = (LPCRITICAL_SECTION)CAudioDGProcess::CAudioDGProcess(
                                           v8,
                                           (struct IMonitorDGTermination *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
      if ( g_ADGProcess )
      {
        v9 = (CPowerReferenceManager **)std::make_unique<CPowerReferenceManager,,0>(&ppv);
        if ( &g_powerReferenceManager != v9 )
        {
          v10 = *v9;
          *v9 = 0LL;
          v11 = g_powerReferenceManager;
          g_powerReferenceManager = v10;
          if ( v11 )
          {
            CPowerReferenceManager::~CPowerReferenceManager(v11);
            operator delete(v11, 0x300uLL);
          }
        }
        v12 = ppv;
        if ( ppv )
        {
          CPowerReferenceManager::~CPowerReferenceManager(ppv);
          operator delete(v12, 0x300uLL);
        }
        goto LABEL_15;
      }
    }
    else
    {
      g_ADGProcess = 0LL;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
    }
  }
LABEL_15:
  ppv = 0LL;
  Instance = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, (LPVOID *)&ppv);
  v14 = Instance;
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
        (unsigned int)Instance);
    }
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(CPowerReferenceManager *, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
  if ( !v14 )
  {
    v14 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v14 )
    {
      v16 = MME_ServiceStart();
      v19 = v16;
      if ( v16 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        McTemplateU0zq_EtwEventWriteTransfer(v18, v17, L"MME", (unsigned int)v16);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v19 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 594, v19);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync )
      {
        EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync;
        LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
      }
      v14 = KsNotifications_ServiceStart();
    }
  }
  v20 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v15,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v21 = (_DWORD *)v20[1];
  if ( *v21 > 4u && tlgKeywordOn(v20[1], 128LL) )
  {
    v26 = v14;
    LODWORD(ppv) = GetCurrentProcessId();
    v33 = &v26;
    v34 = 4;
    v35 = 0;
    p_ppv = &ppv;
    v31 = 4;
    v32 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v21, byte_180191C77, 0LL, 0LL, 4, (__int64)v29);
  }
  g_StreamVolumeChangeAsTelemetryCounter = 10;
  return v14;
}
