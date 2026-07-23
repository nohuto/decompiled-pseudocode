/*
 * XREFs of IopAddBugcheckTriageThread @ 0x14055C80C
 * Callers:
 *     IoAddBugcheckTriageThread @ 0x14054FD90 (IoAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140552134 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C118 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C180 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C240 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C9A0 (IopAddBugcheckTriageWorkQueue.c)
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1403885EC (KiIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x140553940 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C690 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  unsigned int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(MaxDataSize, 2320LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x910);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 56);
      v5 = *(_QWORD *)(MaxDataSize + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, (PVOID)MaxValidMemorySize);
    }
    v9 = (_QWORD *)(MaxDataSize + 1280);
    v10 = *(_QWORD **)(MaxDataSize + 1280);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !KiIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
