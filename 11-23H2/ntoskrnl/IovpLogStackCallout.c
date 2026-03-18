/*
 * XREFs of IovpLogStackCallout @ 0x140AC1DD0
 * Callers:
 *     IovpLogStackTrace @ 0x140AC1E08 (IovpLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall IovpLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
