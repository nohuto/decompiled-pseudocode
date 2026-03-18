/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405705A0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x14041FC80 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
