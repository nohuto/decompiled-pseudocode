/*
 * XREFs of RaidAdapterRemoveNormalChildren @ 0x1C00375F4
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C00350E8 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C0036930 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     StorRemoveDictionary @ 0x1C001805C (StorRemoveDictionary.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveNormalChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD **v2; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rcx
  KIRQL v8; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_QWORD **)(a1 + 152);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
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
      --*(_DWORD *)(a1 + 168);
      v8 = RaidAdapterAcquireInterruptLock(a1);
      StorRemoveDictionary(
        (_DWORD *)(a1 + 176),
        (unsigned __int8)BYTE2(*((_DWORD *)v6 + 24)) | (unsigned __int64)(((unsigned __int8)BYTE1(*((_DWORD *)v6 + 24)) | ((unsigned __int8)*((_DWORD *)v6 + 24) << 8)) << 8));
      RaidAdapterReleaseInterruptLock(a1, v8);
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
