/*
 * XREFs of ?ShouldAttachDevice@MPCGamepadProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801C6CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::ShouldAttachDevice(MPCGamepadProcessor *this, struct DeviceInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 458) + 32LL))(
           *((_QWORD *)this + 458),
           a2);
}
