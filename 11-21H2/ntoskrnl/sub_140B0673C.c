/*
 * XREFs of sub_140B0673C @ 0x140B0673C
 * Callers:
 *     sub_14082BCA0 @ 0x14082BCA0 (sub_14082BCA0.c)
 * Callees:
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 */

ULONG_PTR __fastcall sub_140B0673C(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = sub_14026CF08(a1);
  return sub_1403C289C(v1, v2, v3);
}
