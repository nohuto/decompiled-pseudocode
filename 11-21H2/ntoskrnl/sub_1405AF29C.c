/*
 * XREFs of sub_1405AF29C @ 0x1405AF29C
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 */

_BOOL8 __fastcall sub_1405AF29C(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
                   + 24512LL
                   * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2)
                   + 22788) != 0;
}
