/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140AA360C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140293980 (VfIsVerifierEnabled.c)
 *     MmIsAddressValid @ 0x1403AEE00 (MmIsAddressValid.c)
 *     FirstEntrySList @ 0x140428EA0 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     HvlMarkHiberPhase @ 0x140546904 (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x14057EB2C (KeMarkDynamicTracingHiberPhase.c)
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x1405B474C (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405CE224 (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x1405D4E84 (DifMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A99A74 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A9E9A8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A9EA38 (KeMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x140AA3898 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140AAC06C (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140AACCE0 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  unsigned int v1; // ebx
  PVOID *i; // rdi
  PSLIST_ENTRY j; // rdi
  PVOID *k; // rbx
  PVOID *m; // rbx

  v1 = 0;
  if ( !byte_140C3CE01 )
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
    for ( j = FirstEntrySList(&stru_140D18560); j; j = j->Next )
      KeMarkHiberPhase(&j[-1].Next->Next);
    ((void (__fastcall *)(_QWORD))off_140C019B8[0])(0LL);
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
    KeMarkDynamicTracingHiberPhase();
    MmMarkHiberPhase();
    if ( IopNumTriageDumpDataBlocks )
    {
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          (PVOID)IopTriageDumpDataBlocks[v1].m128i_i64[0],
          _mm_srli_si128(IopTriageDumpDataBlocks[v1], 8).m128i_u64[0] - IopTriageDumpDataBlocks[v1].m128i_i64[0],
          0x42706D44u);
        ++v1;
      }
      while ( v1 < IopNumTriageDumpDataBlocks );
    }
    for ( k = (PVOID *)PopShutdownNotificationCallbackList; k != &PopShutdownNotificationCallbackList; k = (PVOID *)*k )
    {
      PoSetHiberRange(0LL, 0x10000u, k, 0x28uLL, 0x6E72654Bu);
      ((void (__fastcall *)(PVOID))k[2])(k[4]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 32);
    Address[3] = 1;
  }
  Address[28] = 1;
}
