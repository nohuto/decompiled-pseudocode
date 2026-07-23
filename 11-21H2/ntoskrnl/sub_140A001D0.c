/*
 * XREFs of sub_140A001D0 @ 0x140A001D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14093E3C0 @ 0x14093E3C0 (sub_14093E3C0.c)
 */

__int64 __fastcall sub_140A001D0(int a1, volatile void *a2, unsigned int *a3)
{
  __int64 result; // rax
  KPROCESSOR_MODE v7; // bl
  __int64 v8; // rcx
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v13 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v7 = *((_BYTE *)CurrentThread + 562);
  if ( v7 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a3;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *a3;
    v12 = *a3;
    if ( !a2 )
    {
      v12 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(a2, v9, 4u);
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v7) )
      return 3221225569LL;
  }
  else
  {
    v12 = a2 != 0LL ? *a3 : 0;
  }
  if ( !v12
    || (result = sub_1406A904C((unsigned __int64)a2, v12, v7, IoWriteAccess, &v13, (struct _MDL **)&P), (int)result >= 0) )
  {
    v10 = KeGetCurrentThread();
    --*((_WORD *)v10 + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    v11 = sub_14093E3C0(a1, 0LL, v13, &v12);
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( P )
      sub_140231450((struct _MDL *)P);
    *a3 = v12;
    return v11;
  }
  return result;
}
