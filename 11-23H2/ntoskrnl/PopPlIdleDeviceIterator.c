/*
 * XREFs of PopPlIdleDeviceIterator @ 0x1405A17A0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PopPlLookupDevicePowerProfile @ 0x1405A1834 (PopPlLookupDevicePowerProfile.c)
 */

char __fastcall PopPlIdleDeviceIterator(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 32);
  if ( PopPlLookupDevicePowerProfile(*(_QWORD *)(a2 + 8), v2 + 216) )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL));
  return 1;
}
