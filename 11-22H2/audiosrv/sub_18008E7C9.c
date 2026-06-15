/*
 * XREFs of sub_18008E7C9 @ 0x18008E7C9
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18008E7C9(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  if ( a8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 1059, a8);
  JUMPOUT(0x18001C8DBLL);
}
