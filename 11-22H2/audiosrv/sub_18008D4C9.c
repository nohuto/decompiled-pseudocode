/*
 * XREFs of sub_18008D4C9 @ 0x18008D4C9
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18008D4C9(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  if ( a8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToString", 188, a8);
  JUMPOUT(0x1800192B2LL);
}
