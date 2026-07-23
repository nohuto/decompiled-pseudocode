/*
 * XREFs of KeRemoveEnclavePage @ 0x140570BE0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAD2D8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x140420010 (KiEncls.c)
 *     KiEnclsStatus @ 0x140570C58 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
