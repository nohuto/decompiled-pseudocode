/*
 * XREFs of ObCreateObject @ 0x14066BA00
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     ExCreateDpcEvent @ 0x14063E200 (ExCreateDpcEvent.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     MiSectionInitialization @ 0x140B09078 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, char a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
