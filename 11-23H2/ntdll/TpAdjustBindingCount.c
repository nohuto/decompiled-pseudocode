/*
 * XREFs of TpAdjustBindingCount @ 0x18002FDF0
 * Callers:
 *     TppInitializeTimer @ 0x18002FE48 (TppInitializeTimer.c)
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     TppDestroyTimer @ 0x18007B3AC (TppDestroyTimer.c)
 *     TppIopFree @ 0x180081F80 (TppIopFree.c)
 *     TppAlpcpFree @ 0x1800869E0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180088360 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x180128100 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A4460 (NtSetInformationWorkerFactory.c)
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
