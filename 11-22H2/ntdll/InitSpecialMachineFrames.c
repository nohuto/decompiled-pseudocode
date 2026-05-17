/*
 * XREFs of InitSpecialMachineFrames @ 0x1800AD638
 * Callers:
 *     LdrpInitialize @ 0x180073E78 (LdrpInitialize.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
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
