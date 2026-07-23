/*
 * XREFs of NtGetEnvironmentVariableEx @ 0x140A003D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 */

__int64 __fastcall NtGetEnvironmentVariableEx(const WCHAR *a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C11680);
  v11 = sub_14093E520(a1, a2, a3, a4, a5);
  ExReleaseFastMutexUnsafe(&stru_140C11680);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v11;
}
