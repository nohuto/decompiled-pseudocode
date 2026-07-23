/*
 * XREFs of sub_1405ADDA8 @ 0x1405ADDA8
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_14058E448 @ 0x14058E448 (sub_14058E448.c)
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_14059F908 @ 0x14059F908 (sub_14059F908.c)
 *     sub_1405C4E28 @ 0x1405C4E28 (sub_1405C4E28.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14058DFB8 @ 0x14058DFB8 (sub_14058DFB8.c)
 *     sub_14058E7F4 @ 0x14058E7F4 (sub_14058E7F4.c)
 */

void __fastcall sub_1405ADDA8(unsigned __int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  __int64 v9; // rbp

  v4 = *(_BYTE *)(a1 + 35);
  if ( ((v4 >> 6) & 1) != a2 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
         + 24512LL
         * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 22848));
      *(_QWORD *)(v9 + 22904) += a2 != 0 ? 1LL : -1LL;
    }
    if ( (v4 & 0x40) != 0 )
    {
      if ( a3 )
        sub_14058E7F4(a1);
    }
    else
    {
      sub_14058DFB8(a1, a4);
    }
    *(_BYTE *)(a1 + 35) = v4 ^ (v4 ^ ((_BYTE)a2 << 6)) & 0x40;
    if ( v9 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 22848));
  }
}
