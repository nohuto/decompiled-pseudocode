/*
 * XREFs of UsbhLanguageSupported @ 0x1C0050C20
 * Callers:
 *     UsbhGetProductIdString @ 0x1C00507E0 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // esi
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v3 = a3;
  v4 = PdoExt(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 273);
  if ( v5 )
  {
    if ( v4[545] )
    {
      while ( *v5 )
      {
        if ( *v5 == (_WORD)v3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x14u,
              (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
              v3);
          }
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x15u,
        (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids);
LABEL_15:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x16u,
          (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
          v3);
    }
  }
  return 0;
}
