/*
 * XREFs of StorUnitDereferenceDeviceObject @ 0x1C00568A0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 */

__int64 __fastcall StorUnitDereferenceDeviceObject(__int64 a1)
{
  RaUnitReleaseRemoveLock(*(_QWORD *)(a1 + 64));
  return 0LL;
}
