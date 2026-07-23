/*
 * XREFs of RtlReleaseStackTrace @ 0x18010F320
 * Callers:
 *     <none>
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x18010F620 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1, a3);
  return result;
}
