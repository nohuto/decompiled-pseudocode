/*
 * XREFs of sub_14059FBF4 @ 0x14059FBF4
 * Callers:
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 */

void __fastcall sub_14059FBF4(ULONG_PTR a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0
    && !*(_WORD *)(a1 + 32)
    && ((*(_BYTE *)(a1 + 34) & 7) != 5 || *(__int64 *)(a1 + 40) < 0 || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 16)) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
    sub_1405ADEB8(a1, 128LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    *(_BYTE *)(a1 + 35) &= ~0x10u;
    sub_140338500(a1, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
  }
}
