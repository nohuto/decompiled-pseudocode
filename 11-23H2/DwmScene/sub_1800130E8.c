/*
 * XREFs of sub_1800130E8 @ 0x1800130E8
 * Callers:
 *     sub_1800039D0 @ 0x1800039D0 (sub_1800039D0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 */

void __fastcall sub_1800130E8(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  void *v7; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 >= 8 )
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = sub_18001217C(v5 + 1);
    v7 = (void *)sub_18001090C(v6);
    *a1 = v7;
    memcpy(v7, v2, 2 * v3 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v3;
  a1[3] = v5;
}
