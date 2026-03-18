/*
 * XREFs of ACPIButtonEvent @ 0x1C00189F0
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0003E70 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPIButtonDeviceControl @ 0x1C0018890 (ACPIButtonDeviceControl.c)
 *     ACPICMButtonNotify @ 0x1C0018AC8 (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C00198C0 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C00199B0 (ACPICMLidWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C001873C (ACPIButtonCompletePendingIrps.c)
 */

__int64 __fastcall ACPIButtonEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rsi
  int v6; // ebx
  KIRQL v7; // al
  int v8; // edi
  KIRQL v9; // r15

  if ( !a1 )
    return 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_DWORD *)(DeviceExtension + 200);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  v8 = *(_DWORD *)(DeviceExtension + 196) | a2;
  v9 = v7;
  if ( (v6 & 4) == 0 )
  {
LABEL_6:
    *(_DWORD *)(DeviceExtension + 196) = v8;
    if ( !v8 || !ACPIButtonCompletePendingIrps(a1, v8) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (v8 & 0x80080000) != 0 )
  {
    v8 = v8 & 0xFFFCFFFF | (*(_BYTE *)(DeviceExtension + 192) != 0 ? 0x10000 : 0x20000);
    goto LABEL_6;
  }
LABEL_8:
  *(_DWORD *)(DeviceExtension + 196) = 0;
LABEL_9:
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v9);
  return 259LL;
}
