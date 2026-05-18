/*
 * XREFs of sub_18001E104 @ 0x18001E104
 * Callers:
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 *     sub_18001E758 @ 0x18001E758 (sub_18001E758.c)
 *     sub_18002D72C @ 0x18002D72C (sub_18002D72C.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_1800552F8 @ 0x1800552F8 (sub_1800552F8.c)
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 *     sub_180067BFC @ 0x180067BFC (sub_180067BFC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 */

__int64 __fastcall sub_18001E104(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x48uLL) )
  {
    sub_18001E104(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
