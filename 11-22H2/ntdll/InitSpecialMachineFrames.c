/*
 * XREFs of InitSpecialMachineFrames @ 0x1800AD638
 * Callers:
 *     LdrpInitialize @ 0x180073E78 (LdrpInitialize.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 */

int InitSpecialMachineFrames()
{
  PRUNTIME_FUNCTION v0; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v0) = _InterlockedIncrement(&SpecialMachineFramesInitCount);
  if ( (_DWORD)v0 == 1 )
  {
    v0 = RtlLookupFunctionEntry(RtlpContinuationContextMachineFrameEntries, &ImageBase, 0LL);
    RtlpContinuationContextMachineFrameEntries = ImageBase + v0->UnwindInfoAddress;
    _InterlockedOr(v2, 0);
    SpecialMachineFramesInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SpecialMachineFramesInitialized )
      LODWORD(v0) = ZwDelayExecution(0, &DelayInterval);
  }
  return (int)v0;
}
