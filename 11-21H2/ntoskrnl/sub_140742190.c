/*
 * XREFs of sub_140742190 @ 0x140742190
 * Callers:
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

char __fastcall sub_140742190(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  __int64 v4; // rax
  char v5; // r8
  char v6; // al
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v8 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&dword_140C48F20);
  while ( 1 )
  {
    v4 = sub_140AB4218(&qword_140C48F00, &v8, 0LL);
    if ( !v4 )
      break;
    if ( (_QWORD *)v4 == a1 )
    {
      if ( a1[6] && a1[7] && a1[4] )
      {
        v6 = 0;
        if ( a1[5] )
          v6 = v5 + 1;
        v2 = v6;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&dword_140C48F20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v2;
}
