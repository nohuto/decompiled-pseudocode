/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140AECF90
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140384CD8 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C6AB80 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
