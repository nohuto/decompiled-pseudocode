/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0054220
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C0050084 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     StorIsEventQueueEmpty @ 0x1C0056780 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_DWORD *)(a1 + 1776) = 0;
  ++*(_DWORD *)(a1 + 1784);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3232)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1268) )
  {
    if ( (byte_1C00799E4 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 169,
        a1 + 160,
        a1 + 1976,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 4936LL,
        *(_BYTE *)(a1 + 96),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        *(_BYTE *)(a1 + 450) & 1,
        4);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
