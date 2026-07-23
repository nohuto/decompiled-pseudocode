/*
 * XREFs of TpAdjustBindingCount @ 0x18001EE64
 * Callers:
 *     TppInitializeTimer @ 0x18001EDC4 (TppInitializeTimer.c)
 *     TppDestroyTimer @ 0x18001F830 (TppDestroyTimer.c)
 *     TpBindFileToDirect @ 0x18007D6F8 (TpBindFileToDirect.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 *     TppIopFree @ 0x1800869B0 (TppIopFree.c)
 *     TppAlpcpFree @ 0x18008A250 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x18008B830 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18012521C (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 > 0 )
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
LABEL_7:
      v5 = *(void **)(a1 + 56);
      WorkerFactoryInformation = v4;
      NtSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
      return;
    }
    if ( v3 > 0 )
    {
      v4 = 1;
      goto LABEL_7;
    }
  }
}
