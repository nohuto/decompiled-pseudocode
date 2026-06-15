/*
 * XREFs of sub_18008E739 @ 0x18008E739
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void sub_18008E739()
{
  int v0; // [rsp+20h] [rbp+20h]

  if ( v0 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 331, v0);
  JUMPOUT(0x18001C610LL);
}
