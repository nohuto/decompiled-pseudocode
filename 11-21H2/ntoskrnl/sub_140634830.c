/*
 * XREFs of sub_140634830 @ 0x140634830
 * Callers:
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 */

__int64 __fastcall sub_140634830(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // r9d

  result = *(unsigned int *)(a1 + 1168);
  if ( (_DWORD)result )
  {
    sub_140634D24();
    v3 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    sub_1406355B0(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      v5 = -1;
    else
      v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v6 = (__int64)CurrentThread + 1696;
    v7 = 0;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v6 + 18)
         || (*(_DWORD *)v6 & 1) != 0
         || *(_DWORD *)(v6 + 8) != v5 )
    {
      ++v7;
      v6 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_13;
    }
    *(_BYTE *)(v6 + 18) = 0;
    if ( !v6 )
    {
LABEL_13:
      result = *((unsigned int *)CurrentThread + 30);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v5, 0LL);
      _enable();
      return result;
    }
    if ( *(__int64 *)v6 < 0 )
    {
      *(_BYTE *)v6 |= 2u;
      _enable();
      sub_14034EE30(v6);
      _disable();
    }
    v8 = *(_DWORD *)(v6 + 88);
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 17) = 0;
    *(_QWORD *)v6 = 0LL;
    result = *(unsigned __int8 *)(v6 + 16);
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v8 )
      return sub_14022B568((ULONG_PTR)CurrentThread, v3, v8);
  }
  return result;
}
