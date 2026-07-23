/*
 * XREFs of HaliLocateHiberRanges @ 0x140A95B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpTimerMarkHiberPhase @ 0x1404FEC74 (HalpTimerMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x140501AEC (HalpDmaMarkHiberAdapter.c)
 *     HalpPciMarkHiberPhase @ 0x140515B90 (HalpPciMarkHiberPhase.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14051FC78 (HalpExtEnvMarkHiberRegions.c)
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A9558C (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140A95E10 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140A95EF0 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  if ( MemoryMap )
  {
    if ( dword_140C63FC0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C63FC8 >> 12),
        (unsigned __int64)(unsigned int)dword_140C63FC0 >> 12,
        0x6D6C6168u);
    if ( dword_140C641A0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C641A8 >> 12),
        (unsigned __int64)(unsigned int)dword_140C641A0 >> 12,
        0x6D6C6168u);
    if ( dword_140C640A0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C640A8 >> 12),
        (unsigned __int64)(unsigned int)dword_140C640A0 >> 12,
        0x6D6C6168u);
    if ( dword_140C64280 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C64288 >> 12),
        (unsigned __int64)(unsigned int)dword_140C64280 >> 12,
        0x6D6C6168u);
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL);
    HalpExtEnvMarkHiberRegions(0LL);
    PoSetHiberRange(0LL, 0x10000u, HalpCR3Root, 0x1000uLL, 0x746C6168u);
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x746C6168u);
    HalpExtMarkHiberPhase();
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x746C6168u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x636C6168u);
    (*(void (**)(void))(PmAcpiDispatchTable + 32))();
    PoSetHiberRange(0LL, 0x10000u, off_140C01BD0, 0LL, 0x636C6168u);
    off_140C01C10[0]();
    if ( HalpMcUpdateMicrocodeFunc )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateMicrocodeFunc, 0LL, 0x636C6168u);
    if ( HalpMcUpdateData )
      PoSetHiberRange(0LL, 0x10000u, HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
