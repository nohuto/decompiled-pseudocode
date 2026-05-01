/*
 * XREFs of IsRmRpsInitializePresent @ 0x18004F44C
 * Callers:
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x18004998C (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004F040 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DCF24 == 1 )
    return 1;
  if ( dword_1800DCF24 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"VX", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800DCF24 = 2 - (v1 != 0);
  return result;
}
