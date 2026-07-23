/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1407F9DA0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1407E0018 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1407F97A0 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788B38 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
