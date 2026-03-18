/*
 * XREFs of KeBlockEnclavePage @ 0x140570438
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x14041F5C0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405707B8 (KiEnclsStatus.c)
 */

__int64 KeBlockEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  do
    v0 = KiEncls(9u);
  while ( v0 == 15 );
  return KiEnclsStatus(v0);
}
