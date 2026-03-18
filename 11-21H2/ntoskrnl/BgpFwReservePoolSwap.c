/*
 * XREFs of BgpFwReservePoolSwap @ 0x140AAB1AC
 * Callers:
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140AADC80 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C54910 = qword_140C54880;
      dword_140C54930 = dword_140C5487C;
      result = (unsigned int)dword_140C54878;
      HintIndex = dword_140C54878;
      stru_140C54920 = (RTL_BITMAP)xmmword_140C54888;
    }
  }
  else
  {
    dword_140C54878 = HintIndex;
    qword_140C54880 = qword_140C54910;
    dword_140C5487C = dword_140C54930;
    xmmword_140C54888 = (__int128)stru_140C54920;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
