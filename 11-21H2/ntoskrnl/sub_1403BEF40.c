/*
 * XREFs of sub_1403BEF40 @ 0x1403BEF40
 * Callers:
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 *     sub_140B4BD48 @ 0x140B4BD48 (sub_140B4BD48.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 */

void __fastcall sub_1403BEF40(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *i; // rax
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( i = (__int64 *)qword_140CE2210; i != &qword_140CE2210; i = (__int64 *)*i )
    {
      if ( v2 == i[2] )
      {
        if ( a1 )
          sub_1403B1B5C(a1, (__int64)v3);
        return;
      }
    }
  }
  v5 = (_QWORD *)qword_140CE2218;
  if ( *(__int64 **)qword_140CE2218 != &qword_140CE2210 )
    __fastfail(3u);
  *v3 = &qword_140CE2210;
  v3[1] = v5;
  *v5 = v3;
  qword_140CE2218 = (__int64)v3;
}
