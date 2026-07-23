/*
 * XREFs of sub_14023EB0C @ 0x14023EB0C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_1403D0F2C @ 0x1403D0F2C (sub_1403D0F2C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 */

_BYTE *__fastcall sub_14023EB0C(__int64 a1)
{
  _BYTE *v1; // rbx
  void *v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_BYTE **)(a1 + 8);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    goto LABEL_2;
  v5 = sub_1403D0F2C();
  v1 = (_BYTE *)v5;
  if ( v5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = v1;
      v1 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      ++word_140C49B28;
      *(_QWORD *)(a1 + 8) = v1;
      v1[1229] = 1;
      if ( (unsigned __int8)sub_1403606EC(a1, v6, v8) )
        sub_1403606C4(a1, v9, v10);
      else
        v1[1230] = 1;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v15 )
            sub_140418E4C(v18);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
      sub_14053DAFC(v2);
    if ( v1 )
    {
LABEL_2:
      if ( v1[1230] >= 2u )
        KeBugCheckEx(0x34u, 0x5B5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  return v1;
}
