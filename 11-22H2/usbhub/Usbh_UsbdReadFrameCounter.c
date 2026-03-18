/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C00031B0
 * Callers:
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     UsbhReset1Complete @ 0x1C0002B20 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     Usbh_PcLogEntry @ 0x1C0036580 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C00394C0 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = FdoExt(a1);
  if ( !*(_QWORD *)(v1 + 4592) )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(v1 + 4592))(*(_QWORD *)(v1 + 4560), &v3);
  return v3;
}
