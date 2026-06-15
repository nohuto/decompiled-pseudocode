/*
 * XREFs of s_midiOpenPort @ 0x1801102E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x180110074 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x1801481D0 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 */

__int64 __fastcall s_midiOpenPort(RPC_BINDING_HANDLE BindingHandle, unsigned __int16 *a2, HANDLE *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned __int16 *v7; // r14
  __int64 *v10; // rax
  signed int v11; // edi
  int KsMidiDeviceInfo; // eax
  unsigned int v13; // edx
  int v14; // eax
  char *v15; // r15
  HRESULT v16; // eax
  RPC_STATUS v17; // eax
  signed int LastError; // eax
  void *v19; // rbx
  HANDLE CurrentProcess; // rax
  unsigned __int16 *v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FilterHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  void *ConnectionHandle; // [rsp+58h] [rbp-A8h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+ACh] [rbp-54h]
  int v29; // [rsp+B4h] [rbp-4Ch]
  GUID v30; // [rsp+B8h] [rbp-48h]
  GUID v31; // [rsp+C8h] [rbp-38h]
  GUID v32; // [rsp+D8h] [rbp-28h]
  struct _TP_TIMER *pv[14]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+180h] [rbp+80h] BYREF
  unsigned int Pid; // [rsp+188h] [rbp+88h] BYREF

  v3 = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = -1LL;
  v7 = 0LL;
  v22 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  TargetHandle = (HANDLE)-1LL;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)BindingHandle,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, (struct _TP_TIMER *)v10[1], v5, (struct _TP_TIMER *)L"s_midiOpenPort", v3);
  if ( a3 )
  {
    KsMidiDeviceInfo = GetKsMidiDeviceInfo(a2, &v22, &v34);
    v7 = v22;
    v11 = KsMidiDeviceInfo;
    if ( KsMidiDeviceInfo >= 0 )
    {
      v14 = FilterInstantiate2(v22, v13, &FilterHandle);
      v15 = (char *)FilterHandle;
      v11 = v14;
      if ( v14 >= 0 )
      {
        *(&Connect.PinId + 1) = 0;
        Connect.Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        v28 = 0LL;
        v29 = 0;
        Connect.Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        Connect.PinId = v34;
        *(&Connect.Interface.Alignment + 2) = 0LL;
        *(&Connect.Medium.Alignment + 2) = 0LL;
        v30 = GUID_e725d360_62cc_11cf_a5d6_28db04c10000;
        Connect.PinToHandle = 0LL;
        Connect.Priority.PriorityClass = 0x40000000;
        Connect.Priority.PrioritySubClass = 0x40000000;
        v32 = GUID_0f6417d6_c318_11d0_a43f_00a0c9223196;
        v27 = 64;
        v31 = GUID_1d262760_e957_11cf_a5d6_28db04c10000;
        v16 = KsCreatePin2(FilterHandle, &Connect, 0xC0000000, &ConnectionHandle);
        v11 = v16;
        if ( v16 > 0 )
          v11 = (unsigned __int16)v16 | 0x80070000;
        if ( v11 >= 0 )
        {
          v17 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v17 )
          {
            if ( v17 > 0 )
              v11 = (unsigned __int16)v17 | 0x80070000;
            else
              v11 = v17;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v6 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v6
              && (v19 = ConnectionHandle,
                  CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, v19, (HANDLE)v6, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v11 = LastError;
              if ( LastError > 0 )
                v11 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v15);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v6);
    }
  }
  else
  {
    v11 = -2147467261;
  }
  CoTaskMemFree(v7);
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("s_midiOpenPort", 216, v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v11;
}
