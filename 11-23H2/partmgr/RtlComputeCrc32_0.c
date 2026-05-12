/*
 * XREFs of RtlComputeCrc32_0 @ 0x1C000B40D
 * Callers:
 *     ?Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z @ 0x1C00050EC (-Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x1C0008C08 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1C0008D38 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall RtlComputeCrc32_0(ULONG InitialCrc, PUCHAR Buffer, ULONG Length)
{
  return RtlComputeCrc32(InitialCrc, Buffer, Length);
}
