/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860E80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1397122387LL);
  if ( !Pool2 )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140CF6860);
  *Pool2 = qword_140D3B318;
  Pool2[1] = a1;
  Pool2[2] = a2;
  qword_140D3B318 = Pool2;
  ExReleaseFastMutexUnsafe(&stru_140CF6860);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
