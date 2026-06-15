/*
 * XREFs of sub_180080DB5 @ 0x180080DB5
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180080DB5(
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
        int a13)
{
  if ( a13 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToPersistedString", 1125, a13);
  JUMPOUT(0x18001DC9FLL);
}
