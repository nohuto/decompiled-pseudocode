/*
 * XREFs of RaidAdapterRemoveZombieChildren @ 0x1C0037714
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C00350E8 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C0036930 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveZombieChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD **v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD **)(a1 + 232);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 224), &LockHandle);
    v5 = *v2;
    if ( *v2 == v2 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v2 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v7;
      v6 = v5 - 7;
      v7[1] = v2;
      --*(_DWORD *)(a1 + 248);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v6 )
      break;
    if ( a2 )
    {
      result = a2(v6);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
