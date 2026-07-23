/*
 * XREFs of BgpFwLibraryDestroy @ 0x140AEEA88
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140AF12E8 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     BgpFwInitializeReservePool @ 0x140AEE5A8 (BgpFwInitializeReservePool.c)
 *     ResFwBackgroundTransition @ 0x140AEEAF8 (ResFwBackgroundTransition.c)
 *     BgpFoDestroy @ 0x140AEECA8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C0E558 )
  {
    BgpFoDestroy(qword_140C0E558);
    if ( *(_QWORD *)qword_140C0E558 && (*(_DWORD *)(qword_140C0E558 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C0E558);
    BgpFwFreeMemory(qword_140C0E558);
    qword_140C0E558 = 0LL;
  }
  if ( qword_140C0E4E0 )
  {
    BgpFwFreeMemory(qword_140C0E4E0);
    qword_140C0E4E0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C0E560 = 0LL;
    qword_140C0E578 = 0LL;
    qword_140C0E570 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140C0E4B0 = 0;
  return 0LL;
}
