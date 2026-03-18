/*
 * XREFs of ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02384E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238370 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::`scalar deleting destructor'(
        DirectComposition::CSceneNodeMarshaler *this,
        char a2)
{
  DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
