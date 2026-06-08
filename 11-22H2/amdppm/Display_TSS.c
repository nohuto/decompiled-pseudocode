/*
 * XREFs of Display_TSS @ 0x1C002B7AC
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000648C (WPP_RECORDER_SF_Ds.c)
 */

int __fastcall Display_TSS(unsigned int *a1)
{
  int result; // eax
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-78h]
  char DstBuf[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+50h] [rbp-48h]
  char v11; // [rsp+60h] [rbp-38h]

  if ( a1 )
  {
    result = 0;
    *(_OWORD *)DstBuf = 0LL;
    v11 = 0;
    v10 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x6Au,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x6Bu,
                   (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x6Cu,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x6Du,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x6Eu,
                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x6Fu,
                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
            }
          }
        }
      }
      _itoa_s(a1[5 * i + 4], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, 0x70u, v8, a1[5 * i + 4], DstBuf);
      result = _itoa_s(a1[5 * i + 5], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = WPP_RECORDER_SF_Ds(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     v6,
                     v7,
                     0x71u,
                     v8,
                     a1[5 * i + 5],
                     DstBuf);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x72u,
                       (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        }
      }
    }
  }
  return result;
}
