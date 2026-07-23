/*
 * XREFs of sub_14025A408 @ 0x14025A408
 * Callers:
 *     sub_14026E218 @ 0x14026E218 (sub_14026E218.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14025A408(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  struct _KTHREAD *v7; // rsi
  unsigned int v8; // ecx
  char *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r9d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64)(a1 - qword_140C4F608) >> 21;
  v5 = *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1368LL);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 752LL, 0LL);
  RtlClearBitsEx(v5 + 760, v3, a2);
  if ( v3 < *(_QWORD *)(v5 + 776) )
    *(_QWORD *)(v5 + 776) = v3;
  *(_DWORD *)(v5 + 800) -= a2;
  v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 752LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)(v6 - qword_140C50630) < 0x8000000000LL )
    v8 = sub_140287F30(*((_QWORD *)v7 + 23));
  else
    v8 = -1;
  _disable();
  v9 = (char *)v7 + 1696;
  v10 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v11 = 0LL;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != v10
       || !v9[18]
       || (*(_DWORD *)v9 & 1) != 0
       || *((_DWORD *)v9 + 2) != v8 )
  {
    v11 = (unsigned int)(v11 + 1);
    v9 += 96;
    if ( (unsigned int)v11 >= 6 )
      goto LABEL_21;
  }
  v9[18] = 0;
  if ( v9 )
  {
    if ( *(__int64 *)v9 < 0 )
    {
      *v9 |= 2u;
      _enable();
      sub_14034EE30(v9, v11, v10);
      _disable();
    }
    v12 = *((_DWORD *)v9 + 22);
    *((_DWORD *)v9 + 22) = 0;
    v9[17] = 0;
    *(_QWORD *)v9 = 0LL;
    result = (unsigned __int8)v9[16];
    *((_BYTE *)v7 + 792) |= 1 << result;
    _enable();
    if ( v12 )
      result = sub_14022B568((ULONG_PTR)v7, v6, v12);
    goto LABEL_17;
  }
LABEL_21:
  result = *((unsigned int *)v7 + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, v8, 0LL);
  _enable();
LABEL_17:
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    result = (__int64)CurrentThread + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
