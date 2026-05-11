/*
 * XREFs of USBHwSelectNULLConfiguration @ 0x1C003299C
 * Callers:
 *     USBDeviceStop @ 0x1C003BC10 (USBDeviceStop.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0038A60 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectNULLConfiguration(__int64 a1)
{
  unsigned int v2; // edi
  struct _URB *Pool2; // rbx

  v2 = -1073741670;
  Pool2 = (struct _URB *)ExAllocatePool2(64LL, 88LL, 1096972357LL);
  if ( Pool2 )
  {
    *(_DWORD *)&Pool2->UrbHeader.Length = 88;
    Pool2->UrbSelectInterface.ConfigurationHandle = 0LL;
    v2 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), Pool2, 0LL);
    ExFreePool(Pool2);
  }
  return v2;
}
