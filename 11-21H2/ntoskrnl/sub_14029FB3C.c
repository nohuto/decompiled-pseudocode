/*
 * XREFs of sub_14029FB3C @ 0x14029FB3C
 * Callers:
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14029FB3C(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rbp
  char *v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r9d

  v4 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v5 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  v8 = *((unsigned __int8 *)CurrentThread + 792);
  v9 = -1;
  if ( *((_BYTE *)CurrentThread + 792) || (v8 = sub_14029F6A8(v5, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, v8);
    *((_BYTE *)CurrentThread + 792) = v8 & ~(1 << v10);
    _enable();
    v7 = (__int64)CurrentThread + 96 * v10 + 1696;
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v11 = -1;
    *(_DWORD *)(v7 + 8) = v11;
    *(_QWORD *)v7 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    sub_14029F120((unsigned __int64 *)v5, v7, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v4
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v4, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v13 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v4;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v4;
    v13 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  v14 = KeGetCurrentThread();
  if ( v5 - qword_140C50630 < 0x8000000000LL )
    v9 = sub_140287F30(*((_QWORD *)v14 + 23));
  _disable();
  v15 = (char *)v14 + 1696;
  v16 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  v17 = 0;
  while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != v16
       || !v15[18]
       || (*(_DWORD *)v15 & 1) != 0
       || *((_DWORD *)v15 + 2) != v9 )
  {
    ++v17;
    v15 += 96;
    if ( v17 >= 6 )
      goto LABEL_29;
  }
  v15[18] = 0;
  if ( v15 )
  {
    if ( *(__int64 *)v15 < 0 )
    {
      *v15 |= 2u;
      _enable();
      sub_14034EE30(v15, v16, a3);
      _disable();
    }
    v18 = *((_DWORD *)v15 + 22);
    *((_DWORD *)v15 + 22) = 0;
    v15[17] = 0;
    *(_QWORD *)v15 = 0LL;
    *((_BYTE *)v14 + 792) |= 1 << v15[16];
    _enable();
    if ( v18 )
      sub_14022B568((ULONG_PTR)v14, v5, v18);
    return v13;
  }
LABEL_29:
  if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v5, v9, 0LL);
  _enable();
  return v13;
}
