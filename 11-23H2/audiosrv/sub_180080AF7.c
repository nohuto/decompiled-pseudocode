/*
 * XREFs of sub_180080AF7 @ 0x180080AF7
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180080AF7(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, a5);
    JUMPOUT(0x180050821LL);
  }
  JUMPOUT(0x180050607LL);
}
