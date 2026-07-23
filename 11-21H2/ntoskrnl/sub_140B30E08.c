/*
 * XREFs of sub_140B30E08 @ 0x140B30E08
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 */

__int64 sub_140B30E08()
{
  __int64 result; // rax
  __int64 *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 **v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 16;
  v1 = qword_140013520;
  v4 = 1;
  v5 = &v1;
  byte_140C1F589 = 0;
  result = EmClientRuleEvaluate(qword_140013510, (__int64)&v5, 1, &v4);
  if ( v4 == 2 )
    byte_140C1F589 = 1;
  return result;
}
