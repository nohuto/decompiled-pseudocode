/*
 * XREFs of MiLogRelocationFaults @ 0x1406AB91C
 * Callers:
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiLogRelocationFaults(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 **i; // rbx
  __int64 v9; // rcx

  v6 = MiReferenceControlAreaFile(a1);
  MiLogRelocationRva(*a2, a2[1], v6, a1);
  for ( i = *(__int64 ***)(a3 + 16); i; i = (__int64 **)*i )
  {
    v9 = *((unsigned int *)i + 2);
    if ( (v9 & 0xFFF) != 0 )
      MiLogRelocationRva(v9, 0x2000LL, v6, a1);
  }
  return MiDereferenceControlAreaFile(a1, v6);
}
