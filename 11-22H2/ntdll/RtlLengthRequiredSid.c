/*
 * XREFs of RtlLengthRequiredSid @ 0x18007D460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthRequiredSid(unsigned int a1)
{
  if ( a1 > 0x3FFFFFF7 )
    return 0xFFFFFFFFLL;
  else
    return 4 * a1 + 8;
}
