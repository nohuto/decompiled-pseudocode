/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14056D55C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1404205F0 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
