/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C0050BA0
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0037EA8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C0050AAC (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C006A674 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_1C006A678 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
