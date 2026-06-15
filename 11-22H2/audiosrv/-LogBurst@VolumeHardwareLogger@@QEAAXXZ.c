/*
 * XREFs of ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1801280B0
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180128770 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180129920 (-TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180019B58 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$07@@4444444444444@Z @ 0x180126C7C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U2@U2@U2.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x180128A44 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::LogBurst(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *LockSemaphore; // rcx
  int SpinCount_high; // [rsp+C0h] [rbp-80h] BYREF
  int SpinCount; // [rsp+C4h] [rbp-7Ch] BYREF
  int v11; // [rsp+C8h] [rbp-78h] BYREF
  LONG RecursionCount; // [rsp+CCh] [rbp-74h] BYREF
  LONG v13; // [rsp+D0h] [rbp-70h] BYREF
  int v14; // [rsp+D4h] [rbp-6Ch] BYREF
  int v15; // [rsp+D8h] [rbp-68h] BYREF
  int v16; // [rsp+DCh] [rbp-64h] BYREF
  int OwningThread_high; // [rsp+E0h] [rbp-60h] BYREF
  int v18; // [rsp+E4h] [rbp-5Ch] BYREF
  int v19; // [rsp+E8h] [rbp-58h] BYREF
  int v20; // [rsp+ECh] [rbp-54h] BYREF
  double v21; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-48h] BYREF
  int v23; // [rsp+100h] [rbp-40h]
  LARGE_INTEGER PerformanceCount; // [rsp+108h] [rbp-38h] BYREF
  double v25; // [rsp+110h] [rbp-30h] BYREF
  const WCHAR *v26; // [rsp+118h] [rbp-28h] BYREF
  const WCHAR *v27; // [rsp+120h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+150h] [rbp+10h] BYREF
  LONG LockCount; // [rsp+158h] [rbp+18h] BYREF
  int DebugInfo_high; // [rsp+160h] [rbp+20h] BYREF
  int v31; // [rsp+168h] [rbp+28h] BYREF

  EnterCriticalSection(this);
  v28 = this;
  if ( this[1].LockSemaphore && (__int64)this[1].DebugInfo > 0 && SHIDWORD(this[2].OwningThread) > 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = this[3].OwningThread;
    DebugInfo = (double)(int)this[1].DebugInfo;
    if ( LOBYTE(this[1].OwningThread) || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v21 = (double)((int)OwningThread - LODWORD(this[2].LockSemaphore)) / DebugInfo;
      VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v22);
      v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             v4,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v5[1] > 4u && tlgKeywordOn(v5[1], 0x400000000000LL) )
      {
        LODWORD(v28) = this[3].RecursionCount;
        LockCount = this[3].LockCount;
        DebugInfo_high = HIDWORD(this[3].DebugInfo);
        v31 = (int)this[3].DebugInfo;
        SpinCount_high = HIDWORD(this[2].SpinCount);
        SpinCount = this[2].SpinCount;
        v11 = (int)this[2].OwningThread;
        RecursionCount = this[2].RecursionCount;
        v13 = this[2].LockCount;
        v14 = v23;
        v15 = HIDWORD(v22);
        v16 = v22;
        OwningThread_high = HIDWORD(this[2].OwningThread);
        v25 = v21;
        v18 = (int)this[2].DebugInfo;
        v19 = HIDWORD(this[1].SpinCount);
        v20 = this[1].SpinCount;
        LockSemaphore = this[1].LockSemaphore;
        LODWORD(v21) = LockSemaphore[18];
        v26 = (const WCHAR *)*((_QWORD *)LockSemaphore + 8);
        v27 = (const WCHAR *)*((_QWORD *)LockSemaphore + 7);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          byte_1801944DB,
          v6,
          v7,
          &v27,
          &v26,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v25,
          (__int64)&OwningThread_high,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&RecursionCount,
          (__int64)&v11,
          (__int64)&SpinCount,
          (__int64)&SpinCount_high,
          (__int64)&v31,
          (__int64)&DebugInfo_high,
          (__int64)&LockCount,
          (__int64)&v28);
      }
      HIDWORD(this[2].OwningThread) = 0;
      *(_QWORD *)&this[2].LockCount = v22;
      LODWORD(this[2].OwningThread) = v23;
    }
    else
    {
      VolumeHardwareLogger::ScheduleTimer((VolumeHardwareLogger *)this);
    }
  }
  LeaveCriticalSection(this);
}
