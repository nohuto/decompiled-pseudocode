/*
 * XREFs of KiValidateCpuSetMasks @ 0x14039D66C
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D4F0 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x140576464 (KeSetTagCpuSets.c)
 *     KiInitializeReservedCpuSets @ 0x140B736A4 (KiInitializeReservedCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(char *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  signed __int64 v4; // r9

  if ( a2 <= (unsigned __int16)KiMaximumGroups )
  {
    v2 = 0;
    if ( !a2 )
      return 0LL;
    v4 = (char *)qword_140D1EFF8 - a1;
    while ( (~*(_QWORD *)&a1[v4] & *(_QWORD *)a1) == 0LL )
    {
      ++v2;
      a1 += 8;
      if ( v2 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
