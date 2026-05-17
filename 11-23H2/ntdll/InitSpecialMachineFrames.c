/*
 * XREFs of InitSpecialMachineFrames @ 0x1800AF708
 * Callers:
 *     LdrpInitialize @ 0x1800744E8 (LdrpInitialize.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020780 (RtlLookupFunctionEntry.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 */

__int64 InitSpecialMachineFrames()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h]

  result = (unsigned int)_InterlockedIncrement(&SpecialMachineFramesInitCount);
  if ( (_DWORD)result == 1 )
  {
    result = (__int64)RtlLookupFunctionEntry(RtlpContinuationContextMachineFrameEntries, &ImageBase, 0LL);
    RtlpContinuationContextMachineFrameEntries = ImageBase + *(unsigned int *)(result + 8);
    _InterlockedOr(v1, 0);
    SpecialMachineFramesInitialized = 1;
  }
  else
  {
    v3 = -300000LL;
    while ( !SpecialMachineFramesInitialized )
      result = ZwDelayExecution();
  }
  return result;
}
