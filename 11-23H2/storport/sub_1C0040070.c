/*
 * XREFs of sub_1C0040070 @ 0x1C0040070
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C00A39D0 @ 0x1C00A39D0 (sub_1C00A39D0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0040070(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (_QWORD *)sub_1C0007CF4(64LL, 24LL, 1363435858LL, a1);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  *v4 = a2;
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v7 == 1094997074 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 5680), &LockHandle);
    v8 = (_QWORD *)(v7 + 5656);
    v9 = *(_QWORD *)(v7 + 5656);
    v10 = v5 + 1;
    if ( *(_QWORD *)(v9 + 8) == v7 + 5656 )
    {
      *v10 = v9;
      v5[2] = v8;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = v10;
      ++*(_DWORD *)(v7 + 5672);
LABEL_10:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)v7 == 1431193940 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 3424), &LockHandle);
    v11 = (_QWORD *)(v7 + 3400);
    v12 = *(_QWORD *)(v7 + 3400);
    v13 = v5 + 1;
    if ( *(_QWORD *)(v12 + 8) == v7 + 3400 )
    {
      *v13 = v12;
      v5[2] = v11;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = v13;
      ++*(_DWORD *)(v7 + 3416);
      goto LABEL_10;
    }
LABEL_8:
    __fastfail(3u);
  }
  return 0LL;
}
