/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x140812808
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  __int64 Pool2; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  Pool2 = ExAllocatePool2(64LL, a2, 1232105040LL);
  *(_QWORD *)(a1 + 48) = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
