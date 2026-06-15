/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210
 * Callers:
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x18002B028 (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800CF114 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CF240 (s_adGetDeviceGraphWnfStateName.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     AudioServerGetAudioStreamHandle @ 0x180120A70 (AudioServerGetAudioStreamHandle.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(struct _RTL_CRITICAL_SECTION *this)
{
  CAudioThreadPool *v2; // rdi
  HANDLE OwningThread; // rdx

  v2 = ThreadPool;
  EnterCriticalSection(this);
  OwningThread = this[3].OwningThread;
  if ( OwningThread )
  {
    (*(void (__fastcall **)(CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      OwningThread,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v2 + 32LL))(v2, this[3].OwningThread, 1LL);
  }
  LeaveCriticalSection(this);
}
