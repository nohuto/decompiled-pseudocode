/*
 * XREFs of Display_LPI @ 0x1C003C16C
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0028464 (InitAcpiLpiStates.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C003AD8C (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0007EA0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008580 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DS @ 0x1C0009CB8 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_i @ 0x1C000A204 (WPP_RECORDER_SF_i.c)
 *     DisplayGenAddr @ 0x1C0025614 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_LPI(__int64 a1, const wchar_t *a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // esi
  __int64 v8; // rdi
  struct _DEVICE_OBJECT *v9; // r8
  __int64 v10; // r9
  struct _DEVICE_OBJECT *v11; // r8
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
                                0x9Cu,
                                (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x9Du,
                                  (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
                                  a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x9Eu,
                                    (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      5u,
                                      2u,
                                      0x9Fu,
                                      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        (__int64)a2,
                                        (__int64)a3,
                                        0xA0u,
                                        v13);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        5u,
                                        2u,
                                        0xA1u,
                                        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
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
            (__int64)a3,
            a4,
            v13,
            i,
            *(const wchar_t **)(v8 + a1 + 96));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xA3u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xA4u,
                (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xA5u,
                  (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xA6u,
                    (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0xA7u,
                      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA8u,
                        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA9u,
                        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
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
          0xAAu,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 60), "    ", v9, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 72), "    ", v11, v12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xACu,
                                  (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      }
    }
  }
  return result;
}
