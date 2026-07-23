/*
 * XREFs of sub_1409FE284 @ 0x1409FE284
 * Callers:
 *     sub_1406DCB10 @ 0x1406DCB10 (sub_1406DCB10.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FB890 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 */

__int64 __fastcall sub_1409FE284(
        const WCHAR *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  P = 0LL;
  v12 = 0LL;
  if ( !a4 || (result = sub_1406A904C(a3, a4, a6, IoReadAccess, &v12, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    v11 = sub_14093E830(a1, a2, v12, a4, a5);
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( P )
      sub_140231450((struct _MDL *)P);
    return v11;
  }
  return result;
}
