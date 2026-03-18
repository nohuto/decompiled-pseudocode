/*
 * XREFs of ??_GCSharedSectionWrapperMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214600
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedSectionWrapperMarshaler *__fastcall DirectComposition::CSharedSectionWrapperMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
