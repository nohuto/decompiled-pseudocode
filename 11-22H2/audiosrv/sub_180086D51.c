/*
 * XREFs of sub_180086D51 @ 0x180086D51
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180086D51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  if ( a16 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 479, a16);
  JUMPOUT(0x18000B794LL);
}
