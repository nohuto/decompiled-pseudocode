/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00042B8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0003D68 (rimProcessInjectedDeviceBuffers.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char v5; // al
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // r9

  v3 = *(_DWORD *)(a2 + 184);
  v4 = a2;
  if ( (v3 & 0x2000) == 0 && (v3 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(_BYTE *)(v4 + 48);
  if ( v5 )
  {
    if ( v5 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    result = *(unsigned int *)(v4 + 692);
    if ( (unsigned int)result > 0x10 )
    {
      LODWORD(result) = 16;
    }
    else if ( !(_DWORD)result )
    {
      return result;
    }
    v7 = 16 - *(_DWORD *)(v4 + 688);
    if ( v7 >= (unsigned int)result )
      v7 = result;
    if ( v7 )
    {
      v8 = 0;
      do
      {
        ++v8;
        v9 = 3LL * ((*(_BYTE *)(v4 + 696) - *(_BYTE *)(v4 + 692) + 1) & 0xF);
        v10 = 3LL * *(unsigned int *)(v4 + 688);
        *(_QWORD *)(v4 + 4 * v10 + 496) = *(_QWORD *)(v4
                                                    + 12LL * ((*(_BYTE *)(v4 + 696) - *(_BYTE *)(v4 + 692) + 1) & 0xF)
                                                    + 700);
        *(_DWORD *)(v4 + 4 * v10 + 504) = *(_DWORD *)(v4 + 4 * v9 + 708);
        LODWORD(v10) = *(_DWORD *)(v4 + 688);
        --*(_DWORD *)(v4 + 692);
        v11 = v10 + 1;
        *(_DWORD *)(v4 + 688) = v11;
      }
      while ( v8 < v7 );
      *(_DWORD *)(v4 + 256) = 0;
      result = v11;
      v12 = 12LL * v11;
LABEL_13:
      *(_QWORD *)(v4 + 264) = v12;
      return result;
    }
    v17 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 61;
      return WPP_RECORDER_AND_TRACE_SF_q(
               v17->AttachedDevice,
               a2,
               v7,
               (_DWORD)gRimLog,
               4,
               1,
               v18,
               (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
               v4);
    }
  }
  else
  {
    result = *(unsigned int *)(v4 + 916);
    if ( (unsigned int)result <= 0x10 )
    {
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v7 = 16 - *(_DWORD *)(v4 + 912);
    if ( v7 >= (unsigned int)result )
      v7 = result;
    if ( v7 )
    {
      v13 = 0;
      do
      {
        ++v13;
        v14 = 3LL * ((*(_BYTE *)(v4 + 920) - *(_BYTE *)(v4 + 916) + 1) & 0xF);
        v15 = 3LL * *(unsigned int *)(v4 + 912);
        *(_OWORD *)(v4 + 8 * v15 + 468) = *(_OWORD *)(v4
                                                    + 24LL * ((*(_BYTE *)(v4 + 920) - *(_BYTE *)(v4 + 916) + 1) & 0xF)
                                                    + 924);
        *(_QWORD *)(v4 + 8 * v15 + 484) = *(_QWORD *)(v4 + 8 * v14 + 940);
        LODWORD(v15) = *(_DWORD *)(v4 + 912);
        --*(_DWORD *)(v4 + 916);
        v16 = v15 + 1;
        *(_DWORD *)(v4 + 912) = v16;
      }
      while ( v13 < v7 );
      *(_DWORD *)(v4 + 256) = 0;
      result = v16;
      v12 = 24LL * v16;
      goto LABEL_13;
    }
    v17 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 60;
      return WPP_RECORDER_AND_TRACE_SF_q(
               v17->AttachedDevice,
               a2,
               v7,
               (_DWORD)gRimLog,
               4,
               1,
               v18,
               (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
               v4);
    }
  }
  return result;
}
