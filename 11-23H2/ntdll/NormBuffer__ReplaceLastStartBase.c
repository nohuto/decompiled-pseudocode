/*
 * XREFs of NormBuffer__ReplaceLastStartBase @ 0x18010DD00
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x18010D804 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetSecondAndThirdDecomposedCharPlane0 @ 0x18010E3E0 (Normalization__GetSecondAndThirdDecomposedCharPlane0.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBase(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  char result; // al
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  Normalization__GetSecondAndThirdDecomposedCharPlane0(*(_QWORD *)(a1 + 112), v4, &v8, &v7);
  if ( !v7 || (result = NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v7)) != 0 )
  {
    if ( v8 )
      return NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v8);
    else
      return 1;
  }
  return result;
}
