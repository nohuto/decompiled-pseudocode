/*
 * XREFs of RtlpWnfNotificationThread @ 0x18005A6A0
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180092468 (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A5F40 (NtGetCompleteWnfStateSubscription.c)
 */

_UNKNOWN **__fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 Heap; // rbx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v11[0] = -50000000LL;
  v10 = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !qword_18017AAE0 )
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
        goto LABEL_12;
      break;
    }
    v6 = RtlpWnfProcessCurrentDescriptor(Heap, 0LL);
    if ( v6 == 259 )
    {
      v4 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v6 = 0;
LABEL_8:
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
        goto LABEL_8;
      }
    }
  }
  result = (_UNKNOWN **)TpSetWaitEx(a3, a2, v11, 0LL);
LABEL_12:
  if ( Heap )
    return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return result;
}
