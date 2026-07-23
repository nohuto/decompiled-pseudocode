/*
 * XREFs of CcSetLogHandleForFileEx @ 0x140241350
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  bool v13; // zf
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 **v34; // rdx
  __int64 *v35; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v37; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v39; // [rsp+48h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v41[10]; // [rsp+68h] [rbp-71h] BYREF

  v39 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&v40.OldIrql = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x327uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD **)(v9 + 528);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x336uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v40.LockQueue.Next = 0LL;
  v40.LockQueue.Lock = v10 + 88;
  sub_1403119F0(&v40);
  if ( *(_QWORD *)(v9 + 240) )
  {
    v20 = *(_QWORD *)(v9 + 120);
    v21 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v20 + 8) != v9 + 120 || *v21 != v9 + 120 )
      goto LABEL_32;
    v13 = byte_140C54C58 == 1;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( v13 )
    {
      v31 = *(_QWORD *)(v9 + 576);
      v32 = *(_QWORD **)(v9 + 584);
      if ( *(_QWORD *)(v31 + 8) != v9 + 576 || *v32 != v9 + 576 )
        goto LABEL_32;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
    }
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 240) = 0LL;
    goto LABEL_13;
  }
  v11 = (_QWORD *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
  {
    v22 = (_QWORD *)v10[85];
    if ( (_QWORD *)*v22 != v10 + 84 )
      goto LABEL_32;
    v13 = byte_140C54C58 == 1;
    *v11 = v10 + 84;
    *(_QWORD *)(v9 + 128) = v22;
    *v22 = v11;
    v10[85] = v11;
    if ( !v13 )
      goto LABEL_8;
    v33 = *(_QWORD *)(v9 + 592) + 688LL;
    goto LABEL_30;
  }
  v12 = (_QWORD *)v10[77];
  if ( (_QWORD *)*v12 != v10 + 76 )
    goto LABEL_32;
  v13 = byte_140C54C58 == 1;
  *v11 = v10 + 76;
  *(_QWORD *)(v9 + 128) = v12;
  *v12 = v11;
  v10[77] = v11;
  if ( v13 )
  {
    v33 = *(_QWORD *)(v9 + 592) + 624LL;
LABEL_30:
    v34 = *(__int64 ***)(v33 + 8);
    v35 = (__int64 *)(v9 + 576);
    if ( *v34 == (__int64 *)v33 )
    {
      *v35 = v33;
      *(_QWORD *)(v9 + 584) = v34;
      *v34 = v35;
      *(_QWORD *)(v33 + 8) = v35;
      goto LABEL_8;
    }
LABEL_32:
    __fastfail(3u);
  }
LABEL_8:
  v14 = *(_QWORD *)(v9 + 504);
  if ( !*(_QWORD *)(v14 + 40) )
  {
    memset(v41, 0, 0x98uLL);
    *(_QWORD *)&v41[1] = a4;
    *((_QWORD *)&v41[0] + 1) = a3;
    *(_QWORD *)&v41[0] = a2;
    *((_QWORD *)&v41[8] + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v14 = *(_QWORD *)(v9 + 504);
      *((_QWORD *)&v41[7] + 1) = Object;
    }
    v23 = v41[1];
    *(_OWORD *)(v14 + 40) = v41[0];
    v24 = v41[2];
    *(_OWORD *)(v14 + 56) = v23;
    v25 = v41[3];
    *(_OWORD *)(v14 + 72) = v24;
    v26 = v41[4];
    *(_OWORD *)(v14 + 88) = v25;
    v27 = v41[5];
    *(_OWORD *)(v14 + 104) = v26;
    v28 = v41[6];
    *(_OWORD *)(v14 + 120) = v27;
    v29 = v41[8];
    *(_OWORD *)(v14 + 136) = v28;
    v30 = *(_QWORD *)&v41[9];
    *(_OWORD *)(v14 + 152) = v41[7];
    *(_OWORD *)(v14 + 168) = v29;
    *(_QWORD *)(v14 + 184) = v30;
  }
  v15 = *(_DWORD *)(v9 + 152);
  v16 = *(_QWORD *)(v9 + 504) + 40LL;
  *(_QWORD *)(v9 + 240) = v16;
  if ( (v15 & 0x1000000) == 0 )
  {
    v17 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v17 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), v17);
      v15 = *(_DWORD *)(v9 + 152);
    }
  }
  *(_DWORD *)(v9 + 152) = v15 | 0x1000000;
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  result = (unsigned int)dword_140D06B08;
  v19 = (unsigned __int8)v39;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v39 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v37 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v19);
  return result;
}
