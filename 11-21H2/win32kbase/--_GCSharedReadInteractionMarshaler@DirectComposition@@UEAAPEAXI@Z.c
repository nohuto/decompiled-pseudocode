/*
 * XREFs of ??_GCSharedReadInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A69E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedReadInteractionMarshaler *__fastcall DirectComposition::CSharedReadInteractionMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
