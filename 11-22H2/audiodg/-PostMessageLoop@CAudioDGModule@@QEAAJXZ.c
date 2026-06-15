/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400516E0
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052094 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     WPP_SF_ @ 0x1400528A0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1400528CC (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // ebx
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  _QWORD *v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  v2 = qword_1400CF400;
  v3 = 0;
  v4 = qword_1400CF408;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_1400CF408;
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
    if ( RpcServerUnregisterIfEx(&unk_1400ABBB0, 0LL, 1)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
    }
    fRpcStarted = 0;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&qword_1400CF798);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v8 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v8, 4LL, 0LL);
  CoUninitialize();
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
    v6 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x40000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
      WPP_SF_d(v6[2], 19LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids, (unsigned int)v3);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 0x209u, v3);
  }
  return (unsigned int)v3;
}
