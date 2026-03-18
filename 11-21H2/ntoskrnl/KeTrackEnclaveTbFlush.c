/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14056D68C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1404205F0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056D6C8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
