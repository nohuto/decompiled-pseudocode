/*
 * XREFs of sub_180032BB8 @ 0x180032BB8
 * Callers:
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180067140 @ 0x180067140 (sub_180067140.c)
 *     sub_1800679C0 @ 0x1800679C0 (sub_1800679C0.c)
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 *     sub_180100904 @ 0x180100904 (sub_180100904.c)
 *     sub_180100C1C @ 0x180100C1C (sub_180100C1C.c)
 *     sub_180103A65 @ 0x180103A65 (sub_180103A65.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180032BB8(char **a1)
{
  char **v1; // rdx
  char *v3; // rdi
  char *v4; // rbx

  v1 = (char **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = *(char **)v3;
      sub_180010910((__int64)(v3 + 16));
      sub_180010884(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180010884(*a1, 0x20uLL);
}
