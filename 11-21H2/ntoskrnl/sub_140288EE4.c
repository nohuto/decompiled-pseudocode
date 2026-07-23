/*
 * XREFs of sub_140288EE4 @ 0x140288EE4
 * Callers:
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_140288EE4(__int64 a1, char a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG_PTR v9; // rsi
  struct _KTHREAD *v10; // rdi
  unsigned int v11; // ecx
  char *v12; // rbx
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x514uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 1192) != CurrentThread )
      return (char)v3;
    v9 = a1 + 1216;
    ExAcquirePushLockExclusiveEx(a1 + 1216, 0LL);
    sub_14028F698(CurrentThread, *(unsigned int *)(a1 + 1212));
    v15 = *(unsigned int *)(a1 + 1208);
    if ( (_DWORD)v15 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v15);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v15) = 1;
      sub_1402ACD80(CurrentThread, v15, 0LL, 0LL);
      sub_14023C5D4((__int64)a3, 0x20000000, 0);
    }
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_DWORD *)(a1 + 1212) = 5;
    *(_DWORD *)(a1 + 1208) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( v9 - qword_140C50630 < 0x8000000000LL )
      v16 = sub_140287F30(*((_QWORD *)v10 + 23));
    else
      v16 = -1;
    _disable();
    v12 = (char *)v10 + 1696;
    v13 = 0LL;
    while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !v12[18]
         || (*(_DWORD *)v12 & 1) != 0
         || *((_DWORD *)v12 + 2) != v16 )
    {
      v13 = (unsigned int)(v13 + 1);
      v12 += 96;
      if ( (unsigned int)v13 >= 6 )
        goto LABEL_47;
    }
    v12[18] = 0;
    if ( v12 )
      goto LABEL_24;
LABEL_47:
    LODWORD(v3) = *((_DWORD *)v10 + 30);
    if ( ((unsigned int)v3 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, v16, 0LL);
    goto LABEL_45;
  }
  LOBYTE(v3) = sub_1402768B4(a1);
  if ( (_BYTE)v3 && !*(_QWORD *)(v7 + 1192) && !*(_DWORD *)(v8 + 516) && (*(_DWORD *)(v8 + 152) & 0x10000) == 0 )
  {
    v9 = v7 + 1216;
    ExAcquirePushLockExclusiveEx(v7 + 1216, 0LL);
    if ( sub_1402768B4(a1) && !*(_QWORD *)(a1 + 1192) && !a3[129] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 1192) = CurrentThread;
      *(_QWORD *)(a1 + 1200) = a3;
      *(_DWORD *)(a1 + 1212) = sub_14028F698(CurrentThread, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( v9 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)v10 + 23));
    else
      v11 = -1;
    _disable();
    v12 = (char *)v10 + 1696;
    v13 = 0LL;
    while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !v12[18]
         || (*(_DWORD *)v12 & 1) != 0
         || *((_DWORD *)v12 + 2) != v11 )
    {
      v13 = (unsigned int)(v13 + 1);
      v12 += 96;
      if ( (unsigned int)v13 >= 6 )
        goto LABEL_44;
    }
    v12[18] = 0;
    if ( v12 )
    {
LABEL_24:
      if ( *(__int64 *)v12 < 0 )
      {
        *v12 |= 2u;
        _enable();
        sub_14034EE30(v12, v13, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v14 = *((_DWORD *)v12 + 22);
      *((_DWORD *)v12 + 22) = 0;
      v12[17] = 0;
      *(_QWORD *)v12 = 0LL;
      LOBYTE(v3) = v12[16];
      *((_BYTE *)v10 + 792) |= 1 << (char)v3;
      _enable();
      if ( v14 )
        LOBYTE(v3) = sub_14022B568((ULONG_PTR)v10, v9, v14);
      return (char)v3;
    }
LABEL_44:
    LODWORD(v3) = *((_DWORD *)v10 + 30);
    if ( ((unsigned int)v3 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, v11, 0LL);
LABEL_45:
    _enable();
  }
  return (char)v3;
}
