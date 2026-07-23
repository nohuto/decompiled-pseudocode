/*
 * XREFs of sub_140583BB8 @ 0x140583BB8
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140583BB8(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 result; // rax
  int v7; // r9d

  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)(v1 - qword_140C50630) >= 0x8000000000LL )
    v3 = -1;
  else
    v3 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v4 = (__int64)CurrentThread + 1696;
  v5 = 0;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v4 + 18)
       || (*(_DWORD *)v4 & 1) != 0
       || *(_DWORD *)(v4 + 8) != v3 )
  {
    ++v5;
    v4 += 96LL;
    if ( v5 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v4 + 18) = 0;
  if ( !v4 )
  {
LABEL_12:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, v3, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v4 < 0 )
  {
    *(_BYTE *)v4 |= 2u;
    _enable();
    sub_14034EE30(v4);
    _disable();
  }
  v7 = *(_DWORD *)(v4 + 88);
  *(_DWORD *)(v4 + 88) = 0;
  *(_BYTE *)(v4 + 17) = 0;
  *(_QWORD *)v4 = 0LL;
  result = *(unsigned __int8 *)(v4 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v7 )
    return sub_14022B568((ULONG_PTR)CurrentThread, v1, v7);
  return result;
}
