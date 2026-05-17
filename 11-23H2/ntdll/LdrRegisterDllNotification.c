/*
 * XREFs of LdrRegisterDllNotification @ 0x180001F30
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180127DD0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v9 = (__int64 *)off_1801813D0[0];
  if ( *(_UNKNOWN ***)off_1801813D0[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpDllNotificationList;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_1801813D0[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  result = 0LL;
  *a4 = v8;
  return result;
}
