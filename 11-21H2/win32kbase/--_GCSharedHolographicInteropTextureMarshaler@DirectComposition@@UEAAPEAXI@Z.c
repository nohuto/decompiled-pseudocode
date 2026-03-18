/*
 * XREFs of ??_GCSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02143A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedHolographicInteropTextureMarshaler *__fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
