/*
 * XREFs of sub_1405E5074 @ 0x1405E5074
 * Callers:
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405E5074(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a1 != *a2 )
  {
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}
