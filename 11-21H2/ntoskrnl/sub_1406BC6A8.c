/*
 * XREFs of sub_1406BC6A8 @ 0x1406BC6A8
 * Callers:
 *     sub_1406BC564 @ 0x1406BC564 (sub_1406BC564.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BC8C0 @ 0x1406BC8C0 (sub_1406BC8C0.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_1406BC6A8(__int64 a1, _QWORD *a2, __int64 *a3, KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r13
  _QWORD *v9; // r14
  NTSTATUS v10; // ebp
  unsigned int v11; // ebx
  __int64 v12; // rsi
  PVOID *v13; // r14
  unsigned int i; // edi
  __int128 *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r10
  HANDLE *v18; // rbx
  PVOID *v19; // rdi
  __int128 v21; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A0h]
  _QWORD v23[10]; // [rsp+60h] [rbp-98h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset(v23, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&stru_140C49448, 0LL);
  v8 = qword_140C49458;
  v9 = &unk_140C49468;
  v10 = 0;
  v11 = 0;
  v12 = 3LL;
  do
  {
    if ( *a2 < *v9 )
      sub_1406BC8C0(&v23[3 * v11], &qword_140C49440[3 * v11 + 5]);
    ++v11;
    ++a2;
    v9 += 3;
  }
  while ( v11 < 3 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C49448, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C49448);
  sub_1402AFC00((ULONG_PTR)&stru_140C49448);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v13 = (PVOID *)&v23[1];
  for ( i = 0; i < 3; ++i )
  {
    if ( *v13 )
    {
      v10 = ObOpenObjectByPointer(*v13, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)&v21 + i);
      if ( v10 < 0 )
        goto LABEL_14;
      v10 = 0;
    }
    v13 += 3;
  }
  memset(a3, 0, 0x50uLL);
  *a3 = v8;
  v15 = &v21;
  v16 = a3 + 3;
  v17 = 3LL;
  do
  {
    *(v16 - 2) = *(_QWORD *)((char *)v16 + (char *)v23 - (char *)a3 - 24);
    *v16 = *(_QWORD *)((char *)v16 + (char *)&v23[2] - (char *)a3 - 24);
    v16 += 3;
    *(v16 - 4) = *(_QWORD *)v15;
    *(_QWORD *)v15 = 0LL;
    v15 = (__int128 *)((char *)v15 + 8);
    --v17;
  }
  while ( v17 );
LABEL_14:
  v18 = (HANDLE *)&v21;
  v19 = (PVOID *)&v23[1];
  do
  {
    if ( *v19 )
      ObfDereferenceObject(*v19);
    if ( *v18 )
      ObCloseHandle(*v18, a4);
    v19 += 3;
    ++v18;
    --v12;
  }
  while ( v12 );
  return (unsigned int)v10;
}
