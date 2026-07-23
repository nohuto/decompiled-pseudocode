/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14036B680
 * Callers:
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063CDF0 @ 0x14063CDF0 (sub_14063CDF0.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v4; // edi
  __int64 v6; // rbp
  KIRQL CurrentIrql; // r11
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int TableSize; // edx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v10; // edi
  unsigned __int64 OldIrql; // rbx
  __int64 v12; // r10
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v4 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v4;
    v6 = *((unsigned __int8 *)CurrentThread + 1120);
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.OldIrql = CurrentIrql;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&Resource->SpinLock);
    OwnerTable = Resource->OwnerTable;
    if ( !OwnerTable )
      goto LABEL_15;
    TableSize = OwnerTable->TableSize;
    if ( (unsigned int)v6 < TableSize && (struct _KTHREAD *)OwnerTable[v6].OwnerThread == CurrentThread )
    {
      v10 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[v6].TableSize;
    }
    else
    {
      v13 = 1;
      if ( TableSize <= 1 )
      {
LABEL_15:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = *((_QWORD *)CurrentPrcb + 4375);
              v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v14 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        return v4;
      }
      while ( 1 )
      {
        v14 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
        ++OwnerTable;
        if ( v14 )
          break;
        if ( ++v13 >= TableSize )
          goto LABEL_15;
      }
      v10 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
    }
    v4 = *(unsigned int *)&v10 >> 3;
    goto LABEL_15;
  }
  v15 = KeGetCurrentIrql();
  if ( v15 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v15, 2uLL, 0LL);
  return sub_14063CDF0(Resource);
}
