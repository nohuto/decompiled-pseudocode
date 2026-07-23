/*
 * XREFs of sub_1402EE2D0 @ 0x1402EE2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402F09D8 @ 0x1402F09D8 (sub_1402F09D8.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402EE2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (KSPIN_LOCK *)(a2 + 96);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v7 = *(KSPIN_LOCK **)(a2 + 88);
    v8 = v6;
    if ( v7 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 88), 0x746C6644u);
    KeReleaseSpinLockFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
      v9 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)sub_1402F09D8((PVOID)a2) )
      {
        KeReleaseSpinLockFromDpcLevel(v4);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = *((_QWORD *)v17 + 4375);
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v15 )
                sub_140418E4C(v17);
            }
          }
        }
        __writecr8(v9);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = *((_QWORD *)v21 + 4375);
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v15 )
              sub_140418E4C(v21);
          }
        }
      }
      __writecr8(OldIrql);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
  }
}
