/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x140570C1C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x140420010 (KiEncls.c)
 *     KiEnclsStatus @ 0x140570C58 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
