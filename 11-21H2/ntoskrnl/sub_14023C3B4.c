/*
 * XREFs of sub_14023C3B4 @ 0x14023C3B4
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14023C3B4(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // ecx
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r9d
  __int64 result; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r8

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x5A2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 1216;
  ExAcquirePushLockExclusiveEx(a1 + 1216, 0LL);
  if ( *(_QWORD *)(a1 + 1192) && (int)sub_14033D760(KeGetCurrentThread()) > 0 && (!a2 || a2 == *(_QWORD *)(a1 + 1200)) )
  {
    sub_140280754(v12, 2LL, 0LL);
    *(_DWORD *)(a1 + 1208) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 1192), 13);
    v13 = *(_QWORD *)(a1 + 1200);
    if ( !*(_DWORD *)(v13 + 4) )
      KeBugCheckEx(0x34u, 0x5CFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v13 + 152) & 0x20000000) == 0 )
    {
      sub_1402ACD80(*(_QWORD *)(a1 + 1192), 0LL, 0LL, 0LL);
      LOBYTE(v14) = 1;
      sub_14023C5D4(*(_QWORD *)(a1 + 1200), 0x20000000LL, v14);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  CurrentThread = KeGetCurrentThread();
  if ( v4 - qword_140C50630 < 0x8000000000LL )
    v6 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v6 = -1;
  _disable();
  v7 = (char *)CurrentThread + 1696;
  v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = 0LL;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != v8
       || !v7[18]
       || (*(_DWORD *)v7 & 1) != 0
       || *((_DWORD *)v7 + 2) != v6 )
  {
    v9 = (unsigned int)(v9 + 1);
    v7 += 96;
    if ( (unsigned int)v9 >= 6 )
      goto LABEL_19;
  }
  v7[18] = 0;
  if ( v7 )
  {
    if ( *(__int64 *)v7 < 0 )
    {
      *v7 |= 2u;
      _enable();
      sub_14034EE30(v7, v9, v8);
      _disable();
    }
    v10 = *((_DWORD *)v7 + 22);
    *((_DWORD *)v7 + 22) = 0;
    v7[17] = 0;
    *(_QWORD *)v7 = 0LL;
    result = (unsigned __int8)v7[16];
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v10 )
      return sub_14022B568((ULONG_PTR)CurrentThread, v4, v10);
    return result;
  }
LABEL_19:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, v6, 0LL);
  _enable();
  return result;
}
