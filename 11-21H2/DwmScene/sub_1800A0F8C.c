/*
 * XREFs of sub_1800A0F8C @ 0x1800A0F8C
 * Callers:
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180020BF8 @ 0x180020BF8 (sub_180020BF8.c)
 */

bool __fastcall sub_1800A0F8C(char **a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  bool v6; // si
  unsigned __int64 v7; // rdx
  bool result; // al

  v4 = sub_180020BF8(a1, (char *)a2);
  v5 = (unsigned __int64)a1[3];
  v6 = v4 == 0;
  if ( v5 >= 0x10 )
    sub_180010884(*a1, v5 + 1);
  a1[2] = 0LL;
  a1[3] = (char *)15;
  *(_BYTE *)a1 = 0;
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 >= 0x10 )
    sub_180010884(*(char **)a2, v7 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  result = v6;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
