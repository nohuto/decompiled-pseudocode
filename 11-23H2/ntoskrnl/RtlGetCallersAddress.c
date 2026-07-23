/*
 * XREFs of RtlGetCallersAddress @ 0x1403C2DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402277F0 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v4; // ax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  v4 = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v5, 0LL);
  if ( v4 )
  {
    *CallersAddress = (PVOID)v5;
    if ( v4 >= 2u )
    {
      *CallersCaller = (PVOID)*((_QWORD *)&v5 + 1);
      return;
    }
  }
  else
  {
    *CallersAddress = 0LL;
  }
  *CallersCaller = 0LL;
}
