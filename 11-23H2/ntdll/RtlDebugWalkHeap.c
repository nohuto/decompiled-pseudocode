/*
 * XREFs of RtlDebugWalkHeap @ 0x180107AE8
 * Callers:
 *     RtlpWalkHeap @ 0x180101638 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801228D8 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap(a1, 0LL);
  return v2;
}
