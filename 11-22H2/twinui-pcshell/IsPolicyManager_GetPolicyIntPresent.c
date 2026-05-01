/*
 * XREFs of IsPolicyManager_GetPolicyIntPresent @ 0x1801CB2E8
 * Callers:
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x1800F4910 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801CE030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyIntPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18098CD20 == 1 )
    return 1;
  if ( dword_18098CD20 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18098CD20 = 2 - (v1 != 0);
  return result;
}
