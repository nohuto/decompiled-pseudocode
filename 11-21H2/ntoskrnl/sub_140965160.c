/*
 * XREFs of sub_140965160 @ 0x140965160
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140965160(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = v4 - 3;
    v4 = (_QWORD *)*v4;
    sub_14042A5E0(v5, a2);
  }
  sub_1402D8494(*(void **)(a1 + 16));
  sub_1402D8494((void *)a1);
}
