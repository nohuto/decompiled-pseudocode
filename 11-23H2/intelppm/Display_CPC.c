/*
 * XREFs of Display_CPC @ 0x1C002C390
 * Callers:
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000316C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009F84 (WPP_RECORDER_SF_d.c)
 *     DisplayGenAddr @ 0x1C002C4C0 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_CPC(_DWORD *a1)
{
  const char **v2; // rbx
  __int64 v3; // rbp
  char *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x94u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x95u,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x96u,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v6) = a1[1];
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x97u,
              (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
              v6);
          }
        }
      }
    }
    v2 = (const char **)&off_1C0010468;
    v3 = 15LL;
    do
    {
      v4 = (char *)a1 + *((unsigned int *)v2 - 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x98u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
          *v2);
      result = DisplayGenAddr(v4, "  ");
      v2 += 3;
      --v3;
    }
    while ( v3 );
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x99u,
                 (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    }
  }
  return result;
}
