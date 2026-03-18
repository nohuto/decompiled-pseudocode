/*
 * XREFs of HalPnpGetDmaAdapter @ 0x14038ED40
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14038ED84 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x140829354 (HalpGetAdapter.c)
 */

__int64 __fastcall HalPnpGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
