/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14078E18C
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x14022807C (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     EtwpFreeTraceBuffer @ 0x14031F2D8 (EtwpFreeTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r12
  int v2; // esi
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned int UsedProcessorCount; // r15d
  __int64 v10; // r14
  volatile __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rcx
  _QWORD **v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    while ( 1 )
    {
      v4 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 6);
      if ( !v4 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v5, v4);
    }
    while ( 1 )
    {
      v6 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      if ( !v6 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v7, v6);
    }
    v8 = 0;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v7);
    if ( UsedProcessorCount )
    {
      v10 = 0LL;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
        {
          v11 = (volatile __int64 *)(a1 + 32);
        }
        else
        {
          v12 = *((_QWORD *)a1 + 137);
          if ( v12 == EtwpHostSiloState )
            v11 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v8) + 34472) + 320LL) + 8 * v1);
          else
            v11 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(v12 + 4144) + v10) + 8 * v1);
        }
        v13 = _InterlockedExchange64(v11, 0LL);
        v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -(v13 & 0xF));
          do
          {
            v15 = *(_QWORD *)(v14 + 32);
            _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v14);
            v14 = v15;
          }
          while ( v15 );
        }
        ++v8;
        v10 += 64LL;
      }
      while ( v8 < UsedProcessorCount );
    }
    if ( *((_QWORD *)a1 + 144) && (a1[3] & 0x400) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 144));
    }
    while ( 1 )
    {
      v16 = (_QWORD *)*((_QWORD *)a1 + 148);
      if ( !v16 )
        break;
      *((_QWORD *)a1 + 148) = *v16;
      ExFreePoolWithTag(v16 - 4, 0);
    }
    v17 = (_QWORD **)(a1 + 20);
    while ( 1 )
    {
      v18 = *v17;
      if ( *v17 == v17 )
        break;
      if ( (_QWORD **)v18[1] != v17 || (v19 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
        __fastfail(3u);
      *v17 = v19;
      v19[1] = v17;
      ExFreePoolWithTag(v18, 0);
    }
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*((_QWORD *)a1 + 137) + 4LL * (a1[75] & 1) + 4124),
      -(a1[1] * v2));
  }
  return 0LL;
}
