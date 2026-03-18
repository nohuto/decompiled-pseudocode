/*
 * XREFs of BgkDrawText @ 0x140AB070C
 * Callers:
 *     NtDrawText @ 0x140639760 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x140AB08A0 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C54D48 && byte_140C54D49 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
