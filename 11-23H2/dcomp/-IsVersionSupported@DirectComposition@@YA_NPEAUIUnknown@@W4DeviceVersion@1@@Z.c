/*
 * XREFs of ?IsVersionSupported@DirectComposition@@YA_NPEAUIUnknown@@W4DeviceVersion@1@@Z @ 0x180011F64
 * Callers:
 *     ?CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180011EBC (-CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 */

bool __fastcall DirectComposition::IsVersionSupported(void *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  struct DirectComposition::CDevice *v3; // [rsp+40h] [rbp+18h] BYREF

  DirectComposition::CDevice::GetDeviceAndHandleWorker(a1, &v3, &v2);
  return *((_DWORD *)v3 + 92) >= 1;
}
