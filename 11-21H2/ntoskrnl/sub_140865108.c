/*
 * XREFs of sub_140865108 @ 0x140865108
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1409EC6F0 @ 0x1409EC6F0 (sub_1409EC6F0.c)
 */

__int64 __fastcall sub_140865108(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  if ( !a1 )
    return 3221225485LL;
  v1 = (_QWORD *)(a1 + 8);
  for ( i = *(_QWORD **)(a1 + 8); i != v1; i = (_QWORD *)*i )
    sub_1409EC6F0(i);
  return 0LL;
}
