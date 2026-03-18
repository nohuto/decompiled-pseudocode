/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D96C0
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C011FC5C (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D9BDC (LogQMsg.c)
 * Callees:
 *     <none>
 */

__int64 EnsureQMsgLog(void)
{
  if ( !unk_1C03319F0 )
  {
    if ( (_DWORD)gMsgQLog )
    {
      unk_1C03319F0 = Win32AllocPoolZInit(688LL * (unsigned int)xmmword_1C03319E0, 1819374421LL);
      if ( !unk_1C03319F0 )
      {
        unk_1C03319F0 = 0LL;
        gMsgQLog = 0LL;
        xmmword_1C03319E0 = 0LL;
      }
    }
  }
  return (unsigned int)gMsgQLog;
}
