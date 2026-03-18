/*
 * XREFs of SepIsLpacCapabilitySid @ 0x1409CCDB0
 * Callers:
 *     SepCheckCapabilities @ 0x1409CC77C (SepCheckCapabilities.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepIsLpacCapabilitySid(PSID Sid1)
{
  PSID **v2; // rdi
  unsigned int v3; // ebx
  BOOLEAN result; // al

  v2 = (PSID **)SeLpacCapabilitySids;
  v3 = 0;
  while ( 1 )
  {
    result = RtlEqualSid(Sid1, **v2);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 0x12 )
      return result;
  }
  return 1;
}
