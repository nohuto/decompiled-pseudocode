/*
 * XREFs of sub_18007CB28 @ 0x18007CB28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_18007CB28(PRTL_BITMAP BitMapHeader)
{
  char v1; // of

  if ( !v1 )
    JUMPOUT(0x18007CB9CLL);
  RtlSetAllBits(BitMapHeader);
}
