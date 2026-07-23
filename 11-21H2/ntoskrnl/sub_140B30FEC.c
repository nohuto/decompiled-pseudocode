/*
 * XREFs of sub_140B30FEC @ 0x140B30FEC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

bool sub_140B30FEC()
{
  bool result; // al
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140D05264 == -1 )
  {
    v1 = 1;
    EmClientQueryRuleState(qword_140013530, &v1);
    result = v1 == 2;
  }
  else
  {
    result = dword_140D05264 != 0;
  }
  byte_140D069CE = result;
  return result;
}
