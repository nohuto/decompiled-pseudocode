/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0080970
 * Callers:
 *     CHidInput_Destroy @ 0x1C0080910 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C00809C0 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0080A20 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00833C8 (--1CRIMBase@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
