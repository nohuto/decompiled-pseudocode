/*
 * XREFs of sub_14085894C @ 0x14085894C
 * Callers:
 *     sub_1408588DC @ 0x1408588DC (sub_1408588DC.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

__int64 __fastcall sub_14085894C(char *a1)
{
  char v2; // bl
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = 1;
  result = EmClientQueryRuleState(qword_140012F80, &v4);
  if ( (int)result < 0 || v4 != 2 )
    v2 = 0;
  *a1 = v2;
  return result;
}
