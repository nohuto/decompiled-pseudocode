/*
 * XREFs of sub_1409CE630 @ 0x1409CE630
 * Callers:
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

char __fastcall sub_1409CE630(void *a1, void *a2)
{
  if ( a1 )
  {
    if ( !a2 || !RtlEqualSid(a1, a2) )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
