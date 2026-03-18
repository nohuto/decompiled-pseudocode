/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1402DF2C0
 * Callers:
 *     PiDqQueryCreate @ 0x140776C38 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     EtwpEnableKeyProviders @ 0x14081881C (EtwpEnableKeyProviders.c)
 *     PiDmObjectManagerInit @ 0x140844B5C (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x140851328 (EtwpInitializeAutoLoggers.c)
 *     PopDirectedDripsUmInitialize @ 0x140858B54 (PopDirectedDripsUmInitialize.c)
 *     VfAvlInitializeTreeEx @ 0x140A7C400 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140A9DD20 (ViPtInitAvlTrees.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140B010DC (PiDcInit.c)
 *     PiSwInit @ 0x140B235FC (PiSwInit.c)
 *     PopPowerRequestInitialize @ 0x140B248EC (PopPowerRequestInitialize.c)
 *     PopPowerRequestStatsInitialize @ 0x140B24AB0 (PopPowerRequestStatsInitialize.c)
 *     PiInitializeDDBCache @ 0x140B2E514 (PiInitializeDDBCache.c)
 *     PpInitSystem @ 0x140B2F780 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
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
