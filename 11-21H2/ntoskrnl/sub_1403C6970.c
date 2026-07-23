/*
 * XREFs of sub_1403C6970 @ 0x1403C6970
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023C084 @ 0x14023C084 (sub_14023C084.c)
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     sub_140255720 @ 0x140255720 (sub_140255720.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D5324 @ 0x1402D5324 (sub_1402D5324.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall __noreturn sub_1403C6970(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // di
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    while ( 1 )
    {
      v1 = KeRemoveQueue(&Queue, 0, 0LL);
      if ( v1 != (PLIST_ENTRY)&unk_140C113C0 )
        break;
      sub_140255720();
      sub_1402F0D90((__int64)&stru_140C11380, (__int64)&Queue, (__int64)&unk_140C113C0);
    }
    if ( LODWORD(v1[3].Flink) )
    {
      v2 = v1 - 35;
      Flink = v1[-34].Flink;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
      if ( !LODWORD(v2[25].Flink) )
      {
        v4 = (unsigned int)v2[24].Flink;
        Blink = (unsigned int)v2[23].Blink;
        if ( v4 > Blink )
          sub_14023C084((__int64)Flink->Blink, -(__int64)v2[7].Flink, v4 - Blink);
      }
      if ( BYTE1(Flink[2].Flink) )
      {
        v6 = 1;
      }
      else
      {
        v6 = 0;
        sub_1402F0D90((__int64)&v2[26].Blink, (__int64)&Queue, (__int64)&v2[35]);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v6 )
        goto LABEL_15;
    }
    else
    {
      v2 = (PLIST_ENTRY)((char *)v1 - 616);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1[-38].Blink, &LockHandle);
      LODWORD(v2[25].Blink) &= ~0x400u;
      if ( ((__int64)v2[25].Blink & 0x200) != 0 && sub_1402D5324(v2) )
      {
        sub_1402F8420((char *)v2, &LockHandle, 0);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v8 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v9 = KeGetCurrentIrql();
            if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
            {
              v10 = KeGetCurrentPrcb();
              v11 = *((_QWORD *)v10 + 4375);
              v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
              *(_DWORD *)(v11 + 20) &= v12;
              if ( v13 )
                sub_140418E4C(v10);
            }
          }
        }
        __writecr8(v8);
      }
LABEL_15:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
  }
}
