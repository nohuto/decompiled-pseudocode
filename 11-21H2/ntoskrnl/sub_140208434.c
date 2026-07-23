/*
 * XREFs of sub_140208434 @ 0x140208434
 * Callers:
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     sub_1409B01E0 @ 0x1409B01E0 (sub_1409B01E0.c)
 * Callees:
 *     sub_140207880 @ 0x140207880 (sub_140207880.c)
 *     sub_140207CCC @ 0x140207CCC (sub_140207CCC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403DB2F0 @ 0x1403DB2F0 (sub_1403DB2F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140208434(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  bool v7; // zf
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  struct _KPRCB *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v44; // [rsp+80h] [rbp+8h] BYREF
  __int64 v45; // [rsp+88h] [rbp+10h]
  __int64 v46; // [rsp+90h] [rbp+18h]

  v45 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !byte_140D068BE )
    sub_1403DB2F0(a1, a2);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = dword_140D068E8 == 0;
  v8 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v9 = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !v7 )
  {
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = qword_140D052A0;
      *(_QWORD *)v10 = qword_140D052A0;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v32 = 424LL * v9 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v32;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v32 + 416);
        v14 = *(_BYTE *)(v32 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        v14 = 0;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v9;
      v10 += 424LL;
    }
    while ( v9 < dword_140D068E8 );
  }
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v35 = *(_QWORD **)(a3 + 88);
    if ( *v35 != a3 + 80 )
      goto LABEL_73;
    *v8 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v35;
    *v35 = v8;
    *(_QWORD *)(a3 + 88) = v8;
  }
  else
  {
    v15 = (_QWORD *)qword_140C2B888;
    if ( *(__int64 **)qword_140C2B888 != &qword_140C2B880 )
      goto LABEL_73;
    *v8 = &qword_140C2B880;
    *(_QWORD *)(a1 + 64) = v15;
    *v15 = v8;
    qword_140C2B888 = a1 + 56;
  }
  v16 = dword_140D06884;
  v17 = 0;
  v46 = 0LL;
  if ( (_DWORD)dword_140D06884 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = qword_140D088C0[v17];
      v20 = a1 + 424LL * v17;
      v44 = 0;
      while ( 1 )
      {
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v21 + 24);
            *(_DWORD *)(v21 + 24) = v38 + 1;
            if ( v38 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
          break;
        v34 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v34 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v39 = *(_DWORD *)(v34 + 24) - 1;
            *(_DWORD *)(v34 + 24) = v39;
            if ( !v39 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v44);
        while ( *(_QWORD *)(v19 + 48) );
      }
      v22 = *(_QWORD **)(v19 + 34192);
      v23 = (_QWORD *)(v20 + 200);
      if ( *v22 != v19 + 34184 )
        break;
      v7 = (v45 & 0x400000000LL) == 0;
      *v23 = v19 + 34184;
      *(_QWORD *)(v20 + 208) = v22;
      *v22 = v23;
      *(_QWORD *)(v19 + 34192) = v23;
      if ( !v7 )
      {
        *(_BYTE *)(v20 + 240) |= 0xCu;
        *(_DWORD *)(v20 + 244) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = *((_QWORD *)v24 + 4375);
      if ( v25 )
      {
        if ( *((_BYTE *)v24 + 32) <= 1u )
        {
          v40 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v40;
          if ( !v40 )
            sub_140418E4C(v24);
        }
      }
      if ( *(_QWORD *)(v19 + 34880) )
      {
        if ( *(_BYTE *)(v19 + 209) == *(_BYTE *)(*(_QWORD *)(v19 + 34888) + 657LL) )
        {
          *(_BYTE *)(v20 + 240) |= 0x20u;
          v26 = v20 + 256;
          v46 = v20 + 256;
        }
        else
        {
          v26 = v46;
        }
        *(_QWORD *)(v20 + 248) = v26;
      }
      if ( ++v17 >= v16 )
        goto LABEL_26;
    }
LABEL_73:
    __fastfail(3u);
  }
LABEL_26:
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v30 = *(_DWORD *)(a3 + 12);
      if ( v30 )
      {
        v31 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= v30 )
          goto LABEL_40;
      }
      v33 = a3;
      *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
    }
    else
    {
      v30 = dword_140C2B894;
      if ( dword_140C2B894 )
      {
        v31 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= (unsigned int)dword_140C2B894 )
        {
LABEL_40:
          *(_DWORD *)(a1 + 8) = (v31 << 7) / v30;
LABEL_41:
          sub_140207CCC((unsigned __int16 *)a1, 0);
          goto LABEL_32;
        }
      }
      v33 = 0LL;
      dword_140C2B894 = (unsigned __int16)a2;
    }
    sub_140207880(1, 0, v33);
    goto LABEL_41;
  }
  if ( a3 )
  {
    v36 = *(_DWORD *)(a3 + 16);
    if ( !v36 || (v37 = (unsigned __int16)a2, (unsigned __int16)a2 < v36) )
    {
      v37 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v37;
  }
  else
  {
    if ( !dword_140C2B86C || (v27 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)dword_140C2B86C) )
    {
      v27 = (unsigned __int16)a2;
      dword_140C2B86C = (unsigned __int16)a2;
    }
    dword_140C2B870 += v27;
  }
  sub_140207880(0, 0, a3);
LABEL_32:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = *((_QWORD *)v41 + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v42 + 20)) == 0;
        *(_DWORD *)(v42 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(v41);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
