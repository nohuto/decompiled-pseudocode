/*
 * XREFs of sub_18008144C @ 0x18008144C
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18008144C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  if ( a21 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 1027, a21);
    JUMPOUT(0x18001E796LL);
  }
  JUMPOUT(0x18001E791LL);
}
