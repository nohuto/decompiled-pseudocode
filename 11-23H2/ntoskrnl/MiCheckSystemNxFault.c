/*
 * XREFs of MiCheckSystemNxFault @ 0x140357488
 * Callers:
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140261930 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x140341BE0 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x14064646C (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
