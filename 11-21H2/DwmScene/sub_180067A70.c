/*
 * XREFs of sub_180067A70 @ 0x180067A70
 * Callers:
 *     sub_180103CD6 @ 0x180103CD6 (sub_180103CD6.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800671C8 @ 0x1800671C8 (sub_1800671C8.c)
 */

__int64 __fastcall sub_180067A70(__int64 *a1)
{
  char **v1; // rbx
  __int64 result; // rax

  v1 = (char **)a1[1];
  if ( v1 )
  {
    sub_1800671C8(a1[1], *a1, *((char **)*v1 + 1));
    return sub_180010884(*v1, 0x30uLL);
  }
  return result;
}
