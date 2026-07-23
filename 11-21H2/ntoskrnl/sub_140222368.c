/*
 * XREFs of sub_140222368 @ 0x140222368
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_1403C801C @ 0x1403C801C (sub_1403C801C.c)
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_140A4D310 @ 0x140A4D310 (sub_140A4D310.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 */

void sub_140222368()
{
  if ( !byte_140C09804 && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
