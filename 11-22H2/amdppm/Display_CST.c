/*
 * XREFs of Display_CST @ 0x1C002AC68
 * Callers:
 *     InitAcpiCStates @ 0x1C0036BC0 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     DisplayGenAddr @ 0x1C002A4D4 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_CST(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  unsigned __int8 *v7; // rsi
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                5u,
                                2u,
                                0x7Eu,
                                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x7Fu,
                                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = *a1;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x80u,
                                    (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                                    v9);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x81u,
                                    (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      v7 = (unsigned __int8 *)&a1[5 * i];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v8) = i;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x82u,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
            v8);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v8) = v7[16];
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x83u,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
              v8);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v8) = *((unsigned __int16 *)v7 + 9);
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x84u,
                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                v8);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v8) = *((_DWORD *)v7 + 5);
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x85u,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                  v8);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x86u,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
              }
            }
          }
        }
      }
      result = (_UNKNOWN **)DisplayGenAddr(v7 + 4, "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x87u,
                                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      }
    }
  }
  return result;
}
