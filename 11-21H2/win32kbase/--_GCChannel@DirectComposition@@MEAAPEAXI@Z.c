/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C0214080
 * Callers:
 *     <none>
 * Callees:
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C000C9E4 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        char a2)
{
  DirectComposition::CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
