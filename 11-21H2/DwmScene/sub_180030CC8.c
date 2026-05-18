/*
 * XREFs of sub_180030CC8 @ 0x180030CC8
 * Callers:
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180032864 @ 0x180032864 (sub_180032864.c)
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 *     sub_18003A638 @ 0x18003A638 (sub_18003A638.c)
 *     sub_18003F8F4 @ 0x18003F8F4 (sub_18003F8F4.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 */

__int64 __fastcall sub_180030CC8(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x60uLL) )
  {
    sub_180030CC8(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 11);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 8), v7 + 1);
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 11) = 15LL;
    v6[64] = 0;
    v8 = *((_QWORD *)v6 + 7);
    if ( v8 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v8 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
