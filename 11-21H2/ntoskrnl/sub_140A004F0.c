/*
 * XREFs of sub_140A004F0 @ 0x140A004F0
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
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 */

__int64 __fastcall sub_140A004F0(volatile void *Address, unsigned int *a2)
{
  __int64 result; // rax
  KPROCESSOR_MODE v5; // bl
  __int64 v6; // rcx
  unsigned int v7; // eax
  struct _KTHREAD *v8; // rax
  int v9; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r9
  _DWORD *i; // r10
  unsigned int v14; // eax
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v18 = 0;
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
    v18 = v7;
    if ( !Address )
    {
      v18 = 0;
      v7 = 0;
    }
    if ( v7 )
      ProbeForWrite(Address, v7, 4u);
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v5) )
      return 3221225569LL;
  }
  else
  {
    v18 = Address != 0LL ? 4 * *a2 : 0;
  }
  if ( !v18
    || (result = sub_1406A904C((unsigned __int64)Address, v18, v5, IoWriteAccess, &v15, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v18 >>= 1;
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 242);
    ExAcquireFastMutexUnsafe(&stru_140C11680);
    v9 = sub_14093E520(L"BootOrder", (__int64)&qword_140042090, v15, (int *)&v18, 0LL);
    ExReleaseFastMutexUnsafe(&stru_140C11680);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v9 < 0 )
    {
      if ( v9 == -1073741568 )
      {
        v18 = 0;
        v9 = 0;
      }
    }
    else
    {
      v10 = v18 >> 1;
      v11 = (v18 >> 1) - 1;
      v12 = (unsigned __int16 *)(v15 + 2 * v11);
      for ( i = (_DWORD *)(v15 + 4 * v11); v10; --v10 )
        *i-- = *v12--;
    }
    v14 = 2 * v18;
    v18 *= 2;
    if ( P )
    {
      sub_140231450((struct _MDL *)P);
      v14 = v18;
    }
    *a2 = v14 >> 2;
    return (unsigned int)v9;
  }
  return result;
}
