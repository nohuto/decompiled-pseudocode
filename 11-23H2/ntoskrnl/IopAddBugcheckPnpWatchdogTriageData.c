/*
 * XREFs of IopAddBugcheckPnpWatchdogTriageData @ 0x14055C180
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140552134 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1403885EC (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055C3DC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055C498 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C5A0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14055C80C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055C9A0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpWatchdogTriageData(_QWORD *MaxDataSize, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = 0;
  if ( a3 )
    IopAddBugcheckTriageThread(a3);
  if ( KiIsAddressRangeValid((__int64)MaxDataSize, 80LL) )
  {
    if ( a2 )
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x50);
    IopAddBugcheckTriageCompletionQueue(MaxDataSize[5]);
    IopAddBugcheckTriageWorkQueue(MaxDataSize[6]);
    v6 = MaxDataSize[2];
    if ( v6 )
      IopAddBugcheckTriageThread(v6);
    v7 = MaxDataSize[3];
    if ( v7 )
      IopAddBugcheckTriageThread(v7);
    v8 = MaxDataSize[4];
    if ( v8 )
      IopAddBugcheckTriageThread(v8);
    v9 = MaxDataSize[8];
    if ( v9 )
      IopAddBugcheckTriageDevice(v9);
    v10 = MaxDataSize[7];
    if ( v10 )
      IopAddBugcheckTriageDeviceNode(v10);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
