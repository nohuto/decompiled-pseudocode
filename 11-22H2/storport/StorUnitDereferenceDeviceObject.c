/*
 * XREFs of StorUnitDereferenceDeviceObject @ 0x1C0063670
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 */

__int64 __fastcall StorUnitDereferenceDeviceObject(__int64 a1)
{
  RaUnitReleaseRemoveLock(*(_QWORD *)(a1 + 64));
  return 0LL;
}
