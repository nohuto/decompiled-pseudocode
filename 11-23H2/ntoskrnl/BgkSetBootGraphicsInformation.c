/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140AF1104
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140AF13A4 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C6AB80 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
