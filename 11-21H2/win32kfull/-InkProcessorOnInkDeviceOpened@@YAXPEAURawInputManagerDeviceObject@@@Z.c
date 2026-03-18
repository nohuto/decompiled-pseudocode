/*
 * XREFs of ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021AA0C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102A40 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01CD100 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C024CB60 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceOpened(struct RawInputManagerDeviceObject *a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceOpened(InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
    v1 = -1073741823;
    v3 = &v1;
    v5 &= (unsigned int)InkProcessor::s_pInstance;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0326250, (unsigned __int8 *)dword_1C02EFE22, 0LL, 0LL, 3u, &v2);
  }
}
