/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x14064DDA8
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1402E87B4 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0
    || *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 6808) + 16LL * a2) >= *(int *)(a1 + 16512) )
  {
    return 1LL;
  }
  else
  {
    return (unsigned __int64)MiNodeFreeZeroPages(
                               (_QWORD *)(*(_QWORD *)(a1 + 16) + 25408 * ((unsigned __int64)a2 >> byte_140C65A8D)),
                               (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140C65A8E)),
                               a3 != 0 ? 4096 : 4098) <= 0x40;
  }
}
