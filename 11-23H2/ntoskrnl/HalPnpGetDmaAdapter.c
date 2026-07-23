/*
 * XREFs of HalPnpGetDmaAdapter @ 0x140390AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x140390AE4 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x140827B04 (HalpGetAdapter.c)
 */

__int64 __fastcall HalPnpGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
