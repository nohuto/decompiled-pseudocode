/*
 * XREFs of UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport @ 0x1C0053DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport(__int64 a1, bool *a2)
{
  *a2 = (*(_DWORD *)(a1 + 1180) & 0x10) != 0;
  return 0LL;
}
