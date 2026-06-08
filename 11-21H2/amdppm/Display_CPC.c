/*
 * XREFs of Display_CPC @ 0x1C00299E0
 * Callers:
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C0029724 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_CPC(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char **v5; // rbx
  __int64 v6; // rbp
  unsigned __int8 *v7; // rsi
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Eu,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x8Fu,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x90u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = a1[1];
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x91u,
              (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
              v9);
          }
        }
      }
    }
    v5 = (const char **)&off_1C000C238;
    v6 = 15LL;
    do
    {
      v7 = (unsigned __int8 *)a1 + *((unsigned int *)v5 - 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
          *v5);
      result = DisplayGenAddr(v7, "  ", a3, a4);
      v5 += 3;
      --v6;
    }
    while ( v6 );
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x93u,
                 (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    }
  }
  return result;
}
