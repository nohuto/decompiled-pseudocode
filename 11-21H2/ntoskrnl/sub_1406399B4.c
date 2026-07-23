/*
 * XREFs of sub_1406399B4 @ 0x1406399B4
 * Callers:
 *     sub_1409AD704 @ 0x1409AD704 (sub_1409AD704.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1409F8D78 @ 0x1409F8D78 (sub_1409F8D78.c)
 */

_QWORD *__fastcall sub_1406399B4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v3; // rdi
  __int64 v4; // r14
  struct _KTHREAD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // r8d
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v5 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v6 = -1;
  else
    v6 = sub_140287F30(*((_QWORD *)v5 + 23));
  _disable();
  v7 = (__int64)v5 + 1696;
  v8 = 0;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != v6 )
  {
    ++v8;
    v7 += 96LL;
    if ( v8 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_15:
    if ( (*((_DWORD *)v5 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, v6, 0LL);
    _enable();
    goto LABEL_23;
  }
  if ( *(__int64 *)v7 < 0 )
  {
    *(_BYTE *)v7 |= 2u;
    _enable();
    sub_14034EE30(v7);
    _disable();
  }
  v9 = *(_DWORD *)(v7 + 88);
  *(_DWORD *)(v7 + 88) = 0;
  *(_BYTE *)(v7 + 17) = 0;
  *(_QWORD *)v7 = 0LL;
  *((_BYTE *)v5 + 792) |= 1 << *(_BYTE *)(v7 + 16);
  _enable();
  if ( v9 )
    sub_14022B568((ULONG_PTR)v5, v3, v9);
LABEL_23:
  result = sub_1402AC800((__int64)CurrentThread);
  if ( v4 )
    return (_QWORD *)sub_1409F8D78(a1, v4);
  return result;
}
