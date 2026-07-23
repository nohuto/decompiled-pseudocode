/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x180041DF0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180041864 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpSubSegmentInitialize @ 0x180041A40 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180045730 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x1801223F4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18005BA40 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x18005C3AC (RtlpRunOnceWaitForInit.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     RtlpInitRandomExVector @ 0x1800AEE20 (RtlpInitRandomExVector.c)
 *     RtlReportCriticalFailure @ 0x18010C17C (RtlReportCriticalFailure.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  signed __int64 Value; // rax
  __int32 v1; // r8d
  int v2; // eax
  unsigned int v5; // r8d
  signed __int64 v7; // rcx
  signed __int64 v8; // rcx
  NTSTATUS v9; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h]

  if ( !dword_180185188
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180185188, 4u, 0LL) < 0 )
  {
    dword_180185188 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  Value = RtlpRandomExInit.Value;
  if ( ((__int64)RtlpRandomExInit.Ptr & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v8 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
        if ( Value == v8 )
        {
          if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
          {
            v9 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
            if ( v9 >= 0 )
              goto LABEL_3;
            v10 = 1;
          }
          else
          {
            v9 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
            if ( v9 >= 0 )
              goto LABEL_3;
            v10 = 2;
          }
          goto LABEL_22;
        }
      }
      if ( v7 != 1 )
        break;
      Value = RtlpRunOnceWaitForInit(Value, &RtlpRandomExInit);
    }
    if ( v7 != 3 )
      goto LABEL_3;
    v9 = -1073741584;
    v10 = 0;
LABEL_22:
    RtlReportCriticalFailure((unsigned int)v9, &v10, 1LL);
  }
LABEL_3:
  dword_180185188 = (2147483629 * (unsigned __int64)(unsigned int)dword_180185188 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180185188);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      v11 = _EDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    _EDX = 0;
  }
  v5 = _EDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v5);
  return v5;
}
