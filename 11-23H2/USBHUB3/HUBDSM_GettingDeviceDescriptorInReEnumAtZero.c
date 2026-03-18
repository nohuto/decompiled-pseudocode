/*
 * XREFs of HUBDSM_GettingDeviceDescriptorInReEnumAtZero @ 0x1C0020C40
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C002AC18 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingDeviceDescriptorInReEnumAtZero(__int64 a1)
{
  HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
