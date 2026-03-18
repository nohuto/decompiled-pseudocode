/*
 * XREFs of BgkDrawText @ 0x140AF200C
 * Callers:
 *     NtDrawText @ 0x140606790 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x140AF21B8 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C6AC88 && byte_140C6AC8A )
    return BgDisplayString();
  else
    return 3221225473LL;
}
