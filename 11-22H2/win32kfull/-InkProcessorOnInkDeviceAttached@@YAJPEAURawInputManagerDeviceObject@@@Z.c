/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE0EC
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C009EC90 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A6A30 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C01FE0B4 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023E04C (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *a1)
{
  int InkProcessor; // eax
  unsigned int v3; // ebx
  struct InkProcessor *v5; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-38h] BYREF
  struct InkProcessor **v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]

  v5 = 0LL;
  InkProcessor = GetInkProcessor(&v5);
  v3 = InkProcessor;
  if ( InkProcessor >= 0 )
  {
    InkProcessor = InkProcessor::OnDeviceAttached(v5, a1);
    v3 = InkProcessor;
    if ( InkProcessor < 0 && (unsigned int)dword_1C03540E0 > 2 )
      goto LABEL_6;
  }
  else if ( (unsigned int)dword_1C03540E0 > 2 )
  {
LABEL_6:
    v9 = 0;
    LODWORD(v5) = InkProcessor;
    v8 = 4;
    v7 = &v5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03540E0, (unsigned __int8 *)dword_1C031C186, 0LL, 0LL, 3u, &v6);
  }
  return v3;
}
