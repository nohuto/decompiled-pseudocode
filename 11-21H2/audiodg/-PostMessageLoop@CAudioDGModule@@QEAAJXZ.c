/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140051130
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14002AF68 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // ebx
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  v2 = qword_1400C1330;
  v3 = 0;
  v4 = qword_1400C1338;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_1400C1338;
      }
    }
    v2 += 8LL;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(&g_DeviceGraphWnfStateName);
    g_DeviceGraphWnfStateName = 0LL;
    g_DeviceGraphWnfStateNameCreated = 0;
  }
  if ( fRpcStarted )
  {
    v6 = RpcServerUnregisterIfEx(&unk_140098060, 0LL, 1);
    if ( v6
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids, v6);
    }
    fRpcStarted = 0;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&qword_1400C1620);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v9 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v9, 4LL, 0LL);
  CoUninitialize();
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    v7 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x40000) != 0 && *((_BYTE *)v7 + 25) >= 2u )
      WPP_SF_d(v7[2], 19LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids, (unsigned int)v3);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 0x1FFu, v3);
  }
  return (unsigned int)v3;
}
