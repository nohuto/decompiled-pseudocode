/*
 * XREFs of Display_CSD @ 0x1C003BE5C
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C00290B8 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0009E10 (WPP_RECORDER_SF_Ds.c)
 *     GetCoordinationType @ 0x1C003CCC8 (GetCoordinationType.c)
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
          0x82u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x83u,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x84u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x85u,
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
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x86u,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x87u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x88u,
                (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x89u,
                  (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = (const char *)GetCoordinationType(a1[6 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v4 + 64), v5, v4, 0x8Au, v6, v5, CoordinationType);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x8Bu,
                      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_D(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x8Cu,
                        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          5u,
                          2u,
                          0x8Du,
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
}
