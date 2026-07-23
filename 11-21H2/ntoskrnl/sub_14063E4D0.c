/*
 * XREFs of sub_14063E4D0 @ 0x14063E4D0
 * Callers:
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 * Callees:
 *     sub_14063E53C @ 0x14063E53C (sub_14063E53C.c)
 *     sub_140A9EFF8 @ 0x140A9EFF8 (sub_140A9EFF8.c)
 */

__int64 __fastcall sub_14063E4D0(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (dword_140C29FC0 & 0x800) == 0 || (result = sub_140A9EFF8(a1, a2), !(_DWORD)result) )
  {
    sub_14063E53C(a1, a2, &qword_140C116E0, &qword_140C116D0);
    return sub_14063E53C(a1, a2, &qword_140C11700, &qword_140C116F0);
  }
  return result;
}
