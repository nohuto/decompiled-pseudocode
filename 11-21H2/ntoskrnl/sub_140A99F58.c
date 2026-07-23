/*
 * XREFs of sub_140A99F58 @ 0x140A99F58
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 * Callees:
 *     sub_140A81A34 @ 0x140A81A34 (sub_140A81A34.c)
 *     sub_140A9A0E0 @ 0x140A9A0E0 (sub_140A9A0E0.c)
 */

_QWORD *__fastcall sub_140A99F58(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rbx
  __int64 v4; // r10
  _QWORD *i; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD **)(*((_QWORD *)qword_140D57500 + 2) + 16 * v2);
  if ( *v3 != v3 && (unsigned int)sub_140A81A34((unsigned __int64 *)qword_140D57500 + 2 * v2 + 4, a1, a1 + 1) )
  {
    sub_140A9A0E0(v3, v4);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
