/*
 * XREFs of LdrpGenRandom @ 0x1800347F4
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800DC784 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180034840 (RtlIsProcessorFeaturePresent.c)
 */

__int64 LdrpGenRandom()
{
  int v0; // ecx

  if ( !RtlIsProcessorFeaturePresent(0x1Cu) )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}
