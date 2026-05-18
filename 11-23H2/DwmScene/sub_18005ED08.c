/*
 * XREFs of sub_18005ED08 @ 0x18005ED08
 * Callers:
 *     sub_18005EAD0 @ 0x18005EAD0 (sub_18005EAD0.c)
 *     sub_18005F884 @ 0x18005F884 (sub_18005F884.c)
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 */

__int64 sub_18005ED08()
{
  unsigned __int64 v0; // rax
  __int64 result; // rax

  v0 = sub_18002F250(1uLL);
  result = sub_18001090C(v0);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
