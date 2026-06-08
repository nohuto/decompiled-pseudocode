/*
 * XREFs of DisplayGenAddr @ 0x1C0025614
 * Callers:
 *     Display_CST @ 0x1C002534C (Display_CST.c)
 *     Display_CPC @ 0x1C00254E4 (Display_CPC.c)
 *     Display_LPI @ 0x1C003C16C (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C003C5B0 (Display_PCT_PTC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002544 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C0008EF4 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C000A2B0 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x1C000A5AC (WPP_RECORDER_SF_si.c)
 *     GetGenAddrType @ 0x1C003CD14 (GetGenAddrType.c)
 */

__int64 __fastcall DisplayGenAddr(unsigned __int8 *a1, const char *a2, PDEVICE_OBJECT a3, __int64 a4)
{
  __int64 result; // rax
  PDEVICE_OBJECT v7; // rcx
  __int64 GenAddrType; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int16 v12; // r9
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( (_BYTE)result != 126 )
  {
    if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_s(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x95u,
                 (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
                 a2);
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a3 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        GenAddrType = GetGenAddrType(*a1, *a1);
        result = WPP_RECORDER_SF_sDs(*(_QWORD *)(v9 + 64), v10, v9, v11, v13, a2, v10, GenAddrType);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v14) = a1[1];
          result = WPP_RECORDER_SF_sD(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x97u,
                     (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
                     a2,
                     v14);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v14) = a1[2];
          result = WPP_RECORDER_SF_sD(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x98u,
                     (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
                     a2,
                     v14);
        }
      }
    }
    if ( *a1 == 10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v7 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_15;
      v12 = 153;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v7 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_15;
      v12 = 154;
    }
    LODWORD(v14) = a1[3];
    result = WPP_RECORDER_SF_sD(
               (__int64)v7->DeviceExtension,
               5u,
               2u,
               v12,
               (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
               a2,
               v14);
LABEL_15:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_si((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)a3, a4, v13, a2);
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_sD(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             2u,
             0x94u,
             (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
             a2,
             *((_DWORD *)a1 + 1));
  return result;
}
