/*
 * XREFs of Display_CSD @ 0x1C002B208
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0035DE0 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000697C (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x1C002CA14 (GetCoordinationType.c)
 */

void __fastcall Display_CSD(unsigned int *a1)
{
  unsigned int i; // edi
  const char *CoordinationType; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x88u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x89u,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x8Au,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x8Bu,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          }
        }
      }
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
            0x8Cu,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x8Du,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x8Eu,
                (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x8Fu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = (const char *)GetCoordinationType(a1[6 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v4 + 64), v5, v4, 0x90u, v6, v5, CoordinationType);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x91u,
                      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x92u,
                        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          5u,
                          2u,
                          0x93u,
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
