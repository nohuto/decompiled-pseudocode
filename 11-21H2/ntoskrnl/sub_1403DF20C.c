/*
 * XREFs of sub_1403DF20C @ 0x1403DF20C
 * Callers:
 *     sub_1406C8888 @ 0x1406C8888 (sub_1406C8888.c)
 *     sub_1409AD180 @ 0x1409AD180 (sub_1409AD180.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall sub_1403DF20C(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v9; // r8d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  CurrentThread = KeGetCurrentThread();
  if ( a2 - qword_140C50630 >= 0x8000000000LL )
    v5 = -1;
  else
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v6 = (__int64)CurrentThread + 1696;
  v7 = 0;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != (a2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v6 + 18)
       || (*(_DWORD *)v6 & 1) != 0
       || *(_DWORD *)(v6 + 8) != v5 )
  {
    ++v7;
    v6 += 96LL;
    if ( v7 >= 6 )
      goto LABEL_11;
  }
  *(_BYTE *)(v6 + 18) = 0;
  if ( !v6 )
  {
LABEL_11:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2, v5, 0LL);
    _enable();
    return sub_1402AC800(a1);
  }
  if ( *(__int64 *)v6 < 0 )
  {
    *(_BYTE *)v6 |= 2u;
    _enable();
    sub_14034EE30(v6);
    _disable();
  }
  v9 = *(_DWORD *)(v6 + 88);
  *(_DWORD *)(v6 + 88) = 0;
  *(_BYTE *)(v6 + 17) = 0;
  *(_QWORD *)v6 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v6 + 16);
  _enable();
  if ( v9 )
    sub_14022B568((ULONG_PTR)CurrentThread, a2, v9);
  return sub_1402AC800(a1);
}
