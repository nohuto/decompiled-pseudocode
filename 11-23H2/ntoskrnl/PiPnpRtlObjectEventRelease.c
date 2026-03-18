/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x140788948
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140786490 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789508 (PiPnpRtlObjectEventCreate.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407F9AD0 (PiDqQueryActionQueueEntryFree.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventRelease(char *P)
{
  char *v2; // rcx
  void *v3; // rcx
  unsigned int i; // edi
  void *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 1);
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 2);
    if ( v3 )
      ZwClose(v3);
    if ( (*((_DWORD *)P + 1) & 4) != 0 )
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 24));
    for ( i = 0; i < *((_DWORD *)P + 19); ++i )
    {
      v5 = *(void **)&P[32 * i + 104];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41706E50u);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
