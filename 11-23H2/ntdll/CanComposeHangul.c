/*
 * XREFs of CanComposeHangul @ 0x18010D724
 * Callers:
 *     Normalization__IsNormalized @ 0x18010E548 (Normalization__IsNormalized.c)
 * Callees:
 *     IsHangulLV @ 0x18010D7CC (IsHangulLV.c)
 */

char __fastcall CanComposeHangul(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // r8d
  char v6; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v4 = IsHangulLV(a1, a2, (unsigned int)a2, a4);
  v6 = 0;
  if ( v4 )
  {
    if ( (unsigned int)(v5 - 4520) <= 0x1A )
      return 1;
  }
  return v6;
}
