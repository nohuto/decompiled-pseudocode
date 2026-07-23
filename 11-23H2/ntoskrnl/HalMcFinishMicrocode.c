/*
 * XREFs of HalMcFinishMicrocode @ 0x1403B0FE4
 * Callers:
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 * Callees:
 *     HalpIsPartitionCpuManager @ 0x140378098 (HalpIsPartitionCpuManager.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x14037989C (HalpMcUpdateFindDataTableEntry.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MmGetSystemRoutineAddress @ 0x140756A60 (MmGetSystemRoutineAddress.c)
 *     HalpMcExportAndChargeNeededData @ 0x140860AF0 (HalpMcExportAndChargeNeededData.c)
 */

char __fastcall HalMcFinishMicrocode(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *DataTableEntry)(_QWORD); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD); // rbx
  UNICODE_STRING SystemRoutineName; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&SystemRoutineName.Length = 2621478LL;
  SystemRoutineName.Buffer = L"MmUnloadSystemImage";
  LOBYTE(DataTableEntry) = HalpMcExportAndChargeNeededData(a1, a2);
  if ( a1 )
  {
    LOBYTE(DataTableEntry) = HalpIsPartitionCpuManager(v5, v4);
    if ( !(_BYTE)DataTableEntry )
    {
      DataTableEntry = (__int64 (__fastcall *)(_QWORD))HalpMcUpdateFindDataTableEntry((_QWORD *)(a1 + 16));
      v6 = DataTableEntry;
      if ( DataTableEntry )
      {
        DataTableEntry = (__int64 (__fastcall *)(_QWORD))MmGetSystemRoutineAddress(&SystemRoutineName);
        if ( DataTableEntry )
          LOBYTE(DataTableEntry) = DataTableEntry(v6);
      }
    }
  }
  return (char)DataTableEntry;
}
