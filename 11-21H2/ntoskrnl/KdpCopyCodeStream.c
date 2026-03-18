/*
 * XREFs of KdpCopyCodeStream @ 0x140A74644
 * Callers:
 *     KdpAddBreakpoint @ 0x140A7471C (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140A748B4 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140A74918 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140A749D0 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140A74AA0 (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140A74B64 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140A6F124 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(char *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
