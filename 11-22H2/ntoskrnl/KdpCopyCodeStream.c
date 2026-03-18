/*
 * XREFs of KdpCopyCodeStream @ 0x140AB6650
 * Callers:
 *     KdpAddBreakpoint @ 0x140AB6728 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140AB68C0 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140AB6924 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140AB69DC (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140AB6AAC (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140AB6B70 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140AB12A4 (KdpCopyMemoryChunks.c)
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
