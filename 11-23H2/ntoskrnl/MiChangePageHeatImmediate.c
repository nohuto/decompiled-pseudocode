/*
 * XREFs of MiChangePageHeatImmediate @ 0x14065433C
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x1402E7728 (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeLargePages @ 0x140333050 (MiCoalesceFreeLargePages.c)
 *     MiLargeFreePageToMdl @ 0x1403D7924 (MiLargeFreePageToMdl.c)
 *     MiZeroPageMakeHot @ 0x14065615C (MiZeroPageMakeHot.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x140347BC0 (MiColdPageSizeSupported.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddPageToHeatRanges @ 0x140654244 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  bool v7; // zf
  _DWORD v8[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = (__int64)memset(&v8[3], 0, 0x80uLL);
  if ( a3 )
  {
    v7 = (HvlEnlightenments & 0x200000) == 0;
  }
  else
  {
    result = MiColdPageSizeSupported(a2);
    v7 = (_DWORD)result == 0;
  }
  if ( !v7 )
  {
    v8[1] = 0;
    v8[0] = a3;
    v8[2] = 1;
    result = MiAddPageToHeatRanges((__int64)v8, a1, a2);
    if ( (_DWORD)result )
      return MiNotifyPageHeat(v8);
  }
  return result;
}
