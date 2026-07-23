/*
 * XREFs of sub_1405DF54C @ 0x1405DF54C
 * Callers:
 *     sub_1409A0C98 @ 0x1409A0C98 (sub_1409A0C98.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140395628 @ 0x140395628 (sub_140395628.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1405DF54C()
{
  __int64 v0; // r11
  int v1; // esi
  void *v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 Pool2; // rax
  ULONG_PTR v7; // rcx
  _DWORD *v8; // r14
  __int64 i; // rsi
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v19; // [rsp+48h] [rbp-89h]
  __int128 v20; // [rsp+50h] [rbp-81h] BYREF
  __int128 v21; // [rsp+60h] [rbp-71h]
  _WORD Src[64]; // [rsp+78h] [rbp-59h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C22F90, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v0 = qword_140C22FB0;
  v1 = 0;
  v2 = 0LL;
  v3 = 64LL;
  if ( (__int64 *)qword_140C22FB0 == &qword_140C22FB0 )
    goto LABEL_22;
  do
  {
    if ( *(_BYTE *)(v0 + 196) )
    {
      v4 = 24LL;
      if ( (int)sub_140395628(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Src[v5] );
        v4 = 2 * v5 + 26;
        if ( v4 < 0x18 )
          goto LABEL_22;
      }
      ++v1;
      if ( v3 + v4 < v3 )
        goto LABEL_22;
      v3 += v4;
    }
    v0 = *(_QWORD *)v0;
  }
  while ( (__int64 *)v0 != &qword_140C22FB0 );
  if ( !v1 )
  {
LABEL_22:
    v3 = 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v3, 1111641936LL);
    v2 = (void *)Pool2;
    if ( Pool2 )
    {
      v7 = qword_140C11650;
      v8 = (_DWORD *)(Pool2 + 40);
      *(_DWORD *)(Pool2 + 4) = 1;
      *(_DWORD *)Pool2 = v3;
      *(_DWORD *)(Pool2 + 8) = v1;
      *(_QWORD *)(Pool2 + 16) = &qword_140C22FB0;
      *(_QWORD *)(Pool2 + 24) = &qword_140C1FB50;
      *(_QWORD *)(Pool2 + 32) = v7;
      for ( i = qword_140C22FB0; (__int64 *)i != &qword_140C22FB0; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 196) )
        {
          v8[2] = *(unsigned __int8 *)(i + 184);
          v8[3] = *(_DWORD *)(i + 188);
          v8[4] = *(_DWORD *)(i + 192);
          v10 = 24LL;
          v8[1] = (sub_1402F5718() - *(_QWORD *)(i + 48)) / 0x2710uLL;
          if ( (int)sub_140395628(*(_QWORD *)(i + 32), Src) >= 0 )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( Src[v11] );
            v10 = 2 * v11 + 26;
            memmove(v8 + 5, Src, 2 * v11);
            *((_WORD *)v8 + v11 + 10) = 0;
          }
          *v8 = v10;
          v8 = (_DWORD *)((char *)v8 + v10);
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v12 = (unsigned __int8)v19;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( v3 )
  {
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 4LL;
    *(_QWORD *)&v20 = v2;
    *((_QWORD *)&v20 + 1) = (unsigned int)v3;
    sub_14074F950(94, (unsigned int)&v20, 32, 0, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
