/*
 * XREFs of UsbhHubAckHubChange @ 0x1C00389CC
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubAckHubChange(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int16 v6; // ax
  unsigned __int16 v7; // di
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int16 v12; // [rsp+78h] [rbp+10h] BYREF
  __int16 v13; // [rsp+88h] [rbp+20h] BYREF
  unsigned __int16 v14; // [rsp+8Ah] [rbp+22h]
  int v15; // [rsp+8Ch] [rbp+24h]

  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x1Du, (__int64)"FKh&");
  v6 = *(_WORD *)(a2 + 2);
  if ( (v6 & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 0LL;
    v7 = 0;
  }
  v13 = 288;
  v14 = v7;
  v15 = 0;
  v8 = (int)UsbhSyncSendCommand(a1, (__int64)&v13, 0LL, &v12, v10, a3);
  Log(a1, 4, 1095460967, v7, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = v8;
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x1Eu, (__int64)"FKh&", v11);
    }
  }
  return (unsigned int)v8;
}
