/*
 * XREFs of KdpAllowDisable @ 0x140A746D0
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x140565378 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

__int64 KdpAllowDisable()
{
  ULONG ActiveProcessorCount; // eax
  int v1; // r9d
  __int64 *i; // r8

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v1 = 0;
  if ( !ActiveProcessorCount )
    return 0LL;
  for ( i = KiProcessorBlock; !*(_BYTE *)(*i + 328); ++i )
  {
    if ( ++v1 >= ActiveProcessorCount )
      return 0LL;
  }
  return 3221225506LL;
}
