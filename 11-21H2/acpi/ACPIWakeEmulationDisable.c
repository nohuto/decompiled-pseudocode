/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0062BE8
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004F0F0 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C005A010 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00623F0 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C0062528 (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (_QWORD *)(a1 + 152);
  if ( v1 <= 1 )
  {
    if ( !v1 )
      return;
  }
  else
  {
    v2 = (_QWORD *)*v2;
  }
  v3 = *(unsigned int *)(a1 + 116);
  do
  {
    ACPIDisconnectWakeInterrupt((__int64)v2);
    v2 += 5;
    --v3;
  }
  while ( v3 );
}
