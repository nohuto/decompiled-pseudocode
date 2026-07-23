/*
 * XREFs of sub_140B5323C @ 0x140B5323C
 * Callers:
 *     sub_140B310D4 @ 0x140B310D4 (sub_140B310D4.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

bool sub_140B5323C()
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v0 = 0;
  if ( (int)EmClientQueryRuleState(qword_14003C1B8, &v2) >= 0 )
    return v2 == 2;
  return v0;
}
