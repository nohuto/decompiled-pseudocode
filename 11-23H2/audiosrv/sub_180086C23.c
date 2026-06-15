/*
 * XREFs of sub_180086C23 @ 0x180086C23
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180086C23(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  if ( a8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Copy", 157, a8);
  JUMPOUT(0x18000B662LL);
}
