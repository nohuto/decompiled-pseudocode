/*
 * XREFs of PepPerfCheckComplete @ 0x1C00021F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 */

void __fastcall PepPerfCheckComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  if ( !PepSkipPerfCheckNotification )
  {
    v4 = a2;
    v2 = PoFxProcessorNotification(a1, 33LL, &v4);
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          2,
          19,
          (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
          v2);
      }
      PepSkipPerfCheckNotification = 1;
    }
  }
}
