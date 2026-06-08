/*
 * XREFs of DisplayGenAddr @ 0x1C002A4D4
 * Callers:
 *     Display_CPC @ 0x1C002A790 (Display_CPC.c)
 *     Display_CST @ 0x1C002AC68 (Display_CST.c)
 *     Display_LPI @ 0x1C002AF04 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C002B348 (Display_PCT_PTC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00054FC (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C0006AA4 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C0006C30 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x1C0006F2C (WPP_RECORDER_SF_si.c)
 */

__int64 __fastcall DisplayGenAddr(unsigned __int8 *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // rax
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( (_BYTE)result == 126 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_sD(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x9Au,
                 (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                 a2,
                 *((_DWORD *)a1 + 1));
    }
    return result;
  }
  if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x9Bu,
               (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
               a2);
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      if ( *a1 )
      {
        v7 = result - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 6;
                if ( v11 )
                {
                  if ( v11 == 117 )
                    v12 = "FFH";
                  else
                    v12 = "Unknown";
                }
                else
                {
                  v12 = "PCC";
                }
              }
              else
              {
                v12 = "SM Bus";
              }
            }
            else
            {
              v12 = "EC Space";
            }
          }
          else
          {
            v12 = "Pci Config";
          }
        }
        else
        {
          v12 = "I/O";
        }
      }
      else
      {
        v12 = "Memory";
      }
      result = WPP_RECORDER_SF_sDs(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 *a1,
                 a3,
                 a4,
                 v15,
                 a2,
                 *a1,
                 (__int64)v12);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = a1[1];
        result = WPP_RECORDER_SF_sD(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x9Du,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                   a2,
                   v16);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = a1[2];
        result = WPP_RECORDER_SF_sD(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x9Eu,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                   a2,
                   v16);
      }
    }
  }
  if ( *a1 == 10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_42;
    v14 = 159;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_42;
    v14 = 160;
  }
  LODWORD(v16) = a1[3];
  result = WPP_RECORDER_SF_sD(
             (__int64)v13->DeviceExtension,
             5u,
             2u,
             v14,
             (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
             a2,
             v16);
LABEL_42:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_si((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, a4, v15, a2);
  return result;
}
