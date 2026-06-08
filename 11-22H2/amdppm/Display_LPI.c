/*
 * XREFs of Display_LPI @ 0x1C002AF04
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1C0028CE8 (AcpiGetCoordinatedLpiStates.c)
 *     InitAcpiLpiStates @ 0x1C003BD4C (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0005398 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DS @ 0x1C0006334 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_i @ 0x1C00069F8 (WPP_RECORDER_SF_i.c)
 *     DisplayGenAddr @ 0x1C002A4D4 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_LPI(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // esi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

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
                                0xA2u,
                                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xA3u,
                                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                                  a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0xA4u,
                                    (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      5u,
                                      2u,
                                      0xA5u,
                                      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        (__int64)a2,
                                        a3,
                                        0xA6u,
                                        v13);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        5u,
                                        2u,
                                        0xA7u,
                                        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)a2,
            a3,
            a4,
            v13,
            i,
            *(const wchar_t **)(v8 + a1 + 96));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xA9u,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xAAu,
                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xABu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xACu,
                    (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0xADu,
                      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xAEu,
                        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xAFu,
                        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 48), "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xB0u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 60), "    ", v9, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xB1u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 72), "    ", v11, v12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xB2u,
                                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      }
    }
  }
  return result;
}
