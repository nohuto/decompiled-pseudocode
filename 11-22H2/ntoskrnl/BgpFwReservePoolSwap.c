/*
 * XREFs of BgpFwReservePoolSwap @ 0x140AF2E38
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140AEF568 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C70E10 = qword_140D1B188;
      dword_140C70E30 = dword_140D1B184;
      dword_140C70E18 = dword_140D1B180;
      stru_140C70E20 = (_RTL_BITMAP)xmmword_140D1B190;
    }
  }
  else
  {
    dword_140D1B180 = dword_140C70E18;
    qword_140D1B188 = qword_140C70E10;
    dword_140D1B184 = dword_140C70E30;
    xmmword_140D1B190 = (__int128)stru_140C70E20;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
