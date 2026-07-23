/*
 * XREFs of sub_1405C9D00 @ 0x1405C9D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140996FB8 @ 0x140996FB8 (sub_140996FB8.c)
 */

__int64 __fastcall sub_1405C9D00(__int64 a1)
{
  ULONG_PTR v1; // rdi
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // edx
  __int64 result; // rax
  int v9; // r8d

  v1 = a1 + 136;
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  if ( *(_BYTE *)(a1 + 152) )
  {
    v3 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 148) = 0;
    *(_BYTE *)(a1 + 152) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 192), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( v1 - qword_140C50630 >= 0x8000000000LL )
    v5 = 0xFFFFFFFFLL;
  else
    v5 = (unsigned int)sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v6 = (__int64)CurrentThread + 1696;
  v7 = 0;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v6 + 18)
       || (*(_DWORD *)v6 & 1) != 0
       || *(_DWORD *)(v6 + 8) != (_DWORD)v5 )
  {
    ++v7;
    v6 += 96LL;
    if ( v7 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(v6 + 18) = 0;
  if ( !v6 )
  {
LABEL_14:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, (unsigned int)v5, 0LL);
    _enable();
    goto LABEL_22;
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
  result = *(unsigned __int8 *)(v6 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v9 )
    result = sub_14022B568((ULONG_PTR)CurrentThread, v1, v9);
LABEL_22:
  if ( v3 )
    return sub_140996FB8(v5, v3);
  return result;
}
