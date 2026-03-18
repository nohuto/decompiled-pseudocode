/*
 * XREFs of ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1C0052D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x1C0052D84 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CKernelSensorThread *__fastcall CKernelSensorThread::`scalar deleting destructor'(CKernelSensorThread *this, char a2)
{
  CKernelSensorThread::~CKernelSensorThread(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
