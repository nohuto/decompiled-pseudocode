/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1409AAF80
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1409A4CDC (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
