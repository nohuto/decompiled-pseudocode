/*
 * XREFs of ?GetDevice@MPCInputProviderBase@@UEBAPEAUDeviceInfo@@XZ @ 0x18002AEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DeviceInfo *__fastcall MPCInputProviderBase::GetDevice(MPCInputProviderBase *this)
{
  return (struct DeviceInfo *)*((_QWORD *)this + 3);
}
