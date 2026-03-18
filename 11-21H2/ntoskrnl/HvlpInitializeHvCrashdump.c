/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x14054B14C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeRegisterNmiCallback @ 0x14056A870 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140829AB0 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  void *IndependentPages; // rax

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C4891C = *(_DWORD *)a1;
  qword_140C48920 = *(_QWORD *)(a1 + 8);
  dword_140C48918 = v1;
  qword_140C48910 = v3;
  if ( !v1 || (qword_140C48908 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140C48878.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C48878,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C48928 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C48928 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C488A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C488A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C48878.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C48878,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C488D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C488D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlSkCrashdumpCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
