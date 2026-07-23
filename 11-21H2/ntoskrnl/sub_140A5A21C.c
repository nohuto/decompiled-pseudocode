/*
 * XREFs of sub_140A5A21C @ 0x140A5A21C
 * Callers:
 *     sub_140B1A508 @ 0x140B1A508 (sub_140B1A508.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1402471E0 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall sub_140A5A21C(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = byte_140C09818;
  return 1LL << LeastSignificantBit;
}
