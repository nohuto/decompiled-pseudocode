/*
 * XREFs of ComposeHangulLVT @ 0x18010D798
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x18010D7CC (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A
    && (unsigned __int8)IsHangulLV(a1, a2, (unsigned int)a1, (unsigned int)(a2 - 4519)) )
  {
    return (unsigned int)(v3 + v2);
  }
  else
  {
    return 0LL;
  }
}
