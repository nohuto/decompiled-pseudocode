/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140228630
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020C9A0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x14022807C (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x14022818C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402281D8 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 *     EtwpFreeTraceBuffer @ 0x14031F2D8 (EtwpFreeTraceBuffer.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x14041231C (EtwpRemoveBufferFromGlobalList.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  unsigned int v1; // edi
  void *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int UsedProcessorCount; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbp
  unsigned __int8 i; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  for ( i = 0; v1 < *(_DWORD *)(a1 + 16); ++v1 )
  {
    v3 = 0LL;
    v4 = EtwpAcquireLoggerContextByLoggerId(a1, v1, 0LL);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 12) & 0x400) == 0 )
      {
        v6 = *(_DWORD *)(v4 + 228);
        UsedProcessorCount = EtwpQueryUsedProcessorCount(v4);
        if ( v6 > *(_DWORD *)(v5 + 224) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v5, &i);
          v8 = EtwpDequeueBuffer(v5, (_QWORD *)(v5 + 48));
          v10 = v8;
          if ( v8 )
            v3 = (void *)EtwpRemoveBufferFromGlobalList(v9, v8);
          EtwpUnlockBufferList(v5, &i);
          if ( v10 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 228));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v5 + 1096) + 4LL * (*(_DWORD *)(v5 + 300) & 1) + 4124),
              -*(_DWORD *)(v5 + 4));
            EtwpFreeTraceBuffer(v5, v10);
            if ( v3 )
              ExFreePoolWithTag(v3, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(v5, 0LL);
    }
  }
}
