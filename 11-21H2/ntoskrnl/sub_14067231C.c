/*
 * XREFs of sub_14067231C @ 0x14067231C
 * Callers:
 *     sub_140672120 @ 0x140672120 (sub_140672120.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     sub_14023A798 @ 0x14023A798 (sub_14023A798.c)
 *     sub_14028ACE8 @ 0x14028ACE8 (sub_14028ACE8.c)
 */

signed __int64 __fastcall sub_14067231C(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return sub_14028ACE8(v2);
    else
      return sub_14023A798(v2);
  }
  return result;
}
