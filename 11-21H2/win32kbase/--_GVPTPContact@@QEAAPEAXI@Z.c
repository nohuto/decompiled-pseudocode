/*
 * XREFs of ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C01F2D3C
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F2C2C (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1C01F2B90 (--1VPTPContact@@QEAA@XZ.c)
 */

VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(VPTPContact ***this)
{
  VPTPContact::~VPTPContact(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
