/*
 * XREFs of Display_xSD @ 0x1C002ACB0
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C002D180 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D3F8 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0005FD0 (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x1C002B3B4 (GetCoordinationType.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  unsigned int i; // edi
  const char *CoordinationType; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 && a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Du,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x6Eu,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
            a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x6Fu,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x70u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
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
            0x71u,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x72u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x73u,
                (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x74u,
                  (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = (const char *)GetCoordinationType(a1[5 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 0x75u, v8, v7, CoordinationType);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x76u,
                      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x77u,
                        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
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
