/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140371578
 * Callers:
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDDC (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1407F7634 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402280B8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x14022818C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402281D8 (EtwpLockBufferList.c)
 *     EtwpAllocateTraceBuffer @ 0x1403716DC (EtwpAllocateTraceBuffer.c)
 *     EtwpInitializeBufferHeader @ 0x140371758 (EtwpInitializeBufferHeader.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  bool v4; // zf
  unsigned __int32 v7; // edi
  void *TraceBuffer; // r14
  _QWORD *Pool2; // r15
  unsigned __int32 v10; // eax
  _QWORD *v11; // rcx
  unsigned __int8 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 816) & 0x1000) == 0;
  v13 = 0;
  if ( !v4 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
      if ( v7 > *(_DWORD *)(a1 + 236) )
        break;
      TraceBuffer = (void *)EtwpAllocateTraceBuffer(a1, v2);
      if ( !TraceBuffer )
        goto LABEL_8;
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1853322309LL);
      if ( !Pool2 )
      {
        ExFreePoolWithTag(TraceBuffer, 0);
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
        return v3;
      }
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 244);
        if ( v10 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), v7, v10);
      }
      EtwpInitializeBufferHeader(a1, TraceBuffer);
      Pool2[2] = TraceBuffer;
      EtwpLockBufferList(a1, &v13);
      v11 = *(_QWORD **)(a1 + 88);
      if ( *v11 != a1 + 80 )
        __fastfail(3u);
      Pool2[1] = v11;
      *Pool2 = a1 + 80;
      *v11 = Pool2;
      *(_QWORD *)(a1 + 88) = Pool2;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)TraceBuffer, 0);
      if ( ++v3 >= a2 )
        goto LABEL_16;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
  }
LABEL_16:
  _InterlockedExchangeAdd(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 1096) + 4LL * (*(_DWORD *)(a1 + 300) & 1) + 4124),
    *(_DWORD *)(a1 + 4) * v3);
  return v3;
}
