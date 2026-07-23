/*
 * XREFs of RtlGetCallersAddress @ 0x1800FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v4; // ax
  PVOID BackTrace[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = RtlCaptureStackBackTrace(2u, 2u, BackTrace, 0LL);
  if ( v4 )
  {
    *CallersAddress = BackTrace[0];
    if ( v4 >= 2u )
    {
      *CallersCaller = BackTrace[1];
      return;
    }
  }
  else
  {
    *CallersAddress = 0LL;
  }
  *CallersCaller = 0LL;
}
