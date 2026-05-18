/*
 * XREFs of sub_18001E8C0 @ 0x18001E8C0
 * Callers:
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 * Callees:
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 */

_QWORD *__fastcall sub_18001E8C0(_QWORD *a1, void **a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8
  void **v6; // rax

  v3 = a3;
  v4 = a3[2];
  if ( v3[3] >= 0x10uLL )
    v3 = (_QWORD *)*v3;
  v6 = sub_18001DE60(a2, v3, v4);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *((_OWORD *)a1 + 1) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = (void *)15;
  *(_BYTE *)v6 = 0;
  return a1;
}
