/*
 * XREFs of sub_18003352C @ 0x18003352C
 * Callers:
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180100B5C @ 0x180100B5C (sub_180100B5C.c)
 *     sub_180100E74 @ 0x180100E74 (sub_180100E74.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030E94 @ 0x180030E94 (sub_180030E94.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 */

__int64 __fastcall sub_18003352C(char **a1)
{
  char **v1; // rdi
  char *v3; // rcx
  char *v4; // rbx
  char *v5; // rcx

  v1 = a1 + 2;
  v3 = a1[2];
  v4 = (char *)*((_QWORD *)v3 + 1);
  if ( !v4[25] )
  {
    do
    {
      sub_180030FC8((__int64)v1, (__int64)v1, *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010884(v5, 0x30uLL);
    }
    while ( !v4[25] );
    v3 = *v1;
  }
  sub_180010884(v3, 0x30uLL);
  sub_180030E94((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010884(*a1, 0x60uLL);
}
