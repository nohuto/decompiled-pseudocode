/*
 * XREFs of sub_140634D24 @ 0x140634D24
 * Callers:
 *     sub_140634830 @ 0x140634830 (sub_140634830.c)
 *     sub_140634F90 @ 0x140634F90 (sub_140634F90.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063499C @ 0x14063499C (sub_14063499C.c)
 *     sub_140635144 @ 0x140635144 (sub_140635144.c)
 *     sub_14063566C @ 0x14063566C (sub_14063566C.c)
 *     sub_140798BE4 @ 0x140798BE4 (sub_140798BE4.c)
 */

__int64 __fastcall sub_140634D24(__int64 a1)
{
  ULONG_PTR v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // edx
  __int64 result; // rax
  int v14; // r9d

  v1 = a1 + 1144;
  ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
  sub_14063566C(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)sub_140635144(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)sub_14063499C(a1, (__int64)v4) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
      sub_140798BE4(a1, v5, 0LL);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1272);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1272) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1272) = v8;
    }
    else
    {
      sub_140798BE4(a1, v4, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( v1 - qword_140C50630 >= 0x8000000000LL )
    v10 = -1;
  else
    v10 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v11 = (__int64)CurrentThread + 1696;
  v12 = 0;
  while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v11 + 18)
       || (*(_DWORD *)v11 & 1) != 0
       || *(_DWORD *)(v11 + 8) != v10 )
  {
    ++v12;
    v11 += 96LL;
    if ( v12 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(v11 + 18) = 0;
  if ( !v11 )
  {
LABEL_23:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, v10, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v11 < 0 )
  {
    *(_BYTE *)v11 |= 2u;
    _enable();
    sub_14034EE30(v11);
    _disable();
  }
  v14 = *(_DWORD *)(v11 + 88);
  *(_DWORD *)(v11 + 88) = 0;
  *(_BYTE *)(v11 + 17) = 0;
  *(_QWORD *)v11 = 0LL;
  result = *(unsigned __int8 *)(v11 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v14 )
    return sub_14022B568((ULONG_PTR)CurrentThread, v1, v14);
  return result;
}
