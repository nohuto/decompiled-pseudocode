/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14031E790
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x140788EE0 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1407F9734 (PiDqQueryCreate.c)
 *     PopDirectedDripsUmInitialize @ 0x140802C48 (PopDirectedDripsUmInitialize.c)
 *     PiDmObjectManagerInit @ 0x14083B378 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x14083D85C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14083E864 (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x140ABE450 (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140ADFDB0 (ViPtInitAvlTrees.c)
 *     PiSwInit @ 0x140B3F42C (PiSwInit.c)
 *     PiDcInit @ 0x140B42CC0 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140B42F60 (PiInitializeDDBCache.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInitialize @ 0x140B66098 (PopPowerRequestInitialize.c)
 *     PopPowerRequestStatsInitialize @ 0x140B6625C (PopPowerRequestStatsInitialize.c)
 *     PpInitSystem @ 0x140B75180 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
