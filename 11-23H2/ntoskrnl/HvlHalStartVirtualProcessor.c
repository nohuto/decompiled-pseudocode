/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140544D10
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140542A34 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14094320C (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(ULONG a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
