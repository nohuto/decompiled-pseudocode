/*
 * XREFs of MiCheckSystemNxFault @ 0x140247C5C
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402307A0 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140279D30 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
