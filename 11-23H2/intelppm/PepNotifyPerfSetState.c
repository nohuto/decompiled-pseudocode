/*
 * XREFs of PepNotifyPerfSetState @ 0x1C000E200
 * Callers:
 *     PepPerfStateControlHandler @ 0x1C000E3D0 (PepPerfStateControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyPerfSetState(__int64 a1, char a2, char a3, char a4, char a5)
{
  int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  char v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+49h] [rbp+11h]
  char v10; // [rsp+4Ah] [rbp+12h]
  char v11; // [rsp+4Bh] [rbp+13h]

  v8 = a3;
  v10 = a2;
  v11 = a5;
  v9 = a4;
  v5 = PoFxProcessorNotification(a1, 43LL, &v8);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v5;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x26u,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
