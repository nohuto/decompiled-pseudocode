/*
 * XREFs of sub_140A00A80 @ 0x140A00A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140A00A80(volatile void *Address, unsigned int *a2)
{
  __int64 result; // rax
  KPROCESSOR_MODE v5; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  int EnvironmentVariable; // edi
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned __int16 *v13; // r9
  _DWORD *i; // r10
  unsigned int v15; // ebx
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v19 = 0;
  P = 0LL;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *((_BYTE *)CurrentThread + 562);
  if ( v5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *a2;
    v19 = v7;
    v8 = v7;
    if ( !Address )
    {
      v7 = 0;
      v19 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v5) )
      return 3221225569LL;
  }
  else
  {
    v7 = Address != 0LL ? 4 * *a2 : 0;
    v19 = v7;
  }
  if ( !v7
    || (result = sub_1406A904C((unsigned __int64)Address, v7, v5, IoWriteAccess, &v16, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v19 = v7 >> 1;
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (int)&qword_140042080, v16, &v19, 0LL);
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v19 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v11 = v19 >> 1;
      v12 = (v19 >> 1) - 1;
      v13 = (unsigned __int16 *)(v16 + 2 * v12);
      for ( i = (_DWORD *)(v16 + 4 * v12); v11; --v11 )
        *i-- = *v13--;
    }
    v15 = 2 * v19;
    v19 *= 2;
    if ( P )
      sub_140231450((struct _MDL *)P);
    *a2 = v15 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
