/*
 * XREFs of ??_ECSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BC910
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler *__fastcall DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
