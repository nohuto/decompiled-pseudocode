/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0060BF0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000EA30 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C005C574 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     StorIsEventQueueEmpty @ 0x1C0063550 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1840), &LockHandle);
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_DWORD *)(a1 + 1824) = 0;
  ++*(_DWORD *)(a1 + 1832);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3280)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1324) )
  {
    if ( (byte_1C0092A04 & 2) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 169,
        a1 + 160,
        a1 + 2024,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5000LL,
        *(_BYTE *)(a1 + 96),
        a1 + 2024,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        *(_BYTE *)(a1 + 450) & 1,
        4);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
