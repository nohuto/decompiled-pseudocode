/*
 * XREFs of RtlLogStackTrace @ 0x18010F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLogStackTrace(unsigned int a1)
{
  if ( RtlpStackTraceDatabase )
    return RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  else
    return 0LL;
}
