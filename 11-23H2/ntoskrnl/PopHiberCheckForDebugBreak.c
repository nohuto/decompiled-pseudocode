/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140AA2E54
 * Callers:
 *     ConsumerGetBuffer @ 0x140AA1674 (ConsumerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140AA1774 (ConsumerPeekAndConsumeBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140AA2334 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140AA3B80 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140AA589C (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140AA5EA8 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140AA608C (ProducerGetBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140331E74 (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
