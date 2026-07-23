/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A5D10
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180064FBC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x18010C670 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int8 v0; // cl
  char v3; // zf
  unsigned __int32 v4; // eax

  switch ( RtlpGetCurrentProcessorNumberHow )
  {
    case 1:
      __asm { rdpid   rcx }
      return (unsigned __int8)_RCX;
    case 2:
      __asm { rdtscp }
      return v0;
    case 3:
      v4 = __segmentlimit(0x53u);
      if ( v3 )
        return v4 >> 14;
      else
        return ZwGetCurrentProcessorNumber();
    default:
      return RtlpGetCurrentProcessorNumberUninitialized();
  }
}
