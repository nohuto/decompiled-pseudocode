/*
 * XREFs of sub_18008E6B0 @ 0x18008E6B0
 * Callers:
 *     sub_180048630 @ 0x180048630 (sub_180048630.c)
 *     sub_180050540 @ 0x180050540 (sub_180050540.c)
 *     sub_180063320 @ 0x180063320 (sub_180063320.c)
 *     sub_1800A6F80 @ 0x1800A6F80 (sub_1800A6F80.c)
 * Callees:
 *     sub_18001DAC0 @ 0x18001DAC0 (sub_18001DAC0.c)
 */

bool __fastcall sub_18008E6B0(__int64 a1, __int64 a2)
{
  return !sub_18001DAC0((_QWORD *)(a2 + 24), (_QWORD *)(a1 + 24))
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
