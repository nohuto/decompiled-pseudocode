/*
 * XREFs of BgpFwInitializeReservePool @ 0x140AEE5A8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEEA88 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140AF1E38 (BgpFwReservePoolSwap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140290D50 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140C70D50 = a1;
  dword_140C70D70 = a2;
  stru_140C70D60.SizeOfBitMap = a2;
  stru_140C70D60.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C70D60);
}
