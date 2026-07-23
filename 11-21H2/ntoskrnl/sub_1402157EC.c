/*
 * XREFs of sub_1402157EC @ 0x1402157EC
 * Callers:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 * Callees:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_1402157EC(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r13d
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rtt
  unsigned __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 result; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // r11
  __int64 v33; // r10
  __int64 v34; // r9
  unsigned __int64 v36; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+58h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h]
  _QWORD v45[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v46[32]; // [rsp+148h] [rbp+40h] BYREF

  memset(v45, 0, 0xB8uLL);
  v44 = 0LL;
  v36 = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 1LL;
  v7 = sub_1402FDD20(a1);
  v9 = v7;
  if ( v7 > 0 )
  {
    v23 = (unsigned int)v7;
    do
    {
      v6 <<= 9;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v23;
    }
    while ( v23 );
  }
  v10 = 0LL;
  LODWORD(v11) = 0;
  v39 = 0LL;
  if ( a3 )
  {
    v45[3] = 0LL;
    LODWORD(v45[1]) = 20;
  }
  v12 = sub_1402CCC50(768LL, v8);
  v13 = a2;
  v14 = v12;
  while ( 1 )
  {
    v15 = v13;
    v13 %= v6;
    v38 = v13;
    LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)(v5 + 8 * (v15 / v6));
    if ( (struct _KSPIN_LOCK_QUEUE *volatile)v5 >= LockHandle.LockQueue.Next )
    {
      result = v36;
    }
    else
    {
      v42 = v6 << 12;
      do
      {
        v16 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
        v41 = v10;
        v40 = v10;
        if ( v9 == 3 )
        {
          KeAcquireInStackQueuedSpinLock(&qword_140C53340, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
          *(_QWORD *)v5 = 0LL;
          KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
          v24 = (unsigned __int8)v44;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v27 = *((_QWORD *)CurrentPrcb + 4375);
                v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
                v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                *(_DWORD *)(v27 + 20) &= v28;
                if ( v29 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v24);
          v10 = v5;
          v39 = v5;
          if ( v40 )
            v10 = v41;
        }
        else if ( v9 >= 1 )
        {
          *(_QWORD *)v5 = v14;
        }
        else
        {
          *(_QWORD *)v5 = 0LL;
        }
        v17 = a3;
        if ( a3 )
        {
          if ( v9 < 1 )
            sub_1402CF280(v45, v36, 1LL, (unsigned int)v9);
          else
            sub_1402285E8(v45, (unsigned int)v9, v5);
          v17 = a3;
        }
        if ( v16 > qword_140C50840 || (*(_QWORD *)(48 * v16 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        {
          if ( (_DWORD)v11 && (v22 = v46[2 * (unsigned int)(v11 - 1) + 1], v22 == v16) )
          {
            v46[2 * (unsigned int)(v11 - 1) + 1] = v6 + v22;
          }
          else
          {
            v18 = 2LL * (unsigned int)v11;
            LODWORD(v11) = v11 + 1;
            v46[v18] = v16;
            v46[v18 + 1] = v16 + v6;
            if ( (_DWORD)v11 == 16 )
            {
              if ( v17 )
                sub_14032F1B0(v45);
              v30 = v46;
              v11 = 16LL;
              do
              {
                sub_140215AA8(1LL, *v30, v30[1] - *v30);
                v30 += 2;
                --v11;
              }
              while ( v11 );
            }
          }
        }
        v5 += 8LL;
        result = v42 + v36;
        v36 += v42;
      }
      while ( (struct _KSPIN_LOCK_QUEUE *volatile)v5 < LockHandle.LockQueue.Next );
      v13 = v38;
    }
    if ( !v13 )
      break;
    v6 = 1LL;
    v9 = 0;
    v5 = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( v10 )
  {
    sub_1402CFEB0(v39);
    v31 = sub_1402CFEB0(v10);
    result = sub_14036CB28(v33 + (v32 & (v31 >> 9)), v34);
  }
  if ( a3 )
    result = sub_14032F1B0(v45);
  v20 = (unsigned int)v11;
  if ( (_DWORD)v11 )
  {
    v21 = v46;
    do
    {
      result = sub_140215AA8(1LL, *v21, v21[1] - *v21);
      v21 += 2;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
