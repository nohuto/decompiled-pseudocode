/*
 * XREFs of sub_140861E5C @ 0x140861E5C
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1408258B8 @ 0x1408258B8 (sub_1408258B8.c)
 *     sub_140861E8C @ 0x140861E8C (sub_140861E8C.c)
 */

__int64 __fastcall sub_140861E5C(__int64 a1)
{
  __int64 result; // rax

  result = sub_1408258B8((ULONG *)&dword_140C490B8);
  if ( (int)result >= 0 )
    return sub_140861E8C(a1);
  return result;
}
