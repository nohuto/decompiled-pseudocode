/*
 * XREFs of BgpFwInitializeReservePool @ 0x140AEF568
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEFA48 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140AF2E38 (BgpFwReservePoolSwap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140290C30 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140C70E18 = 0;
  qword_140C70E10 = a1;
  dword_140C70E30 = a2;
  stru_140C70E20.SizeOfBitMap = a2;
  stru_140C70E20.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C70E20);
}
