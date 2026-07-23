/*
 * XREFs of sub_1403B3E0C @ 0x1403B3E0C
 * Callers:
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403B3E0C()
{
  __int64 i; // rdx
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    v1 = 0;
    for ( *(_BYTE *)(i + 516) = 0; v1 < *(_DWORD *)(i + 296); *(_BYTE *)(v3 + result + 60) = 0 )
    {
      v2 = v1++;
      v3 = 136 * v2;
      result = *(_QWORD *)(i + 312);
    }
  }
  return result;
}
