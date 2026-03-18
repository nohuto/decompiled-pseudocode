/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x140869D84
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B70AC (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882AE8 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 *     PiIommuUninitializeDeviceAts @ 0x1403B69F0 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1405650C8 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x1407FD41C (PipDmgDestroyIommuExtension.c)
 *     PiIommuBlockDevice @ 0x140865C58 (PiIommuBlockDevice.c)
 *     PipDmgReevaluateQueue @ 0x14096B43C (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140971FBC (PiDmaGuardQueueInsertEntry.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  int v6; // eax
  ULONG_PTR v7; // rbp
  __int64 v8; // rax
  void *v9; // rcx

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v6 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720));
    v7 = v6;
    if ( v6 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v8 = *(_QWORD *)(MaxDataSize + 16);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v7, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v9 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v9);
      PipDmgReevaluateQueue();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry(v9);
    }
  }
}
