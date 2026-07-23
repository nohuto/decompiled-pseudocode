/*
 * XREFs of BgkDrawText @ 0x140AF101C
 * Callers:
 *     NtDrawText @ 0x140606C70 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x140AF11C8 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C6AB80 && byte_140C6AB82 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
