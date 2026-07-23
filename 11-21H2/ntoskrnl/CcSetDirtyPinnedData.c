/*
 * XREFs of CcSetDirtyPinnedData @ 0x14029D3D0
 * Callers:
 *     sub_14028A258 @ 0x14028A258 (sub_14028A258.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140705F90 (CcPreparePinWrite.c)
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402767FC @ 0x1402767FC (sub_1402767FC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029D818 @ 0x14029D818 (sub_14029D818.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v3; // ax
  __int64 *v5; // r14
  _QWORD *v6; // r10
  __int64 v7; // r10
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int8 CurrentIrql; // r15
  __int64 v19; // rdi
  LONGLONG v20; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int32 v25; // eax
  unsigned int v26; // r15d
  unsigned __int64 OldIrql; // r13
  unsigned int v28; // r15d
  __int64 v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // eax
  _QWORD v39[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+18h]
  __int64 v42; // [rsp+B8h] [rbp+20h]

  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF0EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v39[0] = BcbVoid;
  v5 = v39;
  v39[1] = 0LL;
  v6 = BcbVoid;
  if ( v3 == 762 )
  {
    v6 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)((char *)BcbVoid + 16);
  }
  v7 = v6[22];
  v42 = *(_QWORD *)(v7 + 528);
  if ( byte_140C54C58 == 1 )
    v8 = *(_QWORD *)(v7 + 592);
  else
    v8 = 0LL;
  v9 = *(_DWORD *)(v7 + 152);
  v41 = v8;
  if ( (v9 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v9 = *(_DWORD *)(v7 + 152);
  }
  if ( (v9 & 0x200) != 0 )
  {
    v10 = *v5;
    while ( *v5 )
    {
      v39[0] = v10;
      ++v5;
      if ( (v10 & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF6FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v11 = *(_QWORD *)(v10 + 176);
      v12 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v14 = (volatile signed __int32 *)(v11 + 280);
      _disable();
      v15 = *((unsigned __int8 *)CurrentThread + 792);
      if ( *((_BYTE *)CurrentThread + 792) || (v15 = sub_14029F6A8(v11 + 280, CurrentThread)) != 0 )
      {
        _BitScanForward((unsigned int *)&v16, v15);
        *((_BYTE *)CurrentThread + 792) = v15 & ~(1 << v16);
        _enable();
        v12 = (__int64)CurrentThread + 96 * v16 + 1696;
        if ( (unsigned __int64)v14 - qword_140C50630 < 0x8000000000LL )
          v17 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        else
          v17 = -1;
        *(_DWORD *)(v12 + 8) = v17;
        *(_QWORD *)v12 = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v14, 0) )
        sub_14029EF4C(v11 + 280, v12);
      if ( v12 )
        *(_BYTE *)(v12 + 18) = 1;
      v19 = v39[0];
      *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = CurrentIrql;
      if ( *(_BYTE *)(v19 + 2) )
        goto LABEL_21;
      v26 = *(_DWORD *)(v19 + 4) >> 12;
      *(_BYTE *)(v19 + 2) = 1;
      if ( Lsn )
      {
        *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
        *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v42 + 704), &LockHandle);
      if ( !*(_DWORD *)(v11 + 112) && (*(_DWORD *)(v11 + 152) & 2) == 0 )
      {
        sub_140276758((_BYTE *)v42, v8, 0LL, 0);
        sub_1402767FC(v11);
      }
      sub_14029D818(v11, 0LL, 0LL, v26);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v34 )
              sub_140418E4C(CurrentPrcb);
            v19 = v39[0];
          }
        }
      }
      __writecr8(OldIrql);
      if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
      {
        v28 = v26 << 12;
        v29 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 68) + 2232LL);
        if ( v29 )
        {
          if ( v28 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8), v28);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 24), 1uLL);
          v19 = v39[0];
          v8 = v41;
          goto LABEL_21;
        }
        v19 = v39[0];
      }
      v8 = v41;
LABEL_21:
      if ( Lsn )
      {
        v20 = *(_QWORD *)(v19 + 40);
        QuadPart = Lsn->QuadPart;
        if ( !v20 || QuadPart < v20 )
        {
          *(_QWORD *)(v19 + 40) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        v22 = *(_QWORD *)(v19 + 48);
        if ( !v22 || QuadPart > v22 )
        {
          *(_QWORD *)(v19 + 48) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        if ( QuadPart > *(_QWORD *)(v11 + 256) )
          *(_QWORD *)(v11 + 256) = QuadPart;
      }
      v23 = *(_QWORD *)(v19 + 32);
      if ( v23 > *(_QWORD *)(v11 + 48) )
        *(_QWORD *)(v11 + 48) = v23;
      v24 = *(unsigned __int8 *)(v11 + 328);
      *(_QWORD *)(v11 + 288) = 0LL;
      v25 = _InterlockedCompareExchange(v14, 1, 0);
      if ( v25 )
        sub_140359548(v11 + 280, v25);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = *((_QWORD *)v36 + 4375);
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v34 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            *(_DWORD *)(v37 + 20) &= v38;
            if ( v34 )
              sub_140418E4C(v36);
          }
        }
      }
      __writecr8(v24);
      sub_1402AFC00(v11 + 280);
      v10 = *v5;
    }
  }
  else
  {
    sub_14029D860(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
