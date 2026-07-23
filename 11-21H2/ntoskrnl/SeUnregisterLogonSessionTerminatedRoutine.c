/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CD170
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v5; // rbx
  PVOID *v6; // rcx

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140CF6860);
  v5 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE)qword_140D3B278;
  v6 = &qword_140D3B278;
  while ( 1 )
  {
    if ( !v5 )
    {
      ExReleaseFastMutexUnsafe(&stru_140CF6860);
      sub_1402F9540((__int64)KeGetCurrentThread());
      return -1073741275;
    }
    if ( *((PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5 + 1) == CallbackRoutine )
      break;
    v6 = (PVOID *)v5;
    v5 = *(PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5;
  }
  *v6 = *(PVOID *)v5;
  ExReleaseFastMutexUnsafe(&stru_140CF6860);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v5, 0);
  return v1;
}
