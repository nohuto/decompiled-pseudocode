/*
 * XREFs of sub_1C00749C4 @ 0x1C00749C4
 * Callers:
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C00749C4()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  EmClientQueryRuleState(&unk_1C008B050, &v1);
  result = (unsigned __int8)byte_1C0093B07;
  if ( v1 == 2 )
    return 1LL;
  return result;
}
