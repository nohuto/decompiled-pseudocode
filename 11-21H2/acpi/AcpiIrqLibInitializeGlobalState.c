/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008E450 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C008E470 (IcInitGlobalState.c)
 *     PcisuppInitGlobalState @ 0x1C009E100 (PcisuppInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C009E128 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00BEB6C (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C0080878 = (__int64)IrqArbTestAllocation;
  qword_1C0080880 = (__int64)IrqArbRetestAllocation;
  qword_1C0080888 = (__int64)IrqArbCommitAllocation;
  qword_1C0080898 = (__int64)IrqArbBootAllocation;
  qword_1C00808A8 = (__int64)IrqArbQueryConflict;
  qword_1C00808C0 = (__int64)IrqArbPreprocessEntry;
  qword_1C00808D0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C00808D8 = (__int64)IrqArbFindSuitableRange;
  qword_1C00808F0 = (__int64)IrqArbOverrideConflict;
  qword_1C00808E0 = (__int64)IrqArbAddAllocation;
  qword_1C00808E8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0080858 = (__int64)IrqArbUnpackRequirement;
  qword_1C0080860 = (__int64)IrqArbPackResource;
  qword_1C0080868 = (__int64)IrqArbUnpackResource;
  qword_1C0080870 = (__int64)IrqArbScoreRequirement;
  qword_1C00808C8 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = PcisuppInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = LinkNodeInitGlobalState();
      if ( (int)result >= 0 )
      {
        result = IcInitGlobalState();
        if ( (int)result >= 0 )
          return ProcessorInitGlobalState();
      }
    }
  }
  return result;
}
