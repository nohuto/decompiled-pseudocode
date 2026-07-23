/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140AA2CC4
 * Callers:
 *     ConsumerGetBuffer @ 0x140AA14E4 (ConsumerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140AA15E4 (ConsumerPeekAndConsumeBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140AA21A4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140AA39F0 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140AA570C (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140AA5D18 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140AA5EFC (ProducerGetBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140332104 (KdCheckForDebugBreak.c)
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
