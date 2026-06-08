/*
 * XREFs of PepNotifyPerfSet @ 0x1C000E13C
 * Callers:
 *     PepPerfControlHandler @ 0x1C000E290 (PepPerfControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyPerfSet(__int64 a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7; // ebx
  int v9; // [rsp+28h] [rbp-40h]
  _DWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+44h] [rbp-24h]
  __int16 v12; // [rsp+45h] [rbp-23h]
  char v13; // [rsp+47h] [rbp-21h]

  v10[4] = a5;
  v10[3] = a6;
  v10[0] = a2;
  v10[1] = a3;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  v10[2] = a4;
  v7 = PoFxProcessorNotification(a1, 13LL, v10);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v7;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x25u,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
      v9);
  }
  return (unsigned int)v7;
}
