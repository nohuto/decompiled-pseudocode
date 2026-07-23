/*
 * XREFs of sub_14027D408 @ 0x14027D408
 * Callers:
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_1406DFF40 @ 0x1406DFF40 (sub_1406DFF40.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 * Callees:
 *     sub_140217060 @ 0x140217060 (sub_140217060.c)
 *     sub_1402171FC @ 0x1402171FC (sub_1402171FC.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14036C7EC @ 0x14036C7EC (sub_14036C7EC.c)
 */

void __fastcall sub_14027D408(__int64 a1, int a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  char v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  signed __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v19; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  signed __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (dword_140D06880 & 0xC00000) == 0 || !*(_QWORD *)(a1 + 1928) )
    return;
  v3 = a1 + 1664;
  v4 = 1LL;
  v5 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  if ( a2 )
  {
    v6 = sub_140282AD0(v3);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6);
    *(_DWORD *)(v6 + 4) = 0;
    v9 = v7;
    if ( *(_QWORD *)(a1 + 1928) )
    {
      v10 = 0xFFFFF6FB7DBED000uLL;
      v11 = 256LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)v10;
        if ( !(unsigned int)sub_140317A80(v10)
          || (dword_140D06880 & 0xC00000) == 0
          || *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) == 1 )
        {
          goto LABEL_9;
        }
        if ( (v12 & 1) != 0 )
          break;
LABEL_10:
        v10 += 8LL;
        if ( !--v11 )
          goto LABEL_11;
      }
      if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
      {
        v23 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 8 * ((v10 >> 3) & 0x1FF));
          v25 = v12 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = v12;
          v12 = v25;
          if ( (v24 & 0x42) != 0 )
            v12 = v25 | 0x42;
        }
      }
LABEL_9:
      if ( (v12 & 1) != 0 )
      {
        do
        {
          if ( v12 >= 0 )
            break;
          if ( (dword_140D06880 & 0x4000000) != 0 )
            _mm_lfence();
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v12 & 0x7FFFFFFFFFFFFFFFLL, v12);
          v20 = v12 == v22;
          v12 = v22;
          if ( v20 )
            break;
        }
        while ( (v22 & 1) != 0 );
      }
      goto LABEL_10;
    }
    LOBYTE(v8) = v7;
    sub_14030FA80(v3, v8);
  }
  else
  {
    v9 = 17;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C53340;
    sub_1403119F0(&LockHandle);
    v13 = ((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v27 = sub_140317A10(v13);
    v14 = sub_140317A10(&v27);
    *(_QWORD *)(a1 + 1928) = 0LL;
    v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 904) = sub_14036C7EC(0LL);
    if ( v9 != 17 )
    {
      LOBYTE(v16) = v9;
      sub_14030FA80(v3, v16);
    }
    sub_1402BB6D0(&qword_140C534C0, v13, 1LL);
    sub_1402171FC(v15 << 12);
    if ( (unsigned int)sub_140217060(v17, v15) != 3 )
    {
      sub_14028CE10(v5, 1LL);
      if ( (ULONG_PTR *)v5 == &StartContext )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v19 != -1 )
        {
          if ( (unsigned __int64)(v19 + 1) <= 0x100 )
          {
            do
            {
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v19 + 1, v19);
              v20 = (_DWORD)v19 == v21;
              LODWORD(v19) = v21;
              if ( v20 )
                return;
            }
            while ( v21 != -1 && (unsigned __int64)(v21 + 1LL) <= 0x100 );
          }
          if ( (int)v19 > 192
            && (_DWORD)v19 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v19) )
          {
            v4 = (int)v19 - 192 + 1LL;
          }
          if ( !v4 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v4);
    }
  }
}
