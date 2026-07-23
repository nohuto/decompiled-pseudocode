/*
 * XREFs of IsHangulLV @ 0x18010D7CC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x18010D724 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x18010D798 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
