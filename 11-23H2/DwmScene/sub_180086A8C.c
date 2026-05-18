/*
 * XREFs of sub_180086A8C @ 0x180086A8C
 * Callers:
 *     sub_180060AF4 @ 0x180060AF4 (sub_180060AF4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180086A8C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9

  v2 = *(_QWORD **)(a1 + 24);
  v3 = *(_QWORD **)(a1 + 32);
  if ( v2 == v3 )
    return 1;
  while ( v2 != v3 )
  {
    if ( (a2 & *v2) == *v2 && (a2 & v2[1]) == 0 )
      return 1;
    v2 += 2;
  }
  return 0;
}
