/*
 * XREFs of sub_18008E7FB @ 0x18008E7FB
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18008E7FB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( a10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToPersistedString", 1125, a10);
  JUMPOUT(0x18001C99DLL);
}
