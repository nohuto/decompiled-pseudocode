/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140A4F19C
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     RtlMarkHiberPhase @ 0x14038D4F0 (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     HvlMarkHiberPhase @ 0x1403992E8 (HvlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x14039936C (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x140429870 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405FDEEC (VfIsVerifierExtensionEnabled.c)
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A4E854 (KdMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x140A4ED84 (PopMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x140A4EEAC (MmMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A4F3AC (KeMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140A4FE40 (MiConvertHiberPhasePages.c)
 */

void __fastcall PopMarkComponentsBootPhase(unsigned int *Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx
  PVOID *m; // rbx

  if ( !byte_140C22C01 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&stru_140C54840); j; j = j->Next )
      KeMarkHiberPhase(j[-1].Next);
    ((void (__fastcall *)(_QWORD))off_140C01BF8[0])(0LL);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() == 1 && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    DifMarkHiberPhase();
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    MmMarkHiberPhase();
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        (PVOID)IopTriageDumpDataBlocks[2 * k],
        _mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * k], 8).m128i_u64[0] - IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    v5 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v5)(v5[2]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 8);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}
