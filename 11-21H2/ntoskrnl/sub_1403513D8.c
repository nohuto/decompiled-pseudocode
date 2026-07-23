/*
 * XREFs of sub_1403513D8 @ 0x1403513D8
 * Callers:
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034D5C0 @ 0x14034D5C0 (sub_14034D5C0.c)
 * Callees:
 *     sub_14034D4E0 @ 0x14034D4E0 (sub_14034D4E0.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall sub_1403513D8(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = sub_14034D4E0(a3, a2, &v8, &v9);
  result = v8 + v6 - (unsigned __int16)(a3 ^ qword_140C5A5C0 ^ *(_WORD *)a3);
  a1[3].Min = (PRTL_BALANCED_NODE)((char *)a1[3].Min - result);
  return result;
}
