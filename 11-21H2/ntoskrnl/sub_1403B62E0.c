/*
 * XREFs of sub_1403B62E0 @ 0x1403B62E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char sub_1403B62E0()
{
  __int64 i; // r8
  unsigned int v1; // r9d
  __int64 v2; // rax

  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 989) )
    {
      v1 = 0;
      for ( *(_BYTE *)(i + 988) = 1; v1 < *(_DWORD *)(i + 296); *(_BYTE *)(136 * v2 + *(_QWORD *)(i + 312) + 124) = 1 )
        v2 = v1++;
    }
  }
  return 1;
}
