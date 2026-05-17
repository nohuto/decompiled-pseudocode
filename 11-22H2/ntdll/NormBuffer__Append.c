/*
 * XREFs of NormBuffer__Append @ 0x180089960
 * Callers:
 *     Normalization__Normalize @ 0x1800896E8 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x180089814 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendEx @ 0x1800898FC (NormBuffer__AppendEx.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD **v2; // r9
  _QWORD *v3; // r10
  _WORD *v4; // rax
  _WORD *v6; // rcx

  v2 = (_WORD **)(a1 + 40);
  v3 = (_QWORD *)(a1 + 32);
  if ( a2 >= 0x10000 )
  {
    v6 = *v2;
    if ( (unsigned __int64)*v2 >= *v3 )
      return 0;
    *v6 = (a2 - 0x10000) / 1024 - 10240;
    *v2 = v6 + 1;
    LOWORD(a2) = (a2 - 0x10000) % 1024 - 9216;
  }
  v4 = *v2;
  if ( (unsigned __int64)*v2 < *v3 )
  {
    *v4 = a2;
    *v2 = v4 + 1;
    return 1;
  }
  return 0;
}
