/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405706DC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x14041FC80 (KiEncls.c)
 *     KiEnclsStatus @ 0x140570718 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
