/*
 * XREFs of sub_1406A0094 @ 0x1406A0094
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14091B730 @ 0x14091B730 (sub_14091B730.c)
 *     sub_14091BB78 @ 0x14091BB78 (sub_14091BB78.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_1406A0094(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireFastMutexUnsafe(&stru_140C49100);
      v5 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        v6 = sub_140AB4218(v3, &v11, 0LL);
        if ( !v6 )
          break;
        v9 = (*(_DWORD *)(v6 + 48) & 8) == 0;
        v10 = v5 + 1;
        if ( !v9 )
          v10 = v5;
        v5 = v10;
      }
      if ( v5 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&stru_140C49100);
      KeLeaveCriticalRegion();
      result = sub_14091BB78(a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v7 = sub_140AB4218(v3, &v11, 0LL);
      if ( !v7 )
        break;
      if ( (*(_DWORD *)(v7 + 48) & 8) == 0 )
        sub_14091B730(a2, *(_QWORD *)(v7 + 72));
    }
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
