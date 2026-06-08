/*
 * XREFs of Display_PSS @ 0x1C002A704
 * Callers:
 *     ValidatePssCore @ 0x1C002F53C (ValidatePssCore.c)
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00063C4 (WPP_RECORDER_SF_i.c)
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
                   0x53u,
                   (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x54u,
                   (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
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
                     0x55u,
                     (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
                       0x56u,
                       (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
                         0x57u,
                         (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
                           0x58u,
                           (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
                             0x59u,
                             (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
                             v7);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v7 = *(_QWORD *)&a1[12 * i + 6];
                    result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Au, v6);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = *(_QWORD *)&a1[12 * i + 8];
                      result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Bu, v6);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v7 = *(_QWORD *)&a1[12 * i + 10];
                        result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Cu, v6);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v7 = *(_QWORD *)&a1[12 * i + 12];
                          result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Du, v6);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            result = WPP_RECORDER_SF_(
                                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                       5u,
                                       2u,
                                       0x5Eu,
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
  }
  return result;
}
