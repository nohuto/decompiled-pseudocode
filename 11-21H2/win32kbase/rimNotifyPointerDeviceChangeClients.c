/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C01997B0
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C0199948 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetPostPointerEventMessage @ 0x1C020EE2C (ApiSetPostPointerEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rbp
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int result; // eax

  v4 = 0;
  v6 = a3;
  v7 = a2;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3);
  v9 = v6[26];
  if ( a1[498] != v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v4 = 32;
          else
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        }
        else
        {
          v4 = 16;
        }
      }
      else
      {
        v4 = 8;
      }
    }
    else
    {
      v4 = 4;
    }
  }
  v13 = v6[27];
  if ( a1[499] != v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v4 |= 0x800u;
        }
        else
        {
          LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              (_DWORD)a3,
              (_DWORD)gRimLog,
              3,
              1,
              10,
              (__int64)&WPP_887cd155f3483272104c7a04c9c6159b_Traceguids);
          }
        }
      }
      else
      {
        v4 |= 0x40u;
      }
    }
    else
    {
      v4 |= 0x80u;
    }
  }
  if ( a1[501] != v6[29] || a1[502] != v6[30] )
    v4 |= 0x400u;
  if ( a1[503] != v6[31] || a1[504] != v6[32] )
    v4 |= 0x200u;
  result = v4 | 0x100;
  if ( !a4 )
    result = v4;
  if ( result )
    return ApiSetPostPointerEventMessage(v7, a2, result);
  return result;
}
