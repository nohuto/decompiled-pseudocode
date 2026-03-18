/*
 * XREFs of UsbhIsHighSpeedCapable @ 0x1C002D368
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

bool __fastcall UsbhIsHighSpeedCapable(__int64 a1)
{
  _DWORD *v2; // rbx
  void *Pool2; // rdi
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  __int16 v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int16 v9; // [rsp+68h] [rbp+20h] BYREF
  int v10; // [rsp+6Ah] [rbp+22h]
  __int16 v11; // [rsp+6Eh] [rbp+26h]

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        25,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  }
  if ( v2[633] == 1 )
  {
    if ( v2[634] == 2 )
      return 1;
    Pool2 = (void *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
    if ( Pool2 )
    {
      v7 = 10;
      v9 = 1664;
      v10 = 1536;
      v11 = 10;
      v4 = UsbhSyncSendCommand(a1, (__int64)&v9, (__int64)Pool2, &v7, v6, &v8);
      ExFreePoolWithTag(Pool2, 0);
      return v4 >= 0;
    }
  }
  return 0;
}
