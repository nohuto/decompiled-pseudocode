/*
 * XREFs of BgpFwReservePoolSwap @ 0x140AF1E48
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140AEE5A8 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C70D50 = qword_140D1B0C8;
      dword_140C70D70 = dword_140D1B0C4;
      dword_140C70D58 = dword_140D1B0C0;
      stru_140C70D60 = (_RTL_BITMAP)xmmword_140D1B0D0;
    }
  }
  else
  {
    dword_140D1B0C0 = dword_140C70D58;
    qword_140D1B0C8 = qword_140C70D50;
    dword_140D1B0C4 = dword_140C70D70;
    xmmword_140D1B0D0 = (__int128)stru_140C70D60;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
