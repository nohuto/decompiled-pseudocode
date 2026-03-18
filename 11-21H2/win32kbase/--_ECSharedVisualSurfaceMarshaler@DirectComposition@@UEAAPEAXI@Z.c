/*
 * XREFs of ??_ECSharedVisualSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C023B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedVisualSurfaceMarshaler *__fastcall DirectComposition::CSharedVisualSurfaceMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedVisualSurfaceMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedVisualSurfaceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
