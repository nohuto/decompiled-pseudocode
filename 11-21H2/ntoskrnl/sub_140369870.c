/*
 * XREFs of sub_140369870 @ 0x140369870
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_140369870(_DWORD *a1, int a2, int *a3)
{
  int result; // eax
  int v5; // r10d
  unsigned int v6; // r9d
  int v7; // ecx

  result = 0;
  v5 = 0x80000000;
  if ( a1 )
  {
    v6 = -2147483646;
    if ( !a1[10] )
      v6 = 0x80000000;
    v7 = v6 | 1;
    if ( !a1[11] )
      v7 = v6;
    v5 = v7 | 0x40;
    if ( !a1[12] )
      v5 = v7;
    result = (a2 ^ v5) & 0x7FFFFFFF;
  }
  if ( a3 )
    *a3 = v5;
  return result;
}
