/*
 * XREFs of PfpReturnAccessBuffer @ 0x1402F5884
 * Callers:
 *     PfpFlushBuffers @ 0x14074B200 (PfpFlushBuffers.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F583C (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_140D0C180.Alignment);
  if ( LOWORD(stru_140D0C180.Alignment) >= (unsigned int)dword_140D0C168 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C65450, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140D0C180, P);
    if ( !stru_140D0C150.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140D0C150, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P, 0);
}
