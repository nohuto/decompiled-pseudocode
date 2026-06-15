/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180056E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18004D740 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x180056AB4 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x18005717C (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x180057250 (-MME_ServiceStart@@YAJXZ.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x1800579A4 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800C60FC (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  CPowerReferenceManager *v4; // rax
  CPowerReferenceManager *v5; // rbx
  CPowerReferenceManager *v6; // rax
  CPowerReferenceManager **v7; // rax
  CPowerReferenceManager *v8; // rcx
  CPowerReferenceManager *v9; // rbx
  CPowerReferenceManager *v10; // rbx
  HRESULT Instance; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdi
  CPowerReferenceManager *ppv; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-91h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-89h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+60h] [rbp-69h] BYREF
  char v24[32]; // [rsp+B0h] [rbp-19h] BYREF
  CPowerReferenceManager **p_ppv; // [rsp+D0h] [rbp+7h]
  int v26; // [rsp+D8h] [rbp+Fh]
  int v27; // [rsp+DCh] [rbp+13h]
  unsigned int *v28; // [rsp+E0h] [rbp+17h]
  int v29; // [rsp+E8h] [rbp+1Fh]
  int v30; // [rsp+ECh] [rbp+23h]

  memset_0(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = (CPowerReferenceManager *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      *((_BYTE *)v5 + 96) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (CPowerReferenceManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppv = v6;
    if ( v6 )
    {
      g_ADGProcess = (LPCRITICAL_SECTION)CAudioDGProcess::CAudioDGProcess(
                                           v6,
                                           (struct IMonitorDGTermination *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
      if ( g_ADGProcess )
      {
        v7 = std::make_unique<CPowerReferenceManager,,0>(&ppv);
        if ( &g_powerReferenceManager != v7 )
        {
          v8 = *v7;
          *v7 = 0LL;
          v9 = g_powerReferenceManager;
          g_powerReferenceManager = v8;
          if ( v9 )
          {
            CPowerReferenceManager::~CPowerReferenceManager(v9);
            operator delete(v9, 0x2F8uLL);
          }
        }
        v10 = ppv;
        if ( ppv )
        {
          CPowerReferenceManager::~CPowerReferenceManager(ppv);
          operator delete(v10, 0x2F8uLL);
        }
        goto LABEL_13;
      }
    }
    else
    {
      g_ADGProcess = 0LL;
    }
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
    }
  }
LABEL_13:
  ppv = 0LL;
  Instance = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, (LPVOID *)&ppv);
  v12 = Instance;
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids,
        (unsigned int)Instance);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(CPowerReferenceManager *, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  if ( !v12 )
  {
    v12 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v12 )
    {
      v14 = MME_ServiceStart();
      v17 = v14;
      if ( v14 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        McTemplateU0zq_EtwEventWriteTransfer(v16, v15, L"MME", (unsigned int)v14);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v17 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 580, v17);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync )
      {
        EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync;
        LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
      }
      v12 = KsNotifications_ServiceStart();
    }
  }
  v18 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v13,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v18 > 4u && *(char *)(v18 + 16) < 0 && (*(_QWORD *)(v18 + 24) & 0x80LL) == *(_QWORD *)(v18 + 24) )
  {
    v21 = v12;
    LODWORD(ppv) = GetCurrentProcessId();
    v28 = &v21;
    v29 = 4;
    v30 = 0;
    p_ppv = &ppv;
    v26 = 4;
    v27 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer(v18, byte_1801881AE, 0LL, 0LL, 4, (__int64)v24);
  }
  return v12;
}
