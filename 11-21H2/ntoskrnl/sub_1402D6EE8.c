/*
 * XREFs of sub_1402D6EE8 @ 0x1402D6EE8
 * Callers:
 *     sub_1402D6DC0 @ 0x1402D6DC0 (sub_1402D6DC0.c)
 *     sub_1402D6E58 @ 0x1402D6E58 (sub_1402D6E58.c)
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 * Callees:
 *     sub_1402D6F40 @ 0x1402D6F40 (sub_1402D6F40.c)
 */

unsigned __int64 __fastcall sub_1402D6EE8(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = a3;
  v5 = sub_1402D6F40();
  if ( !v5 )
    return 0LL;
  result = v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  if ( a2 < 0x7FFFFFFEFFFFLL && result >= 0x7FFFFFFEFFFFLL )
    return 0LL;
  return result;
}
