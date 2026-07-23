/*
 * XREFs of sub_1405E004C @ 0x1405E004C
 * Callers:
 *     sub_140936BD8 @ 0x140936BD8 (sub_140936BD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405E004C(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = &unk_140D32580;
  if ( a1 )
    v1 = *(_QWORD **)(a1 + 1464);
  return *(unsigned int *)(v1[165] + 4LL);
}
