/*
 * XREFs of ??_GCPathGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0009050
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CPathGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
