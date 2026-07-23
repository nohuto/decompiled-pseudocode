/*
 * XREFs of PopDirectedDripsQueryEmPS4DisableSetting @ 0x140859C50
 * Callers:
 *     PopDirectedDripsQueryPs4Support @ 0x140859BE0 (PopDirectedDripsQueryPs4Support.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopDirectedDripsQueryEmPS4DisableSetting(char *a1)
{
  char v2; // bl
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = 1;
  result = EmClientQueryRuleState(&GUID_EM_RULE_DIRECTED_DRIPS_PLATFORM_DISABLE_PS4_MATCH, &v4);
  if ( (int)result < 0 || v4 != 2 )
    v2 = 0;
  *a1 = v2;
  return result;
}
