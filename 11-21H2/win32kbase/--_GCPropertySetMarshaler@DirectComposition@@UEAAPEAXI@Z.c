/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0015050
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(
        DirectComposition::CPropertySetMarshaler *this,
        char a2)
{
  void *v4; // rdx
  void *v5; // rdx

  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 26) = 0;
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 22) = 0;
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
