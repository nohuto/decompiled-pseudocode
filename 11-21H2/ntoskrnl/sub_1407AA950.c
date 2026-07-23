/*
 * XREFs of sub_1407AA950 @ 0x1407AA950
 * Callers:
 *     sub_140666C64 @ 0x140666C64 (sub_140666C64.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x140249460 (PsGetProcessJob.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405E0448 @ 0x1405E0448 (sub_1405E0448.c)
 *     sub_14074D458 @ 0x14074D458 (sub_14074D458.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 */

__int64 __fastcall sub_1407AA950(__int64 *a1)
{
  __int64 v1; // rbp
  ULONG_PTR v2; // rsi
  int v4; // r13d
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 ProcessJob; // rax
  __int16 v14; // cx
  __int16 v15; // cx

  v1 = *a1;
  v2 = a1[1];
  v4 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v7 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *v5;
    goto LABEL_6;
  }
  if ( v8 != 1 )
  {
    v9 = v5[2];
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v9 = *v5;
  v10 = v5[1];
LABEL_7:
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v10 && !ObReferenceObjectSafe(v10) )
    v10 = 0LL;
  if ( !v9 || !v10 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    sub_1402AFC00((ULONG_PTR)(v5 - 2));
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
    goto LABEL_49;
  }
  ExAcquirePushLockSharedEx(v9 + 352, 0LL);
  if ( v10 != v9 )
    ExAcquirePushLockSharedEx(v10 + 352, 0LL);
  if ( (*(_DWORD *)(v9 + 416) & 0x20) != 0
    || (*(_DWORD *)(v10 + 416) & 0x20) != 0
    || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
  {
    sub_14074D458((__int64)v5, (signed __int64 *)v9, (signed __int64 *)v10);
LABEL_49:
    sub_1407A7628(v2);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v11 = *(_QWORD *)(v9 + 24), (v11 & 1) == 0)
    && v11
    && (ProcessJob = PsGetProcessJob(v11)) != 0
    && (unsigned int)sub_1405E0448(ProcessJob) )
  {
    sub_14074D458((__int64)v5, (signed __int64 *)v9, (signed __int64 *)v10);
    sub_1407A7628(v2);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v9 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v9 + 272) )
    {
      *(_QWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 242) = *((_WORD *)a1 + 26);
      *(_WORD *)(v2 + 240) = *((_WORD *)a1 + 26) - 40;
      v14 = *((_WORD *)a1 + 27);
      *(_WORD *)(v2 + 244) = v14;
      *(_WORD *)(v2 + 246) = *((_WORD *)a1 + 28);
      *(_OWORD *)(v2 + 248) = *(_OWORD *)((char *)CurrentThread + 1224);
      if ( (v4 & 0x10000) != 0 )
      {
        *(_DWORD *)(v2 + 40) |= 0x200u;
        v15 = v14 & 0xDFFF;
      }
      else
      {
        *(_DWORD *)(v2 + 40) &= ~0x200u;
        v15 = v14 | 0x2000;
      }
      *(_WORD *)(v2 + 244) = v15;
      sub_1407AB750(v2, v1);
      *(_DWORD *)(v2 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
      *(_QWORD *)(v2 + 120) = *(_QWORD *)(v10 + 56);
      *(_QWORD *)(v2 + 184) = v5;
      *(_QWORD *)(v2 + 192) = *v5;
      if ( v10 != v9 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        sub_1402AFC00(v10 + 352);
      }
      if ( (v4 & 0x20000) != 0 )
      {
        *(_DWORD *)(v2 + 40) &= ~0x100u;
        *(_WORD *)(v2 - 30) += 2;
        *(_QWORD *)(v2 + 32) = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)CurrentThread + 175, v2);
      }
      a1[4] = v9;
      a1[2] = (__int64)v5;
      sub_1407AACC0(a1);
      ObfDereferenceObject((PVOID)v10);
      return 0LL;
    }
    else
    {
      sub_14074D458((__int64)v5, (signed __int64 *)v9, (signed __int64 *)v10);
      sub_1407A7628(v2);
      return 3221225507LL;
    }
  }
  else
  {
    sub_14074D458((__int64)v5, (signed __int64 *)v9, (signed __int64 *)v10);
    sub_1407A7628(v2);
    return 3221227271LL;
  }
}
