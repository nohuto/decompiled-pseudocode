/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1C0058310
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0002994 (RaidFreeDeferredItem.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     StorPortGetLogicalUnit @ 0x1C00433A0 (StorPortGetLogicalUnit.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _DEVICE_OBJECT *v4; // rbx
  _DWORD *LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v7; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a2 + 32) == 0xFF )
  {
    v4 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 104) & 4) != 0));
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64));
    if ( !LogicalUnit || (LogicalUnit[112] & 0x10) == 0 )
      return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1264), a2);
    v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)LogicalUnit + 1);
  }
  if ( v4 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, *(unsigned int *)(a2 + 40), 1297572178LL, *(_QWORD *)(v2 + 8));
    v7 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v7[1] = IoWMIDeviceObjectToProviderId(v4);
      *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v7) < 0 )
        ExFreePoolWithTag(v7, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1264), a2);
}
