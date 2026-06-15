/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x180004CA0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180004AF0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180019B58 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x180126B28 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x180128A44 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  __int64 v2; // rcx
  LARGE_INTEGER v3; // rax
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // [rsp+70h] [rbp+7h] BYREF
  int v9; // [rsp+74h] [rbp+Bh] BYREF
  int v10; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+17h] BYREF
  __int64 v12; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+90h] [rbp+27h] BYREF
  __int64 v14; // [rsp+98h] [rbp+2Fh] BYREF
  int v15; // [rsp+A0h] [rbp+37h]
  VolumeHardwareLogger *v16; // [rsp+D0h] [rbp+67h] BYREF
  int v17; // [rsp+D8h] [rbp+6Fh] BYREF
  int v18; // [rsp+E0h] [rbp+77h] BYREF
  int v19; // [rsp+E8h] [rbp+7Fh] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v16 = this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_3;
  VolumeHardwareLogger::CurrentVolumeLevel(this, &v14);
  if ( v15 == *((_DWORD *)this + 21) )
    goto LABEL_3;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v3 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v3;
    *((_QWORD *)this + 14) = v14;
    v4 = v15;
    *((_DWORD *)this + 30) = v15;
  }
  else
  {
    v4 = v15;
    if ( v15 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v14;
      *((_DWORD *)this + 30) = v4;
    }
    if ( v4 <= *((_DWORD *)this + 33) )
      goto LABEL_10;
  }
  *(_QWORD *)((char *)this + 124) = v14;
  *((_DWORD *)this + 33) = v4;
LABEL_10:
  v5 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v2,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    LODWORD(v16) = v15;
    v17 = HIDWORD(v14);
    v18 = v14;
    v19 = *((_DWORD *)this + 20);
    v8 = *((_DWORD *)this + 19);
    v9 = *((_DWORD *)this + 18);
    v7 = *((_QWORD *)this + 8);
    v10 = *(_DWORD *)(v7 + 72);
    v12 = *(_QWORD *)(v7 + 64);
    v13 = *(_QWORD *)(v7 + 56);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v5,
      (unsigned int)&unk_180194448,
      (_DWORD)v5,
      v6,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  *((_DWORD *)this + 21) = v15;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_3:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
