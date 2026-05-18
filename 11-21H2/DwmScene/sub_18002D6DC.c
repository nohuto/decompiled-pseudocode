/*
 * XREFs of sub_18002D6DC @ 0x18002D6DC
 * Callers:
 *     sub_1801006B6 @ 0x1801006B6 (sub_1801006B6.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 */

__int64 __fastcall sub_18002D6DC(__int64 *a1)
{
  char **v1; // rbx
  __int64 result; // rax

  v1 = (char **)a1[1];
  if ( v1 )
  {
    sub_18002CCFC(a1[1], *a1, *((char **)*v1 + 1));
    return sub_180010884(*v1, 0x58uLL);
  }
  return result;
}
