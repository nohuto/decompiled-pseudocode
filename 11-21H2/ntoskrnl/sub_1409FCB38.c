/*
 * XREFs of sub_1409FCB38 @ 0x1409FCB38
 * Callers:
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 */

__int64 __fastcall sub_1409FCB38(
        const WCHAR *a1,
        __int64 a2,
        unsigned __int64 a3,
        int *a4,
        _DWORD *a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !*a4 || (result = sub_1406A904C(a3, *a4, a6, IoWriteAccess, &v13, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    v11 = sub_14093E520(a1, a2, v13, a4, a5);
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( P )
      sub_140231450((struct _MDL *)P);
    return v11;
  }
  return result;
}
