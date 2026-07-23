/*
 * XREFs of sub_1403335A0 @ 0x1403335A0
 * Callers:
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 */

void __fastcall sub_1403335A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 *v6; // rdi
  int v7; // ebp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(unsigned __int16 *)(a1 + 174);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = *(_QWORD **)(qword_140C51F48 + 8 * v3);
  v5 = v4[2075];
  if ( v2 < *(_QWORD *)(v5 + 56) )
  {
    if ( a2 > 0 )
      return;
    v6 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v4[2077] == v6 )
      return;
    v7 = 2;
LABEL_11:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C53340;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&qword_140C53340);
    if ( !*(_BYTE *)(v5 + 53) )
    {
      v8 = (__int64 *)*v6;
      if ( *v6 )
      {
        if ( (__int64 *)v8[1] == v6 )
        {
          v9 = (__int64 **)v6[1];
          if ( *v9 == v6 )
          {
            v10 = (__int64 **)(v4 + 2076);
            *v9 = v8;
            v8[1] = (__int64)v9;
            if ( v7 == 1 )
            {
              v12 = *v10;
              if ( (__int64 **)(*v10)[1] == v10 )
              {
                *v6 = (__int64)v12;
                v6[1] = (__int64)v10;
                v12[1] = (__int64)v6;
                *v10 = v6;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                return;
              }
            }
            else
            {
              v11 = (__int64 **)v10[1];
              if ( *v11 == (__int64 *)v10 )
              {
                *v6 = (__int64)v10;
                v6[1] = (__int64)v11;
                *v11 = v6;
                v10[1] = v6;
LABEL_18:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                return;
              }
            }
          }
        }
        __fastfail(3u);
      }
    }
    *(_BYTE *)(v5 + 54) = 1;
    goto LABEL_18;
  }
  if ( a2 >= 0 )
  {
    v6 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (__int64 *)v4[2076] != v6 )
      {
        v7 = 1;
        goto LABEL_11;
      }
    }
  }
}
