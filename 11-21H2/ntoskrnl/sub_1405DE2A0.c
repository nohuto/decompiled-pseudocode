/*
 * XREFs of sub_1405DE2A0 @ 0x1405DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1405DE484 @ 0x1405DE484 (sub_1405DE484.c)
 */

char __fastcall sub_1405DE2A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 32);
  if ( sub_1405DE484(*(_QWORD *)(a2 + 8), v2 + 216) )
    sub_1402D2864(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL), 0, 0);
  return 1;
}
