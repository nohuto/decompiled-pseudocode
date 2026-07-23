/*
 * XREFs of sub_140361290 @ 0x140361290
 * Callers:
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall sub_140361290(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // bp
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // ecx
  int v17; // r9d

  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a3;
  _disable();
  v9 = *((unsigned __int8 *)CurrentThread + 792);
  v10 = -1;
  if ( *((_BYTE *)CurrentThread + 792) || (v9 = sub_14029F6A8(v3, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v11, v9);
    *((_BYTE *)CurrentThread + 792) = v9 & ~(1 << v11);
    _enable();
    v5 = (__int64)CurrentThread + 96 * v11 + 1696;
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      v12 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v12 = -1;
    *(_DWORD *)(v5 + 8) = v12;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    sub_14029F120((unsigned __int64 *)v3, v5, v3);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v6);
  *(_DWORD *)(a1 + 36) += v6;
  v13 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v14 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    v10 = sub_140287F30(*((_QWORD *)v14 + 23));
  _disable();
  v15 = (__int64)v14 + 1696;
  v16 = 0;
  while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v15 + 18)
       || (*(_DWORD *)v15 & 1) != 0
       || *(_DWORD *)(v15 + 8) != v10 )
  {
    ++v16;
    v15 += 96LL;
    if ( v16 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(v15 + 18) = 0;
  if ( v15 )
  {
    if ( *(__int64 *)v15 < 0 )
    {
      *(_BYTE *)v15 |= 2u;
      _enable();
      sub_14034EE30(v15);
      _disable();
    }
    v17 = *(_DWORD *)(v15 + 88);
    *(_DWORD *)(v15 + 88) = 0;
    *(_BYTE *)(v15 + 17) = 0;
    *(_QWORD *)v15 = 0LL;
    *((_BYTE *)v14 + 792) |= 1 << *(_BYTE *)(v15 + 16);
    _enable();
    if ( v17 )
      sub_14022B568((ULONG_PTR)v14, v3, v17);
    return v13;
  }
LABEL_25:
  if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v3, v10, 0LL);
  _enable();
  return v13;
}
