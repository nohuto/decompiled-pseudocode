/*
 * XREFs of KdSetOwedBreakpoints @ 0x140568030
 * Callers:
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140AB5B80 (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}
