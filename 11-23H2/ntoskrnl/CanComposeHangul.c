/*
 * XREFs of CanComposeHangul @ 0x1405B08DC
 * Callers:
 *     Normalization__IsNormalized @ 0x1409C0CBC (Normalization__IsNormalized.c)
 * Callees:
 *     IsHangulLV @ 0x1405B0984 (IsHangulLV.c)
 */

char __fastcall CanComposeHangul(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // r8d
  char v4; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v2 = IsHangulLV(a1, a2, (unsigned int)a2);
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v3 - 4520) <= 0x1A )
      return 1;
  }
  return v4;
}
