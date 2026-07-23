/*
 * XREFs of MiQueuePageAccessLog @ 0x1402F54F0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1402F4CE8 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1402F4D30 (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1407494A0 (MiGetCcAccessLog.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F55AC (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140D0C250;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_140D0C240.Alignment);
  if ( LOWORD(stru_140D0C240.Alignment) >= (unsigned int)dword_140D0C228 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C65550, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140D0C240, P);
    if ( !stru_140D0C210.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140D0C210, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
