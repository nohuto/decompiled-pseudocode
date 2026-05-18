/*
 * XREFs of sub_18003C3C0 @ 0x18003C3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18003C3C0(char *a1, char a2)
{
  __int64 result; // rax

  result = sub_180010910((__int64)(a1 + 8));
  if ( a2 )
    return sub_180010884(a1, 0x18uLL);
  return result;
}
