/*
 * XREFs of FsRtlAllocateFileLock @ 0x140256110
 * Callers:
 *     <none>
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 */

PFILE_LOCK __stdcall FsRtlAllocateFileLock(
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  PFILE_LOCK result; // rax

  result = (PFILE_LOCK)sub_140202234((__int64)&stru_140CE2700);
  if ( result )
  {
    result->LockInformation = 0LL;
    result->CompleteLockIrpRoutine = CompleteLockIrpRoutine;
    result->UnlockRoutine = UnlockRoutine;
    result->FastIoIsQuestionable = 0;
    result->LockRequestsInProgress = 0;
  }
  return result;
}
