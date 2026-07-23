/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CD240
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(PVOID a1, PVOID a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rdx

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140CF6860);
  v7 = (PVOID *)qword_140D3B318;
  v8 = &qword_140D3B318;
  if ( !qword_140D3B318 )
    goto LABEL_9;
  do
  {
    if ( v7[1] == a1 && v7[2] == a2 )
      break;
    v8 = v7;
    v7 = (PVOID *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    *v8 = *v7;
    ExReleaseFastMutexUnsafe(&stru_140CF6860);
    sub_1402F9540((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
LABEL_9:
    ExReleaseFastMutexUnsafe(&stru_140CF6860);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741275;
  }
  return v2;
}
