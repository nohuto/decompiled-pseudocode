/*
 * XREFs of PopChangeCapability @ 0x1409895EC
 * Callers:
 *     PopNotifyPolicyDevice @ 0x140858C40 (PopNotifyPolicyDevice.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, char a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies();
  }
  return result;
}
