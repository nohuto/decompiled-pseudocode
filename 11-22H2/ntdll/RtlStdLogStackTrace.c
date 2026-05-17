/*
 * XREFs of RtlStdLogStackTrace @ 0x18010E140
 * Callers:
 *     RtlLogStackBackTraceEx @ 0x18005FC44 (RtlLogStackBackTraceEx.c)
 *     RtlLogStackTrace @ 0x18010DE80 (RtlLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E734 (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(__int64 a1, int a2)
{
  _BYTE v4[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v7; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v7) )
    return RtlpStdLogCapturedStackTrace(a1, v4, v7);
  else
    return 0LL;
}
