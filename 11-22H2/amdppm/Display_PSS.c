/*
 * XREFs of Display_PSS @ 0x1C002B4B4
 * Callers:
 *     ValidatePssCore @ 0x1C0030360 (ValidatePssCore.c)
 *     InitAcpiPerfStates @ 0x1C0035F04 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00069F8 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x59u,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x5Au,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v7) = i;
          result = WPP_RECORDER_SF_d(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x5Bu,
                     (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                     v7);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v7) = a1[12 * i + 2];
            result = WPP_RECORDER_SF_d(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x5Cu,
                       (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                       v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v7) = a1[12 * i + 3];
              result = WPP_RECORDER_SF_d(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         5u,
                         2u,
                         0x5Du,
                         (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                         v7);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v7) = a1[12 * i + 4];
                result = WPP_RECORDER_SF_d(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x5Eu,
                           (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                           v7);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v7) = a1[12 * i + 5];
                  result = WPP_RECORDER_SF_d(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             5u,
                             2u,
                             0x5Fu,
                             (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                             v7);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v7 = *(_QWORD *)&a1[12 * i + 6];
                    result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x60u, v6);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = *(_QWORD *)&a1[12 * i + 8];
                      result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x61u, v6);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v7 = *(_QWORD *)&a1[12 * i + 10];
                        result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x62u, v6);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v7 = *(_QWORD *)&a1[12 * i + 12];
                          result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x63u, v6);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            result = WPP_RECORDER_SF_(
                                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                       5u,
                                       2u,
                                       0x64u,
                                       (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
