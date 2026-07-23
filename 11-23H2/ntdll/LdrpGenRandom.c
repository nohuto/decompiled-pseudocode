/*
 * XREFs of LdrpGenRandom @ 0x18002B614
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800AF690 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002C130 (RtlIsProcessorFeaturePresent.c)
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
