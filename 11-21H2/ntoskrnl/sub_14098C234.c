/*
 * XREFs of sub_14098C234 @ 0x14098C234
 * Callers:
 *     sub_1408588DC @ 0x1408588DC (sub_1408588DC.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

__int64 __fastcall sub_14098C234(char *a1)
{
  char v2; // bl
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = 1;
  result = EmClientQueryRuleState(qword_14003BEB0, &v4);
  if ( (int)result < 0 || v4 != 2 )
    v2 = 0;
  *a1 = v2;
  return result;
}
