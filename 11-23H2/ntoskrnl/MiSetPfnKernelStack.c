/*
 * XREFs of MiSetPfnKernelStack @ 0x14021B4D8
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     MiMarkKernelStack @ 0x140376360 (MiMarkKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x14021B51C (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return MiMarkPfnTradable();
  }
  return result;
}
