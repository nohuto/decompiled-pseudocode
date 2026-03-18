/*
 * XREFs of XpressDecodeClose @ 0x140679D3C
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A025C0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140885820 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( Buffer )
  {
    if ( Buffer[26] == 903790814 )
    {
      Buffer[26] = 0;
      CMFFreeFn(0LL, Buffer);
    }
  }
}
