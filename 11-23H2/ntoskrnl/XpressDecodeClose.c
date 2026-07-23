/*
 * XREFs of XpressDecodeClose @ 0x14067A28C
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A02850 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140885A60 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[26] == 903790814 )
    {
      a1[26] = 0;
      CMFFreeFn(0LL, a1);
    }
  }
}
