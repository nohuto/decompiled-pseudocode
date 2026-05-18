/*
 * XREFs of sub_18001E7E8 @ 0x18001E7E8
 * Callers:
 *     sub_1800FFE1C @ 0x1800FFE1C (sub_1800FFE1C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 */

__int64 __fastcall sub_18001E7E8(__int64 *a1)
{
  char **v1; // rbx
  __int64 result; // rax

  v1 = (char **)a1[1];
  if ( v1 )
  {
    sub_18001E060(a1[1], *a1, *((char **)*v1 + 1));
    return sub_180010884(*v1, 0x68uLL);
  }
  return result;
}
