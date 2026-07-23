/*
 * XREFs of sub_1402583CC @ 0x1402583CC
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402583CC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  void *v3; // rbp
  unsigned int v6; // r15d
  struct _KTHREAD *v7; // rdi
  char *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // r9d
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
  v6 = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F110);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F110 - qword_140C50630 < 0x8000000000LL )
    v6 = sub_140287F30(*((_QWORD *)v7 + 23));
  _disable();
  v8 = (char *)v7 + 1696;
  v9 = (unsigned __int64)&qword_140C4F110 & 0x7FFFFFFFFFFFFFFCLL;
  v10 = 0;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != v9
       || !v8[18]
       || (*(_DWORD *)v8 & 1) != 0
       || *((_DWORD *)v8 + 2) != v6 )
  {
    ++v10;
    v8 += 96;
    if ( v10 >= 6 )
      goto LABEL_24;
  }
  v8[18] = 0;
  if ( v8 )
  {
    if ( *(__int64 *)v8 < 0 )
    {
      *v8 |= 2u;
      _enable();
      sub_14034EE30(v8, v9, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v11 = *((_DWORD *)v8 + 22);
    *((_DWORD *)v8 + 22) = 0;
    v8[17] = 0;
    *(_QWORD *)v8 = 0LL;
    *((_BYTE *)v7 + 792) |= 1 << v8[16];
    _enable();
    if ( v11 )
      sub_14022B568((ULONG_PTR)v7, (__int64)&qword_140C4F110, v11);
    goto LABEL_17;
  }
LABEL_24:
  if ( (*((_DWORD *)v7 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C4F110, v6, 0LL);
  _enable();
LABEL_17:
  v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
