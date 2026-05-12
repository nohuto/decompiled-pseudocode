/*
 * XREFs of ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1C001EA54
 * Callers:
 *     ?AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005864 (-AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x1C0009094 (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C001145C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SC_ENV::CreateGuid(struct _GUID *a1)
{
  return ExUuidCreate(a1);
}
