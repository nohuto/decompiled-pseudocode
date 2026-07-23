/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x140570AE0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x140420010 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
