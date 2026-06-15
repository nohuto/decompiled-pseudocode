/*
 * XREFs of ?IsConnectedToLazyStreamGroup@CSaDeviceProxy@@UEAA_NXZ @ 0x18004B590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsConnectedToLazyStreamGroup(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 23) != 0;
}
