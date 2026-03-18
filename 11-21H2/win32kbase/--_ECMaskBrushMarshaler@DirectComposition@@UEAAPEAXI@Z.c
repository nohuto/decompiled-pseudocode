/*
 * XREFs of ??_ECMaskBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A2890
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CMaskBrushMarshaler *__fastcall DirectComposition::CMaskBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CMaskBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CMaskBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
