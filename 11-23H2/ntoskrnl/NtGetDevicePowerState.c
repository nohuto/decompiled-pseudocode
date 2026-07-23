/*
 * XREFs of NtGetDevicePowerState @ 0x14098B480
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x14058F710 (PopLockGetDoDevicePowerState.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x14079478C (IoGetRelatedTargetDevice.c)
 */

NTSTATUS __cdecl NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  __int64 v3; // rdx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS RelatedTargetDevice; // ebx
  PVOID v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)State < 0x7FFFFFFF0000LL )
      v3 = (__int64)State;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Device, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &v9);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v7 = v9;
      *State = PopLockGetDoDevicePowerState(*((_QWORD *)v9 + 39));
      ObfDereferenceObject(v7);
    }
    return RelatedTargetDevice;
  }
  return result;
}
