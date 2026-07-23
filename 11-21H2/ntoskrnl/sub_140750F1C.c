/*
 * XREFs of sub_140750F1C @ 0x140750F1C
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140750F1C(char **a1, char a2)
{
  __int64 v3; // rax
  __int64 (**v4)[4]; // r14
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  size_t v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rcx
  __int64 Pool2; // rax
  char v17; // [rsp+50h] [rbp+8h]

  v17 = 0;
  v3 = *((int *)a1 + 6);
  if ( (unsigned int)v3 > 0x15 )
  {
    v10 = -1073741811;
    goto LABEL_11;
  }
  v4 = &off_140C03A40 + 13 * v3;
  if ( a2 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      v15 = *a1;
      if ( &v14[(_QWORD)v15] > (char *)0x7FFFFFFF0000LL || &v14[(_QWORD)v15] < v15 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v4[2] & 1) != 0 && !sub_14066D068(*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 68) + 2170LL), 0x61u) )
    {
      v10 = -1073741790;
      goto LABEL_11;
    }
  }
  v5 = *((_DWORD *)a1 + 7);
  v17 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F608, 0LL);
  v7 = (unsigned __int64)a1[1];
  if ( (v5 & 1) == 0 )
  {
    v8 = 0LL;
    v9 = 4096LL;
    if ( v7 < 0x1000 )
      v9 = (size_t)a1[1];
    v4[12] = (__int64 (*)[4])v7;
    v4[11] = (__int64 (*)[4])v9;
LABEL_7:
    if ( v4[10] || (Pool2 = ExAllocatePool2(64LL, 4096LL, 544040269LL), (v4[10] = (__int64 (*)[4])Pool2) != 0LL) )
    {
      v4[9] = (__int64 (*)[4])sub_1402F5718();
      if ( v9 )
        memmove((char *)v4[10] + v8, *a1, v9);
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_11;
  }
  v9 = (size_t)a1[1];
  if ( !v7 )
  {
LABEL_32:
    v10 = -1073741811;
    goto LABEL_11;
  }
  v8 = (unsigned __int64)a1[2];
  v12 = v8 + v7;
  v13 = -1LL;
  if ( v12 >= v8 )
    v13 = v12;
  v10 = v12 < v8 ? 0xC0000095 : 0;
  if ( v12 >= v8 )
  {
    if ( v13 <= (unsigned __int64)v4[12] )
    {
      if ( v8 >= 0x1000 )
      {
        v9 = 0LL;
      }
      else if ( v13 > 0x1000 )
      {
        v9 = 4096 - v8;
      }
      goto LABEL_7;
    }
    goto LABEL_32;
  }
LABEL_11:
  if ( v17 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F608, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1F608);
    sub_1402AFC00((ULONG_PTR)&qword_140C1F608);
    KeLeaveCriticalRegion();
  }
  return v10;
}
