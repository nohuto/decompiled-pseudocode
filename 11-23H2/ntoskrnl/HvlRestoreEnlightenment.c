/*
 * XREFs of HvlRestoreEnlightenment @ 0x14053FD14
 * Callers:
 *     PopHiberCheckResume @ 0x140AA2EA0 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x1403836B0 (HvlpTryConfigureInterface.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HvlpPhase0Enlightenments @ 0x14054941C (HvlpPhase0Enlightenments.c)
 */

__int64 __fastcall HvlRestoreEnlightenment(char a1)
{
  __int64 result; // rax
  int v2; // eax

  result = HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  if ( a1 == 1 )
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
    {
      v2 = HvlpTryConfigureInterface(0LL);
      if ( v2 < 0 )
        KeBugCheckEx(0x20001u, v2, 0LL, 0LL, 0LL);
      result = HvlpPhase0Enlightenments(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
