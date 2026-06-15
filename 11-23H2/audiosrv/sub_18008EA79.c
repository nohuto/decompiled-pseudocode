/*
 * XREFs of sub_18008EA79 @ 0x18008EA79
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18008EA79(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  if ( a8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::ToString", 521, a8);
  JUMPOUT(0x18001D1D3LL);
}
