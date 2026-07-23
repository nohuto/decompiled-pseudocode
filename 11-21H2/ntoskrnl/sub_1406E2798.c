/*
 * XREFs of sub_1406E2798 @ 0x1406E2798
 * Callers:
 *     sub_1406E2624 @ 0x1406E2624 (sub_1406E2624.c)
 *     sub_1406E7AC4 @ 0x1406E7AC4 (sub_1406E7AC4.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_1406E2798(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  *a2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    v5 = sub_140AB4218(a1 + 16, &v10, 0LL);
    v6 = v5;
    if ( !v5 )
      break;
    v8 = *(_DWORD *)(v5 + 64);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *(_DWORD *)(v5 + 68);
      if ( v9 )
      {
        if ( v9 == 12 && !*(_DWORD *)(v6 + 96) )
          *(_DWORD *)(v6 + 96) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      else if ( !*(_DWORD *)(v6 + 88) )
      {
        *(_DWORD *)(v6 + 88) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      *(_DWORD *)(v6 + 64) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  return 0LL;
}
