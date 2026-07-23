/*
 * XREFs of sub_1409CCDB0 @ 0x1409CCDB0
 * Callers:
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

BOOLEAN __fastcall sub_1409CCDB0(PSID Sid1)
{
  PSID **v2; // rdi
  unsigned int v3; // ebx
  BOOLEAN result; // al

  v2 = (PSID **)off_140D3BE10;
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
