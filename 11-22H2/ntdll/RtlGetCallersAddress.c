/*
 * XREFs of RtlGetCallersAddress @ 0x1800F8E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall RtlGetCallersAddress(PVOID *a1, _QWORD *a2)
{
  USHORT result; // ax
  PVOID BackTrace; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  result = RtlCaptureStackBackTrace(2u, 2u, &BackTrace, 0LL);
  if ( result )
  {
    *a1 = BackTrace;
    if ( result >= 2u )
    {
      result = v6;
      *a2 = v6;
      return result;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  *a2 = 0LL;
  return result;
}
