/*
 * XREFs of RtlpWnfNotificationThread @ 0x18004C700
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2DA0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800EA0B8 (RtlpWnfCalculateAndSetNextTimer.c)
 */

_UNKNOWN **__fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 Heap; // rbx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v11[0] = -50000000LL;
  v10 = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !qword_180187E00 )
    return result;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !Heap )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4144LL);
      if ( !Heap )
        break;
    }
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, __int64, int))NtGetCompleteWnfStateSubscription)(
                            v4,
                            &v10,
                            v5,
                            v6,
                            Heap,
                            4144);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -2147483622 )
        goto LABEL_9;
      break;
    }
    v6 = RtlpWnfProcessCurrentDescriptor(Heap, 0LL);
    if ( v6 == 259 )
    {
      v4 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v6 = 0;
LABEL_15:
      Heap = 0LL;
    }
    else
    {
      v4 = Heap + 8;
      v10 = *(_QWORD *)Heap;
      v5 = *(_DWORD *)(Heap + 24);
      if ( v6 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        goto LABEL_15;
      }
    }
  }
  result = (_UNKNOWN **)TpSetWaitEx(a3, a2, v11, 0LL);
LABEL_9:
  if ( Heap )
    return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return result;
}
