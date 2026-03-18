/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1406346D8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140629294 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140635650 (MmEmptyAllWorkingSets.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 *     MiMirrorBrownPhase @ 0x140AAC62C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035EEC8 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16920);
  if ( byte_140C698E4 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
