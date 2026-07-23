/*
 * XREFs of DifUpdatePluginState @ 0x1405D5980
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140AC2140 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407602EC (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset(&DifpSPMemoryInfo, 0, 0xF0uLL);
    dword_140D18BC4 = -1;
    dword_140D18BC8 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140D18BF8;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140D18BF8
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
