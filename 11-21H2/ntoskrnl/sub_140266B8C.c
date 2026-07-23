/*
 * XREFs of sub_140266B8C @ 0x140266B8C
 * Callers:
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 * Callees:
 *     sub_140266BBC @ 0x140266BBC (sub_140266BBC.c)
 */

__int64 __fastcall sub_140266B8C(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = (unsigned __int8)sub_140266BBC(a1, 0LL) == 0;
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
