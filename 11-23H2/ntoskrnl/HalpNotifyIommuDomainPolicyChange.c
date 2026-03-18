/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x14050E0B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050DFE8 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

signed __int32 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}
