/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140546FE0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1405458A0 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x140932C50 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
