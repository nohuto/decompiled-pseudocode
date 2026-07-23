/*
 * XREFs of sub_140205FD4 @ 0x140205FD4
 * Callers:
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 * Callees:
 *     sub_140205E40 @ 0x140205E40 (sub_140205E40.c)
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall sub_140205FD4(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // r13
  unsigned __int64 OldIrql; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r14d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  int v17; // ecx
  _QWORD *i; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  __int64 v31; // r8
  int v32; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v35; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a2 + 260) >> byte_140C506CC;
  v5 = 24512LL * v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  do
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_BYTE *)(a2 + 70) = 0;
    v6 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 16));
    if ( !*(_QWORD *)(a2 + 224) && *(_QWORD *)(*(_QWORD *)(a2 + 232) + 56LL) == *(_QWORD *)(a2 + 232) + 56LL && !v6[1] )
    {
      if ( !*(_QWORD *)(a1 + 15992) )
        return 0LL;
      v17 = 0;
      if ( !dword_140D05004 )
        return 0LL;
      for ( i = v6 + 2835; !*i; ++i )
      {
        if ( ++v17 >= (unsigned int)dword_140D05004 )
          return 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock(v6 + 2851, &LockHandle);
    if ( sub_140205E40(a1, a2, v3) )
    {
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
            v35 = *((_QWORD *)CurrentPrcb + 4375);
            v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
            *(_DWORD *)(v35 + 20) &= v36;
            if ( v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 1LL;
    }
    v9 = v3;
    LODWORD(v9) = v3 | 0x80000000;
    v10 = sub_14030B860(64LL, 336LL, 1967679821LL, v9);
    v11 = v10;
    if ( !v10 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v28 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = *((_QWORD *)v30 + 4375);
            v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v23 )
              sub_140418E4C(v30);
          }
        }
      }
      __writecr8(v28);
      return 0LL;
    }
    v12 = sub_14025C1B4(a1, v3, 0LL, v10);
    if ( (v12 & 0x3FFFFF) == 0 )
    {
      v13 = sub_1402CA5E0(a1, 0, 0, 1, v3, 4, 1, 256, v11);
      if ( !v13 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v16 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = *((_QWORD *)v25 + 4375);
              v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v23 )
                sub_140418E4C(v25);
            }
          }
        }
        __writecr8(v16);
        ExFreePoolWithTag((PVOID)v11, 0);
        return 0LL;
      }
      v12 = 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4);
    }
    *(_QWORD *)(v11 + 176) = v12;
    *(_DWORD *)(v11 + 320) = v3;
    v14 = sub_14025BDC8(a2, v11);
    if ( v14 )
      sub_14025E544(v6, v11, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C(v20);
        }
      }
    }
    __writecr8(v15);
    v5 = 24512LL * v3;
  }
  while ( v14 == 1 );
  return v14 != 2;
}
