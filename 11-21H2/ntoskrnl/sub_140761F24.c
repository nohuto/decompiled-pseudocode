/*
 * XREFs of sub_140761F24 @ 0x140761F24
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_140761E94 @ 0x140761E94 (sub_140761E94.c)
 *     sub_14096A1D0 @ 0x14096A1D0 (sub_14096A1D0.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140761F24(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && (unsigned int)sub_14042A5E0(i - 37, a3); i = (_QWORD *)*i )
    ;
}
