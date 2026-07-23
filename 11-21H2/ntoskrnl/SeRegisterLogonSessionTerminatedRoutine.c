/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x1409CD0D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !CallbackRoutine )
    return -1073741811;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1397122387LL);
  if ( !Pool2 )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140CF6860);
  *Pool2 = qword_140D3B278;
  Pool2[1] = CallbackRoutine;
  qword_140D3B278 = Pool2;
  ExReleaseFastMutexUnsafe(&stru_140CF6860);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0;
}
