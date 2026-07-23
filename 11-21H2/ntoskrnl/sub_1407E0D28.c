/*
 * XREFs of sub_1407E0D28 @ 0x1407E0D28
 * Callers:
 *     sub_1407E0CE4 @ 0x1407E0CE4 (sub_1407E0CE4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 */

void __fastcall sub_1407E0D28(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // r13
  volatile signed __int64 *v3; // rsi
  const void *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _QWORD *v14; // [rsp+60h] [rbp+8h]
  const void *v15; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (_QWORD *)(a1 + 2056);
  --*((_WORD *)CurrentThread + 242);
  v3 = (volatile signed __int64 *)(a1 + 2048);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 2048, 0LL);
  v14 = v2;
  while ( (_QWORD *)*v2 != v2 )
  {
    v7 = *v2 - 80LL;
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v4 == (const void *)v7 )
      v9 = v6;
    v5 = 0;
    if ( v4 == (const void *)v7 )
      v5 = v8;
    v10 = *v2 - 80LL;
    if ( v4 == (const void *)v7 )
      v10 = (__int64)v4;
    v15 = (const void *)v10;
    v11 = v7 & -(__int64)(sub_1407A7F84(v7) != 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    if ( v9 )
    {
      v6 = v9;
      if ( v5 > 0x64 )
      {
        v13 = 0xFFFFF780000003B0uLL;
        v12 = MEMORY[0xFFFFF780000003B0];
        v2 = v14;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v9 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v15);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v5 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v13 = 0xFFFFF780000003B0uLL;
      v2 = v14;
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v11 )
    {
      sub_140967328(v11, v12, v13);
      sub_1407A5A54(v11, 1);
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v4 = v15;
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  sub_1402AFC00((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
