/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140AF10F4
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140AF1394 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C6AB80 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
