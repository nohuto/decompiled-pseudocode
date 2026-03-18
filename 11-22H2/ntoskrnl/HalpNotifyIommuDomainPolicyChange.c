/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x14050DD20
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050DC58 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

signed __int32 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}
