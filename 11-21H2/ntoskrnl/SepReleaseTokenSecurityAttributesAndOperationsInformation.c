/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140754718
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140754758 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReleaseTokenSecurityAttributesAndOperationsInformation(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      SepFreeCapturedTokenSecurityAttributesInformation(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
