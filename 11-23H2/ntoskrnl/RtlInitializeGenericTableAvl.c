/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14031E970
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1407889D0 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1407F9084 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x140839828 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x14083BACC (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14083CAD4 (EtwpEnableKeyProviders.c)
 *     PopDirectedDripsUmInitialize @ 0x140860BD0 (PopDirectedDripsUmInitialize.c)
 *     VfAvlInitializeTreeEx @ 0x140ABD480 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140ADEDE0 (ViPtInitAvlTrees.c)
 *     PiSwInit @ 0x140B3BD2C (PiSwInit.c)
 *     PiDcInit @ 0x140B3F5C0 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140B3F860 (PiInitializeDDBCache.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     PpInitSystem @ 0x140B542D0 (PpInitSystem.c)
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 *     PopPowerRequestStatsInitialize @ 0x140B64EBC (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
