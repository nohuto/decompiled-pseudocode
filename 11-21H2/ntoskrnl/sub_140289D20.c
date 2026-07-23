/*
 * XREFs of sub_140289D20 @ 0x140289D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140289D20(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  void *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v9; // r14
  __int64 i; // rdi
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  void *v24; // [rsp+40h] [rbp-A8h]
  __int64 v25; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+78h] [rbp-70h]
  _QWORD v29[3]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = 0LL;
  v24 = 0LL;
  v29[0] = 0LL;
  v28 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v29[2] = a3[2];
  v29[1] = a3[3];
  v5 = *a3;
  v32 = *a3;
  v31 = a3[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  v6 = *(_QWORD *)(v3 + 672) - 120LL;
  v26 = v6;
  while ( v6 != v3 + 552 )
  {
    v7 = *(_DWORD *)(v6 + 152);
    if ( (v7 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x42FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v7 & 0x2000000) != 0 && *(_QWORD *)(v6 + 240) == v5 || (v7 & 0x1000000) != 0 && **(_QWORD **)(v6 + 240) == v5 )
    {
      ++*(_DWORD *)(v6 + 4);
      ++*(_DWORD *)(v6 + 536);
      ++*(_DWORD *)(v6 + 112);
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
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
            v4 = v24;
            v6 = v26;
          }
        }
      }
      __writecr8(OldIrql);
      v9 = sub_14027A1B4(v6);
      v30 = v9;
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
      for ( i = *(_QWORD *)(v6 + 16) - 16LL; i + 16 != v6 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v29[0] = *(_QWORD *)(i + 8);
          v25 = *(_QWORD *)(i + 40);
          v28 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
          if ( v4 )
          {
            sub_14028A370(v4);
            v4 = 0LL;
            v24 = 0LL;
          }
          v9 = v30;
          sub_14042A5E0(v30, v29);
          if ( v25 )
          {
            v11 = a3[4];
            if ( !v11 || v25 < v11 )
              a3[4] = v25;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(v6 + 280));
          v12 = *(_DWORD *)(i + 64);
          if ( v12 > 1 )
          {
            *(_DWORD *)(i + 64) = v12 - 1;
          }
          else
          {
            v4 = (void *)i;
            v24 = (void *)i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 280));
      sub_140230680((signed __int64 *)(v6 + 96), v9, 0x63536343u);
      if ( v4 )
      {
        sub_14028A370(v4);
        v4 = 0LL;
        v24 = 0LL;
      }
      v3 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      --*(_DWORD *)(v6 + 4);
      --*(_DWORD *)(v6 + 536);
      --*(_DWORD *)(v6 + 112);
      v5 = v32;
    }
    v6 = *(_QWORD *)(v6 + 120) - 120LL;
    v26 = v6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(v13);
  return 1;
}
