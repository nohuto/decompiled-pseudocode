/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C004390C
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298C4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0029D40 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C002A14C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A424 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C002A670 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C002A994 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C002AA84 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABF0 (ACPIGetProcessorIDWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C850 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
