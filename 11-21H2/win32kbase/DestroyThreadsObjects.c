/*
 * XREFs of DestroyThreadsObjects @ 0x1C002D9E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     DestroyCacheDCEntries @ 0x1C0051A48 (DestroyCacheDCEntries.c)
 *     IsCleanupW32ThreadLocksSupported @ 0x1C00AC4DC (IsCleanupW32ThreadLocksSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbp
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 52) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C029C590 )
    qword_1C029C590(v0);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8, v1, v2);
  if ( *((_QWORD *)v0 + 137) )
  {
    if ( qword_1C029C598 && (int)qword_1C029C598() >= 0 && qword_1C029C5A0 )
      qword_1C029C5A0(*((_QWORD *)v0 + 137), 1LL);
    *((_QWORD *)v0 + 137) = 0LL;
  }
  if ( *((_QWORD *)v0 + 138) )
  {
    if ( qword_1C029C5A8 && (int)qword_1C029C5A8() >= 0 && qword_1C029C5B0 )
      qword_1C029C5B0(*((_QWORD *)v0 + 138), 1LL);
    *((_QWORD *)v0 + 138) = 0LL;
  }
  v3 = giheLast;
  if ( giheLast >= 0LL )
  {
    v4 = 24LL * giheLast;
    v5 = 32LL * giheLast;
    do
    {
      v6 = *((unsigned __int8 *)qword_1C0294B68 + v5 + 24);
      if ( (_BYTE)v6 )
      {
        if ( (*((_BYTE *)&unk_1C024AF4C + 24 * v6) & 2) != 0 )
        {
          if ( (_BYTE)v6 == 2 )
          {
            v7 = *(_QWORD *)((char *)gpKernelHandleTable + v4) + 80LL;
            if ( *(_QWORD *)v7 )
            {
              if ( *(struct tagTHREADINFO **)(*(_QWORD *)v7 + 16LL) == v0 )
                HMAssignmentUnlockWorker(v7);
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)((char *)gpKernelHandleTable + v4 + 8) == v0
               && (*((_BYTE *)qword_1C0294B68 + v5 + 25) & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C0294B68 + v5));
        }
      }
      v5 -= 32LL;
      v4 -= 24LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8);
}
