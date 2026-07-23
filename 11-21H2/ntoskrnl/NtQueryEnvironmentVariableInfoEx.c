/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x140A00D00
 * Callers:
 *     sub_1407FE8C0 @ 0x1407FE8C0 (sub_1407FE8C0.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14093E6A8 @ 0x14093E6A8 (sub_14093E6A8.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C11680);
  v10 = sub_14093E6A8(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&stru_140C11680);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v10;
}
