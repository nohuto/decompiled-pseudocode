/*
 * XREFs of Normalization__CanCombineWithStartFirstPair @ 0x18010E224
 * Callers:
 *     Normalization__IsNormalized @ 0x18010E548 (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x18010E064 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x18010E2AC (Normalization__GetFirstDecomposedCharPlane0.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x18010E4AC (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartFirstPair(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int CanCombinableCharactersCombine; // eax
  int FirstDecomposedCharPlane0; // ebx
  int SecondDecomposedCharPlane0; // eax

  CanCombinableCharactersCombine = *a2;
  if ( !*a2 )
  {
    FirstDecomposedCharPlane0 = *a3;
    if ( !*a3 )
    {
      FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, a4);
      *a3 = FirstDecomposedCharPlane0;
    }
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(a1, a4);
    CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                       a1,
                                       FirstDecomposedCharPlane0,
                                       SecondDecomposedCharPlane0);
    *a2 = CanCombinableCharactersCombine;
  }
  return Normalization__CanCombinableCharactersCombine(a1, CanCombinableCharactersCombine, a5);
}
