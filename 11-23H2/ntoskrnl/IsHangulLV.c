/*
 * XREFs of IsHangulLV @ 0x1405B0414
 * Callers:
 *     CanComposeHangul @ 0x1405B036C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405B03E0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1409C1338 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
