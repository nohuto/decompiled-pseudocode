/*
 * XREFs of NormBuffer__LastStartBase @ 0x18010C510
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180090608 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__LastStartBasePair @ 0x18010C53C (NormBuffer__LastStartBasePair.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x18010CCA4 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = Normalization__GetFirstDecomposedCharPlane0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
