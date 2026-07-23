/*
 * XREFs of sub_1406C3EEC @ 0x1406C3EEC
 * Callers:
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409339DC @ 0x1409339DC (sub_1409339DC.c)
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void sub_1406C3EEC()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (stru_140C2B9A0.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&stru_140C2B9A0);
      KeReleaseGuardedMutex(&stru_140C2B9A0);
    }
  }
}
