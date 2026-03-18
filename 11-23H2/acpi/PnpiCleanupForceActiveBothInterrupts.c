/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C003C5A0
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD28 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002D7D0 (ACPIInitResetDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FD4 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  *(_DWORD *)(a1 + 704) = -1;
}
