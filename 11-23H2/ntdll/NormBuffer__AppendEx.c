/*
 * XREFs of NormBuffer__AppendEx @ 0x18008A0FC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x18010D804 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__Append @ 0x18008A160 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, __int64 a2, char a3, char a4)
{
  int v6; // edi
  __int64 v8; // rax
  char result; // al

  v6 = a2;
  if ( !(unsigned __int8)NormBuffer__Append(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(a1 + 40) - 2LL;
  *(_DWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 64) = v8;
  result = 1;
  *(_BYTE *)(a1 + 72) = a3;
  *(_BYTE *)(a1 + 73) = a4;
  return result;
}
