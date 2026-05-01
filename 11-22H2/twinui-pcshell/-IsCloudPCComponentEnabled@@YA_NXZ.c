/*
 * XREFs of ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x1800F4910
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBootToCloudPCSession@@YA_NXZ @ 0x1800F48A8 (-IsBootToCloudPCSession@@YA_NXZ.c)
 *     IsPolicyManager_GetPolicyIntPresent @ 0x1801CB2E8 (IsPolicyManager_GetPolicyIntPresent.c)
 */

bool IsCloudPCComponentEnabled(void)
{
  return (unsigned __int8)IsPolicyManager_GetPolicyIntPresent() && IsBootToCloudPCSession()
      || AreVirtualDesktopsEnabled();
}
