/*
 * XREFs of ObCreateObject @ 0x1406B6500
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     KiAllocatePrcbThread @ 0x140376D38 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x14060C430 (ExCreateDpcEvent.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspAllocatePartition @ 0x140859250 (PspAllocatePartition.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140B70508 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
